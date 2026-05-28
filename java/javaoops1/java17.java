package java.javaoops1;
// package java;

public abstract class java17 {
    // class, objects and methods in java

    public static void main(String args[]){
        Animal animal1 = new Animal();
        animal1.name="Hippopotamus";
        animal1.namereader();
    }
};

class Animal{
    String name; 
    void namereader(){
        System.out.println("My name is "+this.name);
    }
}
