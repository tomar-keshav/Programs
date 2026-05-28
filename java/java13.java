// package java;

public class java13 {
    // switch -case statement = similar to c++
    public static void main(String[] args) {
        int y = (int)(Math.random()*10);
        int x = y%4;
        int a = 12, b = 3;
        switch (x) {
            case 1:
                System.out.println("Let's do addition");
                System.out.println(a + b);
                break;
            case 2:
                System.out.println("Let's do subtraction");
                System.out.println(a - b);
                //remember to must add break
                break;
            case 3:
                System.out.println("Let's do multiplication");
                System.out.println(a * b);
                break;
            default:
                System.out.println("Logically It will come here when value of x will be 0");
                break;
        }
    }
}
