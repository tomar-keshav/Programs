public class java9{
    public static void main(String [] args){
        // ternary operator also works the same (a>b)?true:false
        int num = 5;
        String result = (num>3)?"Number is greater than 3":"Number is not greater than 3";
        System.out.println(result);
    }
}