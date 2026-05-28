/*
I am dead inside
Do you like NCT, sKz, BTS?
5 4 3 2 1 Moonwalk
Imma knock it down like domino
Is this what you want? Is this what you want?
Let's ttalkbocky about that :()
 */
import java.io.*;

public class x242E
{
    public static void main(String omkar[]) throws Exception
    {
        FastScanner infile = new FastScanner();
        int N = infile.nextInt();
        int[] arr = infile.nextInts(N);
        LazySegTree[] trees = new LazySegTree[20];
        for(int i=0; i < 20; i++)
            trees[i] = new LazySegTree();
        for(int b=0; b < 20; b++)
            for(int i=0; i < N; i++)
                if((arr[i]&(1<<b)) > 0)
                    trees[b].update(i, i);
        int Q = infile.nextInt();
        StringBuilder sb = new StringBuilder();
        while(Q-->0)
        {
            int type = infile.nextInt();
            if(type == 1)
            {
                int left = infile.nextInt()-1;
                int right = infile.nextInt()-1;
                long res = 0L;
                for(int b=0; b < 20; b++)
                    res |= (1L<<b)*(trees[b].query(left, right)>0?1:0);
                sb.append(res+"\n");
            }
            else
            {
                int left = infile.nextInt()-1;
                int right = infile.nextInt()-1;
                int x = infile.nextInt();
                for(int b=0; b < 20; b++)
                    if((x&(1<<b)) > 0)
                        trees[b].update(left, right);
            }
        }
        System.out.print(sb);
    }
}
class LazySegTree
{
    public int N;
    public int[] segtree;
    public int[] lazy;

    public LazySegTree()
    {
        N = 1<<17;
        segtree = new int[2*N+5];
        lazy = new int[2*N+5];
        init(1, 0, N-1);
    }
    public void init(int id, int L, int R)
    {
        segtree[id] = 0;
        if(L < R)
        {
            int mid = (L+R)>>1;
            init(id+id, L, mid);
            init(id+id+1, mid+1, R);
        }
    }
    public int query(int L, int R)
    {
        return queryHelper(1, 0, N-1, L, R);
    }
    public int queryHelper(int id, int L, int R, int left, int right)
    {
        if(R < left || right < L)
            return 0;
        if(left <= L && R <= right)
            return segtree[id];
        int mid = (L+R)>>1;
        if(L < R)
            propagate(id, mid-L+1, R-mid);
        return queryHelper(id+id, L, mid, left, right)+queryHelper(id+id+1, mid+1, R, left, right);
    }
    public void update(int L, int R)
    {
        updateHelper(1, 0, N-1, L, R);
    }
    public void updateHelper(int id, int L, int R, int left, int right)
    {
        if(R < left || right < L)
            return;
        if(left <= L && R <= right)
        {
            segtree[id] = R-L+1-segtree[id];
            lazy[id] ^= 1;
            return;
        }
        int mid = (L+R)>>1;
        if(L < R)
            propagate(id, mid-L+1, R-mid);
        updateHelper(id+id, L, mid, left, right);
        updateHelper(id+id+1, mid+1, R, left, right);
        segtree[id] = comb(segtree[id+id], segtree[id+id+1]);
    }
    public int comb(int a, int b)
    {
        return a+b;
    }
    public void propagate(int id, int K1, int K2)
    {
        if(lazy[id] == 0)
            return;
        lazy[id] = 0;
        segtree[id+id] = K1-segtree[id+id];
        segtree[id+id+1] = K2-segtree[id+id+1];
        lazy[id+id] ^= 1;
        lazy[id+id+1] ^= 1;
    }
}
class FastScanner
{
    //I don't understand how this works lmao
    private int BS = 1 << 16;
    private char NC = (char) 0;
    private byte[] buf = new byte[BS];
    private int bId = 0, size = 0;
    private char c = NC;
    private double cnt = 1;
    private BufferedInputStream in;

    public FastScanner() {
        in = new BufferedInputStream(System.in, BS);
    }

    public FastScanner(String s) {
        try {
            in = new BufferedInputStream(new FileInputStream(new File(s)), BS);
        } catch (Exception e) {
            in = new BufferedInputStream(System.in, BS);
        }
    }

    private char getChar() {
        while (bId == size) {
            try {
                size = in.read(buf);
            } catch (Exception e) {
                return NC;
            }
            if (size == -1) return NC;
            bId = 0;
        }
        return (char) buf[bId++];
    }

    public int nextInt() {
        return (int) nextLong();
    }

    public int[] nextInts(int N) {
        int[] res = new int[N];
        for (int i = 0; i < N; i++) {
            res[i] = (int) nextLong();
        }
        return res;
    }

    public long[] nextLongs(int N) {
        long[] res = new long[N];
        for (int i = 0; i < N; i++) {
            res[i] = nextLong();
        }
        return res;
    }

    public long nextLong() {
        cnt = 1;
        boolean neg = false;
        if (c == NC) c = getChar();
        for (; (c < '0' || c > '9'); c = getChar()) {
            if (c == '-') neg = true;
        }
        long res = 0;
        for (; c >= '0' && c <= '9'; c = getChar()) {
            res = (res << 3) + (res << 1) + c - '0';
            cnt *= 10;
        }
        return neg ? -res : res;
    }

    public double nextDouble() {
        double cur = nextLong();
        return c != '.' ? cur : cur + nextLong() / cnt;
    }

    public double[] nextDoubles(int N) {
        double[] res = new double[N];
        for (int i = 0; i < N; i++) {
            res[i] = nextDouble();
        }
        return res;
    }

    public String next() {
        StringBuilder res = new StringBuilder();
        while (c <= 32) c = getChar();
        while (c > 32) {
            res.append(c);
            c = getChar();
        }
        return res.toString();
    }

    public String nextLine() {
        StringBuilder res = new StringBuilder();
        while (c <= 32) c = getChar();
        while (c != '\n') {
            res.append(c);
            c = getChar();
        }
        return res.toString();
    }

    public boolean hasNext() {
        if (c > 32) return true;
        while (true) {
            c = getChar();
            if (c == NC) return false;
            else if (c > 32) return true;
        }
    }
}