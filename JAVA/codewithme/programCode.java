//package codewithme;
//import java.util.*;


//BUBBLE SORT
/*
class programCode{
    public static void printArray(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
    int arr[]= {3, 2, 5, 1};
    for(int i=0; i<arr.length-1; i++){
        for(int j=0; j<arr.length-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    printArray(arr);
    }
}
 */


//SELECTION SORT
/*
public class programCode{
    public static void printArray(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+ " ");
        }
    }
    public static void main(String args[]){
        int arr[]= {5, 3, 6, 1, 2};
        for(int i=0; i<arr.length-1; i++){
            int smallest =i;
            for(int j= i+1; j<arr.length; j++){
                if(arr[smallest] > arr[j]){
                    smallest= j;
                }
            }
            int temp= arr[smallest];
            arr[smallest]= arr[i];
            arr[i]= temp;
        }
        printArray(arr);
    }
}
*/

//INSERTION SORT
/*
class programCode{
    public static void printArray(int arr[]){
        for(int i=0;  i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
        int arr[]= {3, 1, 5, 2, 7, 6};
        for(int i=1; i<arr.length; i++){
            int current= arr[i];
            int j= i-1;
            while(j>=0 && current< arr[j]){
                arr[j+1]= arr[j];
                j--;
            }
            arr[j+1]= current;
        }
        printArray(arr);
    }
}

 */

//MEHTODS IN JAVA
/*
public class programCode{
     int logic(int x, int y){
        int w;
        if(x>y){
            w= 2*x+y;
        }
        else{
            w= 2*y+x;
        }
        return w;

    }
    public static void main(String args[]){
        int a= 40;
        int b= 20;
        Main no= new Main();
        int c= no.logic(a, b);

        System.out.println(c);
    }
}
 */

//METHOD OVERLOADING
/*
public class programCode{
    static void go(){
        System.out.println("good morning broo!");
    }
    static void go(int a){
        System.out.println("good morning "+a+" broo!");
    }
    //parameter are x and y
    static void go(int x, int y){
        System.out.println("good morning "+x+" broo!");
        System.out.println("good morning "+y+" broo!");
    }
    public static void main(String args[]){
        go();
        go(3000);
        go(3000, 4000); //arguments are actual

    }

 */

//VARARGS VARIABLE ARGUMENTS
/*
public class Main{
    static int sum(int x, int... arr){
        //Available as int[] arr
        int result= 0;
        for(int a: arr){
            result+=a;
        }
        return result;
    }
    public static void main(String args[]){
        System.out.println("the sum of nothing is: "+ sum(1));
        System.out.println("the sum of 1 and 2: "+ sum(1,2));
        System.out.println("the sum of 1,2 and 3: "+sum(1,2,3));
        System.out.println("the sum of 1,2,3 and 4: "+ sum(1,2,3,4));
    }
}
 */

//JAVA CLASS CREATION
/*
class Employee{
    int id;
    String name;
    int salary;

    public void printit(){
        System.out.println(id);
        System.out.println(name);
    }

    public int getsalary(){
        return salary;
    }
}

public class Main{
    public static void main(String args[]){
        System.out.println("this is a custom class");
        Employee madhav= new Employee(); // created an object madhav of class Employee
        Employee john= new Employee();
        //setting attributes
        john.id= 3;
        john.name= "John";
        john.salary= 123;
        madhav.id= 01;
        madhav.name= "Madhav";
        madhav.salary= 122;
        int salary= john.getsalary();
        john.printit();
        System.out.println(salary);

        madhav.printit();

    }
}
 */

//TYPES OF ERROR
/*
public class Main{
    public static void main(String[] args){

        SYNTAX ERROR

        int a= 30
        b=56


        LOGICAL ERROR

        write a program to print all prime number between 1 and 10
        System.out.println("2");
        for(int i=1; i<5; i++){
        System.out.println(2*i+1);
        }

        RUNTIME ERROR

        int k;
        Scanner sc= new Scanner(System.in);
        k= sc.nextInt();
        System.out.println("integer part of 1000 divisble by k= "+ 1000/k);  (produces error for k=0)
        }

        }
}
 */

//TRY AND CATCH
/*
public class Main{
    public static void main(String[] args) {
        int [] arr= new int[5];
        arr[0]= 1;
        arr[1]= 2;
        arr[2]= 3;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the array index: ");
        int ind= sc.nextInt();

        System.out.println("enter the no. :");
        int no= sc.nextInt();

        try{
            System.out.println("the output of "+arr[ind]+" divide by "+no+" = "+ arr[ind]/no);
        }
        catch(ArithmeticException e){
            System.out.println("ArithmeticException error occured");
            System.out.println(e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("ArrayIndexOutOfBoundsException error occured");
            System.out.println(e);
        }
        catch(Exception e){
            System.out.println("error occured");
        }


    }
}
 */

//CONSTRUCTOR OVERLOADING
/*
import java.util.*;
class myEmp{
    private int id;
    private String name;
    //default constructor
    public myEmp(){
        id= 45;
        name= "Madhav Sharma";
    }
    //parameterised constructor
      public myEmp(String myname, int i){
        id= i;
        name= myname;
    }


    public String getName(){
        return name;
    }
    public void setName(String n){
        this.name= n;
    }
    public int getId(){
        return id;
    }
    public void setId(int i){
        this.id= i;
    }
}
public class Main{
    public static void main(String args[]){
        myEmp E1= new myEmp();
        //E1.setName("code with harry");
        //E1.setId(23);
        System.out.println(E1.getName());
        System.out.println(E1.getId());
    }
}
 */

//METHOD OVERRIDING
/*

class a{
    public void m(){
        System.out.println("this is of class a");
    }
}
class b extends a {
    @Override   // @Override tells that this method is overrides from another in future
    public void m(){
        System.out.println("this is of class b");
    }
}
public class programCode{
    public static void main(String args[]){
        a a1= new a();
        a1.m();
        b b1= new b();
        b1.m();

    }
}
 */

//INHERITANCE
/*
class Base{
    int x;

        public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }
    public void printMe(){
        System.out.println("I am a constructor");
    }
}

class derived extends Base{
    int y;

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}
public class programCode {
    public static void main(String args[]){
        Base b= new Base();
        b.setX(4);
        System.out.println(b.getX());
        derived d= new derived();
        d.setX(34);
        System.out.println(d.getX());
        d.setY(55);
        System.out.println(d.getY());

    }
}
 */

//CONSTRUCTOR IN INHERITANCE
/*
class base1{
    public int x;
    base1(){
        System.out.println("i am a constructor");
    }
    public int getX(){
        return x;
    }
    public void setX(int x){
        this.x= x;
    }
    base1(int x){
        System.out.println("i am an overloaded constructor with a value "+ x);
    }



}

class derived1 extends base1{
    public int y;
    //in case of 2 overloaded constructor in the base class, by default it will call default constructor first... but with the help of super(), we can call constructor with parameters first!!!
     derived1(){
        //super(0);
        System.out.println("i am a derived class constructor");
    }

    derived1(int x, int y){
         super(x);
        System.out.println("i am an overloaded constructor with value "+y);
    }


    public int getY(){
        return y;
    }
    public void setY(int y){
        this.y= y;
    }

}
class childOfDerived extends derived1{
    childOfDerived(){
        System.out.println("i am a child class of derived class");
    }
    childOfDerived(int x, int y, int z){
        super(x, y);
        System.out.println("i am a overloaded child class of derived class with value "+z);
    }
}
public class programCode {
    public static void main(String[] args){
//        base1 b= new base1();
//        derived1 d= new derived1(4, 7);
        childOfDerived c= new childOfDerived();
        //childOfDerived c= new childOfDerived(12, 13,14);


    }
}
 */

//THIS AND SUPER IN JAVA
/*
class classs{
    int a;
    classs(int v){
        this.a= v; //THIS gives us the information that this.a is of this particular class "classs", otherwise if we write a= a, the compiler will get confused and will return wrong value
    }
    public int getA(){
        return a;
    }
    public int return1(){
        return 1;
    }
}
class class2 extends classs{
    class2(int c){
        super(c); //super keyword helps us to evoke immediate parent class's method, custom constructor, instance variables.
        System.out.println("i am a constructor");
    }
}
public class programCode{
    public static void main(String[] args){
        classs c= new classs(5);
        System.out.println(c.getA());
        class2 c2= new class2(5);
        System.out.println(c2.getA());

    }
}
 */

//DYNAMIC METHOD DISPATCH
/*
class a{
    public void name(){
        System.out.println("I am java ");
    }

    public void greet(){
        System.out.println("good morning");
    }
}
class b extends a{
    public void name(){
        System.out.println("I am java of class b");

    }
    public void swagat(){
        System.out.println("apka swagat hai");
    }
}
public class programCode{
    public static void main(String[] args){
        a a1= new  a();
        a1.name();
        a a3= new b(); // we can take the reference of base class 'a' from child class 'b' but vice-versa donot exist
        a3.name(); // super obj= new sup(); is allowded but not sup obj= new super();
        //dynamic method dispatch means the method to be run is decided at the runtime because the object is created at the runtime
   }
}
 */

//ABSTRACT CLASS
/*
abstract class car{
    public void greet(){
        System.out.println("good morning sir");
    }
    abstract public void say();
}
class car1 extends car{
    public void say(){
        System.out.println("beep beep");
    }

}

abstract class car2 extends car{ // if we want to extend this class from abstract class, then either first we have to make this class abstract or its method abstract
    public void no(){
        System.out.println("i am no one");

    }
}
public class programCode {
    public static void main(String[] args){
       // car c= new car();   we cannot create obj of an abstract class
       // car2 ci= new car2();   --same applies on this one--
        car1 c1= new car1();
        c1.say();


    }
}
 */

//INTERFACE
/*
// Both abstract class and interface are similar, but the difference is we cannot extend  one class with 2 or more abstract class, but in interface , it is possible

interface bicycle{
    int a= 45;  // a is a property of bicycle + you cannot modify these property once they are final
    void applybrake(int dec);
    void speedup(int inc);
}
interface car{
    int b=89;
    void blowhorn();
    void carbeep();
}

class A1 implements bicycle, car{
    void blowh(){
        System.out.println("peep peep");
    }
    public void applybrake(int dec){
        System.out.println("apply brake to dec.");
    }
    public void speedup(int inc){
        System.out.println("apply speedup");
    }
    public void blowhorn(){
        System.out.println("beep beep");
    }
    public void carbeep(){
        System.out.println("only car will beep");
    }
}
public class programCode {
    public static void main(String[] args){
        A1 obj= new A1();
        obj.applybrake(1);
        System.out.println(A1.a);

        //A1.a= 32;   --error-- because this property is final and cannot be modified
        obj.blowhorn();
        obj.carbeep();



    }
}
 */

//DEFAULT METHODS
/*
interface camera{
    void takesnap();
    void recvideo();

    private void greet(){  // we cannot really use this private method in any derived class, but the purpose of this private method is to break the code of default method in chunks to look more efficient
        System.out.println("good morning");
    }
    default void recordingin4k(){  // default method includes the private methods of the interface and adds new functionality to the existing interface.
        greet();
        System.out.println("recording in 4k...");
    }
}
interface wifi{
    String[] getnetworks();
    void connecttonetwork(String network);
}
class mycellphone{
    void takesnap(){
        System.out.println("taking snap");
    }

    void callnumber(int phonenumber){
        System.out.println("calling "+ phonenumber);
    }
    void pickcall(){
        System.out.println("connecting ");
    }
}

class smartphone extends mycellphone implements wifi, camera{
    public void takesnap(){
        System.out.println("taking snap");
    }
    public void recvideo(){
        System.out.println("");
    }
//    public void recordingin4k(){
//        System.out.println("recording in 4k and taking snap");
//    }
    public String[] getnetworks(){
        System.out.println("getting the list of networks");
        String[] networkList= {"harry", "madhav", "sharma"};
        return networkList;
}
    public void connecttonetwork(String network){
    System.out.println("connecting to "+ network);
}

}
public class programCode {
    public static void main(String[] args){
        smartphone s1= new smartphone();
        String[] a= s1.getnetworks();
        s1.recordingin4k();
        for(String item: a){
            System.out.println(item);

        }

    }
}
 */

//INHERITANCE IN INTERFACE
/*
interface  sample{
    void method();
    void method1();
}
interface childsample extends sample{ // Inheritance in Interface...
    void meth3();
    void meth4();
}
class mySample implements childsample{   // NOTE: WHEN WE ARE IMPLEMENT AN INTERFACE IN A CLASS, THEN ALL THE METHOD OF THAT INTERFACE AS WELL AS OF ITS PARENT INTERFACE SHOULD BE DECLARED IN THE CLASS OTHERWISE IT WILL THROW AN ERROR..
    public void meth3(){
        System.out.println("meth3");
    }
    public void meth4(){
        System.out.println("meth4");
    }
    public void method(){
        System.out.println("method");
    }
    public void method1(){
        System.out.println("method1");
    }


}
public class programCode {
    public static void main(String[] args){
        mySample sam= new mySample();
        sam.meth3();
        sam.meth4();
        sam.method();
        sam.method1();


    }
}
 */

//POLYMORPHISM IN INTERFACE
/*
interface MyCamera2{
    void takeSnap();
    void recordVideo();
    private void greet(){
        System.out.println("Good Morning");
    }
    default void record4KVideo(){
        greet();
        System.out.println("Recording in 4k...");
    }
}

interface MyWifi2{
    String[] getNetworks();
    void connectToNetwork(String network);
}

class MyCellPhone2{
    void callNumber(int phoneNumber){
        System.out.println("Calling "+ phoneNumber);
    }
    void pickCall(){
        System.out.println("Connecting... ");
    }

}

class MySmartPhone2 extends MyCellPhone2 implements MyWifi2, MyCamera2{
    public void takeSnap(){
        System.out.println("Taking snap");
    }
    public void recordVideo(){
        System.out.println("Taking snap");
    }
    //    public void record4KVideo(){
//        System.out.println("Taking snap and recoding in 4k");
//    }
    public String[] getNetworks(){
        System.out.println("Getting List of Networks");
        String[] networkList = {"Harry", "Prashanth", "Anjali5G"};
        return networkList;
    }
    public void connectToNetwork(String network){
        System.out.println("Connecting to " + network);
    }
    public void sampleMeth(){
        System.out.println("meth");
    }
}
public class programCode {
    public static void main(String[] args) {
        MyCamera2 cam1 = new MySmartPhone2(); // This is a smartphone but, use it as a camera
        // cam1.getNetworks(); --> Not allowed
        // cam1.sampleMeth(); --> Not allowed

        cam1.record4KVideo();

        MySmartPhone2 s = new MySmartPhone2();
        s.sampleMeth();
        s.recordVideo();
        s.getNetworks();
        s.callNumber(7979);
        s.connectToNetwork("madhav");
    }
}
 */

// PACKAGES AND .CLASS FILE IN JAVA (VS CODE)
/*

public class harry{
    public void printf(){

    }
    public static void main(String[] args){
        System.out.println("hello world in java");
    }
}

// cd destination --> if the folder is at different location
// javac name.java --> for converting name.java into name.class
// java name --> for displaying the output of the java.class file


PACKAGE-> help to put the related class in the same package
-> avoids the name conflicts between the files
predefined package like util package
userdefined pxackage are custom packages like name package

package name --> to create a package along with " javac -d . name.java" or "javac -d . *.java"
if we want to create a sub package in a package -> we use package "name.subname;"

*/


