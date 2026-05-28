// package java;

public class java14 {
    // arrays in java
    public static void main(String[] args){
        //declaration of array
        String[] x = new String[100];

        //declaration and initialization of array
        int[] y = {1,2,3,4,5};

        //accessing a value, if a value out of memory (like at index 10) is tried to be accessed it will throw an error out of bounds
        System.out.println(y[1]);

        //printing the length
        // array in java has got many methods one of which is .length() method which will print the length of array
        System.out.println("Length of x is "+x.length);
        System.out.println("Lenght of y is "+y.length);


        // running for loop on array
        for(int i=0; i<y.length; i++){
            System.out.print(y[i]+" ");
        }
    
    }
}
