// package java;

public class java16 {
    // for-each loop -> it is similar to the for-each loop of the c++ language
    /*
     * for(auto i: arr){
     * cout<<i<<endl;
     * }
     */

     //note -> we cannot use auto in java, we have to specifically tell the datatype

    public static void main(String[] args) {
        int arr1d[] = { 1, 2, 3, 4, 5 };

        char arr2d[][] = { { 'a', 'b', 'c', 'd' }, { 'e', 'f', 'g', 'h' } };

        //
        System.out.println("1d array is ");
        for(int i: arr1d){
            System.out.print(i+" ");
        }
        System.out.println();

        System.out.println("2d array is");

        // 2d array is formed of 1d character arrays, so it will be extracted in that form
        for(char[] x: arr2d){
            for(char c: x){
                System.out.print(c+" ");
            }
            System.out.println();
        }
    }
}
