import sys
from pathlib import Path
import pymupdf4llm


def convert_brd_to_md(folder: Path) -> None:
	"""Prefer a file named BRD.pdf in `folder`; otherwise look for *.brd.

	Convert each found file to markdown using pymupdf4llm.to_markdown and
	write a .md file with the same base name.
	"""

	# Prefer exact BRD.pdf if present
	brd_pdf = folder / "BRD.pdf"
	if brd_pdf.exists():
		files = [brd_pdf]
	else:
		files = sorted(folder.glob("*.brd"))

	if not files:
		print(f"No BRD.pdf or .brd files found in: {folder}")
		return

	for brd in files:
		try:
			md_text = pymupdf4llm.to_markdown(str(brd))
		except Exception as e:
			print(f"Failed to convert {brd.name}: {e}")
			continue

		out_path = brd.with_suffix('.md')
		out_path.write_text(md_text, encoding='utf-8')
		print(f"Wrote markdown for {brd.name} -> {out_path.name}")


if __name__ == '__main__':
	# Resolve folder: same folder as this script, or optional first CLI arg
	if len(sys.argv) > 1:
		base_folder = Path(sys.argv[1]).resolve()
	else:
		base_folder = Path(__file__).parent.resolve()

	convert_brd_to_md(base_folder)
