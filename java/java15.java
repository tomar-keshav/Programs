// package java;

public class java15 {
    //multidimensional arrays
    public static void main(String [] args){
        // syntax 2d arrays are defined as
        // below is declared an array with name arr of dimensions 5*6 
        int arr[][] = new int[5][6];

        // accessing an array
        arr[2][3]=5;
        System.out.println(arr[2][3]);


        //declaration type 2 - declaration and initialization

        int arr2[][]={{1,2,3},{4,7}};

        System.out.println(arr2[1][1]);
        // note that in java a 2d array can be consist of 1d arrays of different sizes
        // like arr2 consists of 2 1-D arrays of size 3 and 2 respectively
        // if we try to access the element which is not available, it will throw the error out of bounds

       
        //printing the array
        System.out.println("Printing the array");
        for(int i=0; i<arr2.length; i++){
            for(int j=0; j<arr2[i].length; j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }

    }
}
