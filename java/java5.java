public class java5 {
    // arithmatic operators in java +,-,%,*,/,++,--
    // these work all the same way
    // pre-increment, post-increment also works the same way
    public static void main(String[] args) {
        int number1 = 5;
        int number2 = 3;

        System.out.println("Remainder is " + number1 % number2);
        System.out.println("Number1 becomes " + number1++);
        System.out.println("But changes will reflect after this line because of post-increment operator used");
        System.out.println("number1 becomes " + number1);
    }
}
