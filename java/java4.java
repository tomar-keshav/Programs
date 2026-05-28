// this program is about datatypes in java 
public class java4 {
    public static void main(String [] args){
        //declaration of string
        String name = "Keshav Tomar";
        System.out.println("Hello "+name);


        int number = 5; //declaration of integer
        System.out.println("The value of number is "+ number);

        //declaration of double
        double db = 15.6;
        System.out.println("The double value is "+ db);

        // In java typecasting is necessary, we cannot directly save 15.6 as 15 in an integer
        // it will throw an error
        // decimal values like 15.6 are automatically considered double in java, so they need to be typecasted
        //declaration of float
        float ft = (float)15.6;
        System.out.println("The float value is "+ ft);

        // typecasting double to integer
        int x = (int)db;
        System.out.println("the integer value of double is "+x);

        // changing value of string name
        name = "Madhav Tomar";
        System.out.println("hello "+name);
    }
}
