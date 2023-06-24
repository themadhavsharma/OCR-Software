//ASCII value of char
/*
#include <iostream>
using namespace std;
int main()
{
    char h;
    cin>>h;
    cout<<int (h)<<endl;
    return 0; 
}*/


//fibonacci series till n
/*
#include <iostream>
using namespace std;
int main()
{
    int n, t1=0, t2=1, nxt;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        cout<<t1<<endl;
        nxt= t1+t2;
        t1= t2;
        t2= nxt;
    }
    return 0;
}
*/


//scope resolution operator
/*
#include <iostream>
using namespace std;
int c= 57;
int main()
{
    int a, b, c;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    c= a+b;
    cout<<"the sum is "<<c<<endl;
    cout<<"the global value of c is "<<::c;
    return 0;
}
*/


//Reference variables
/*
#include<iostream>
using namespace std;
int main()
{
    int x= 123;
    int & y= x;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
*/


//Typecasting datatype
/*
#include <iostream>
using namespace std;
int main()
{
    int x=33.33;
    cout<<"typecasting int into float: "<<float(x)<<endl;
    cout<<"typecasting int into float: "<<(float)x<<endl;
}
*/


//manipulator i.e. endl and setw()
/*
#include<iostream>
#include <iomanip>
using namespace std;
int main()

{
int a=34, b=279, c=2939;
cout<<"the value of a is: "<<setw(7)<<a<<endl;
cout<<"the value of b is: "<<setw(7)<<b<<endl;
cout<<"the value of c is: "<<setw(7)<<c<<endl;
return 0;
}
*/


//default arguments in c++
/*
#include <iostream>
using namespace std;
float money_r(int currentmoney, float interest=1.2)
{
      return currentmoney*interest;
}
int main()
{
      int money=100000;
      cout<<"if you have rs, "<<money<<" in your bank then your bank will give you rs"<<money_r(money)<<" in return"<<endl;
      cout<<"if you have rs, "<<money<<" in your bank then your bank will give you rs"<<money_r(money, 1.4)<<" in return"<<endl;

      return 0;
}
*/

//program with classes...
/*
#include <iostream>
using namespace std;
class employee{
      private:
      int a, b, c;

      public:
      int d, e;

      void setData(int a1, int b1, int c1);
      void getData()
      {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;

      }

};

void employee :: setData (int a1, int b1, int c1) {
      a= a1;
      b= b1;
      c= c1;
}
int main()
{
      employee madhav;
      madhav.d= 12;
      madhav.e = 11;
      madhav.setData(1,2,3);
      madhav.getData();
      return 0;

}
*/

// Single level inheritance
/*
#include <iostream>
using namespace std;
class CU{
    public:
    int a;
};
class AU: public CU{
    public:
    int b;
};
int main()
{
    AU obj;
    obj.a= 10;
    obj.b= 20;
    cout<<obj.a<<obj.b;

    return 0;

}

*/


//multi level inheritance
/*
#include <iostream>
using namespace std;
class CU{
    public:
    int a;
};
class AU: public CU{
    public:
    int b;
};
class AU5: public AU{
    public:
    int c;
};
int main()
{
    AU5 obj;
    obj.a= 10;
    obj.b= 20;
    obj.c= 30;
    cout<<obj.a<<obj.b<<obj.c;

    return 0;

}
*/

//Unary operator Overloading

/*
#include <iostream>

using namespace std;

class Complex{

  int a,b;

  public:

  void setData(int x, int y){

    a=x;

    b=y;

  }

  void showData(){

    cout<<"The Value of a:"<<a<<endl;

    cout<<"The Value of b:"<<b<<endl;

  }

  // Rule 2: that valid operator operator are only allowed here

  // sizeof(), conditional operator

  Complex operator -(){// operator overaloding, you have to use operator keyword

    Complex temp;

    temp.a= -a;

    temp.b= -b;

    return temp;

  }

};

int main()

{

  Complex c1,c2;

  c1.setData(3,4);

  c2= c1.operator -();// values assignment also means objects values are being copied

  //c3=c1+c2;now you are able to add both the user defined values

  c2.showData();// c2 holds the value of a as -3 b as -4



  return 0;

}
*/

// to add two complex numbers

// what is the difference between primitive datatype and non-primitive datatype

// Rule 1: we can add two primitive datatypes but we can't add two user defined datatype

// example is to support that we cant add two user defined datatype

// operator overloading concept is there,, Binary Operator Overloading

/*
#include <iostream>

using namespace std;

class Complex{

  int a,b;

  public:

  void setData(int x, int y){

    a=x;

    b=y;

  }

  void showData(){

    cout<<"The Value of a:"<<a<<endl;

    cout<<"The Value of b:"<<b<<endl;

  }

  Complex operator +( Complex c){// compatibility is ensured here

    Complex temp;// obj have to be craeted to access the values

    temp.a= a+c.a;//c.a=5, where a =3

    temp.b= b+c.b;//c.b=6, where b=4

    return temp;

  }

};

int main()

{

  Complex c1,c2,c3;// created three objects for same class Complex

  c1.setData(3,4);// passed value

  c2.setData(5,6);// passed value

  //c3= c1+c2; trying to add two user defined values

  // we can't add directly two user defined operators

  // the alternative is to create separate function

  // Assignment means you are passing a value from RHS to LHS, ensure the return type are same

  //c3=c1.add(c2);// c1 is calling c2( and whatever is returned by c2 is returning to c3)
  c3= c1+c2;

  c3.showData();



  return 0;

}
*/

/* because we are violating a rule that the name of function can only include 

Alphabet, symbol, and underscore(so + is not allowed)

As C++ is allowing this with a rule as before writing this name and using the keyword operator

*/

/*

#include <iostream>

using namespace std;

class Complex{

  int a,b;

  public:

  void setData(int x, int y){

    a=x;

    b=y;

  }

  void showData(){

    cout<<"The Value of a:"<<a<<endl;

    cout<<"The Value of b:"<<b<<endl;

  }

  // Rule 2: that valid operator operator are only allowed here

  // sizeof(), conditional operator

  Complex operator +( Complex c){// operator overaloding, you have to use operator keyword

    Complex temp;

    temp.a= a+c.a;

    temp.b= b+c.b;

    return temp;

  }

};

int main()

{

  Complex c1,c2,c3;

  c1.setData(3,4);

  c2.setData(5,6);

  c3=c1+c2;// now you are able to add both the user defined values

  c3.showData();



  return 0;

}
*/

//nested classes

// concept of virtual function, it will behave as overridding

// binding piece of information: address, to understand address clearly we use pointers
/*
#include <iostream> 

using namespace std;  

class base { 

public: 

  virtual void print()// late binding you have to create func of type virtual but only in parent{late binding}

  { 

    cout << "print base class" << endl; 

  } 

  void show()// this is your non virtual function, early binding

  { 

    cout << "show base class" << endl; 

  } 

};  

class derived : public base { 

public: 

  void print()// it has been already mentioned in your parent

  { 

    cout << "print derived class" << endl; 

  }  

 void show() 

  { 

    cout << "show derived class" << endl; 

  } 

};  

int main() 

// assigning address of object means assigning the addresses of members of a class

{ 

  base* bptr; // you have to create parent class pointer

  derived d;// child class object is created here

  bptr = &d;//relationship has been build here after assigning the object address to your ptr of parent class

  // virtual function, binded at runtime 

  //-> to access the members of a class through

  bptr->print();// due to the concept of late binding, child class function will run here 

  // Non-virtual function, binded at compile time 

  bptr->show(); // non virtual function, early binding parent will run here first

} 

*/

// CONCEPT OF OBJECT POINTER
/*
#include <iostream>



using namespace std;

class Box{ 

  private:

    int l,b,h;//member of a class are also sometimes called as instances of a class

  public:

    void setDimension(int x, int y, int z){// local member of a function

      l=x;// assigning the formal arguments to instance of a class

      b=y;// lhs is your instance and rhs is your argument taht you have passed

      h=z;

    }

    void showDimension(){

      cout<<l<<b<<h<<endl;

    }

};



int main()// here *p is your object pointer of type Box

{

    Box *p, smallBox;// to create object of a class as well as pointer of a class

    p=&smallBox;// when you assign the object of a class to pointer of a class

    smallBox.setDimension(12,10,15);// smallbox is your object whereas *p is your object pointer

    smallBox.showDimension();

    p->setDimension(12,13,17);

    p->showDimension();



  return 0;

}
*/

// CONCEPT OF OBJECT POINTER
/*
#include <iostream>



using namespace std;

class Box{ 

  private:

    int l,b,h;//member of a class are also sometimes called as instances of a class

  public:

    void setDimension(int l, int b, int h){

      this->l=l;

      this->b=b;

      this->h=h;

    }

    void showDimension(){

      cout<<l<<b<<h<<endl;

    }

};



int main()// here *p is your object pointer of type Box

{

    Box *p, smallBox;// to create object of a class as well as pointer of a class

    p=&smallBox;// when you assign the object of a class to pointer of a class

    smallBox.setDimension(12,10,15);// smallbox is your object whereas *p is your object pointer

    smallBox.showDimension();

    p->setDimension(12,13,17);

    p->showDimension();



  return 0;

}
*/


//Exception topic
/*
#include<iostream>

using namespace std; 

int main()

{

cout<<"Enter two integers: ";

int num1, num2;

 cin>>num1>>num2;

try 

{

if(num2==0)

throw num2;

cout<<num1<<"/"<<num2<<" is: "<<(num1/num2)<<endl;

}

 catch(int e)

   {

cout<<"Exception: there is a division by number "<<e<<endl;

} 

cout<<"Execution continues..."<<endl;

return 0;

}
*/

//exception example
/*
#include <iostream> 

using namespace std;

struct E { 

  const char* message;

  E() : message("Class E") { }

};

struct E1 : E { const char* message;

  E1() : message("Class E1") { } 

};

struct E2 : E { const char* message;

  E2() : message("Class E2") { }

};

void f() { 

  try { 

    cout << "In try block of f()" << endl;// 2nd line of output

    cout << "Throwing excepton of type E1" << endl;// as it is rinted in your output

    E1 myExcepton; //refernce is created of E1

    throw myExcepton;//exception is thrown of E1

  }

    catch (E2& e) { 

    cout << "In handler of f(), catch (E2& e)" << endl;

    cout << "Excepton: " << e.message << endl;

    throw; 

       

    }

    catch (E1& e) { 

    cout << "In handler of f(), catch (E1& e)" << endl;//4th statement is this

    cout << "Exception: " << e.message << endl; 

    throw;//after rethrow the construct or control will be passed to line no 26

    }

    catch (E& e) { cout << "In handler of f(), catch (E& e)" << endl;

    cout << "Excepton: " << e.message << endl; 

    throw; 

       

    } 

}

int main() {// execution starts here

    try { 

    cout << "In try block of main()" << endl;//1st o/p

    f();// throw E1 type of exception 

       

    } 

    catch (E2& e) { // skipped

      cout << "In handler of main(), catch (E2& e)" << endl;

      cout << "Excepton: " << e.message << endl; }

    catch (...) // ellipse will work here

    { cout << "In handler of main(), catch (...)" << endl; 

       

    } 

}
*/

