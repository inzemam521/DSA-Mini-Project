//Encapsulation:> Wrapping up data member and function in a class..Encapsulation synonyms is Information hiding/data hiding.
//Fully encapsulated class:> All data member are private marked
/*#include<bits/stdc++.h>
using namespace std;
class Student{
    private:    
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
int main(){
    Student first;
    cout<<"Everything is ok"<<endl;
    return 0;
}
*/
 /*
//Enheritance
#include<bits/stdc++.h>
using namespace std;
class Human{
  public:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;

    cout<<object1.color<<endl;

    object1.setWeight(84);
    cout<< object1.weight<<endl;
    object1.sleep();
}*/
/*
//Acess modifier and inheritance
//public-public=>public
#include<bits/stdc++.h>
using namespace std;
class Human{
  public:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
  class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};
int main(){
    Male m1;
    cout<<m1.height<<endl;
    
    return 0;
}
*/
/*
//public-protected=>protected
#include<bits/stdc++.h>
using namespace std;
class Human{
  public:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
  class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
    //cout<<m1.height<<endl;            //(not accessible bcz public-protected=>protected)
    cout<<m1.getHeight()<<endl;      //(accessible using getter-setter)
    
    return 0;
}
*/
/*
//public-private=>private
#include<bits/stdc++.h>
using namespace std;
class Human{
  public:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
  class Male:private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
   //cout<<m1.height<<endl;            //(not accessible bcz public-private=>private)
    cout<<m1.getHeight()<<endl;        //(accessible using getter-setter)
    return 0;
}*/
/*
//protected-public=>protected
#include<bits/stdc++.h>
using namespace std;
class Human{
  protected:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
  class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
   //cout<<m1.height<<endl;          //(not accessible bcz protected-public=>protected)
    cout<<m1.getHeight()<<endl;     //(accessible using getter-setter)
    return 0;
}*/
/*
//protected-protectd=>protected
#include<bits/stdc++.h>
using namespace std;
class Human{
  protected:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
  class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
   //cout<<m1.height<<endl;          //(not accessible bcz protected-proctected=>protected)
    cout<<m1.getHeight()<<endl;     //(accessible using getter-setter)
    return 0;
}*/


//protected-private=>private

/*
//private-public=>N/A
#include<bits/stdc++.h>
using namespace std;
class Human{
  private:
  int height;
  int weight;
  int age;
  
   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
};
  class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
   cout<<m1.height<<endl;          //(not accessible bcz private-public=>N/A )
   cout<<m1.getHeight()<<endl;       //(not accessible bcz private-public=>N/A )
    return 0;
}*/

//private-protected=>N/A
//private-private=>N/A



//Types of Inheritance
/*
//Single Inheritance (Class B inherit class A)
#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{

};

int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;

    return 0;
}*/
/*
//Multi-Level Inheritance  (Ex-class B inherit class A and class C inherit class B)
#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{

};
class GermanShephered:public Dog {

};

int main(){
    GermanShephered g;
    g.speak();
    cout<<g.age<<endl;

    return 0;
}*/

/*
//Multiple Inheritance
#include<bits/stdc++.h>
using namespace std;
class Animal {
    public:
    int weight;
    int age;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string color;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
//Multiple inheritance
class Hybrid:public Animal,public Human{

};
int main(){
    Hybrid obj1;

    obj1.speak();
    obj1.bark();

    return 0;
} */

/*
//Heirarchical inheritance(one class serve as parent class for more than 1 class)
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};

class B:public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

class C:public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }
};

int main(){
    A object1;
    object1.func1();

     B object2;
     object2.func1();
     object2.func2();

     C object3;
     object3.func1();
     object3.func3();
}*/

//Hybrid Inheritance (Combination of more than one type of inheritance)

/*
//Inheritance Ambiguity
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C:public A,public B{

};

int main(){
    C obj;
    //obj.func();
    obj.A::func();
    obj.B::func();

    return 0;
}*/


//Polymorphism(Existing in multiple form)      =>(VVI)
//Polymorphism is of two types=>Compile time and Run-time polymorphism


//Compile time polymorphism(kin-kin diff form me same entity exist krne wala h)
//It is static polymorphism
//It is of two types=>Function overloading and operator overlaoding
/*
//function overloading
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Inzemam"<<endl;
    }
     int  sayHello(char name){
        cout<<"Inzemam"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Inzemam"<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello(); 
}
*/
/*
//operator overloading
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Inzemam"<<endl;
    }
     int  sayHello(char name){
        cout<<"Inzemam"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Inzemam"<<name<<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
     /*   int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;
        *//*
       cout<<"Hello Inzemam"<<endl;
    }
    void operator() (){
        cout<<"Mai bracket hu:"<<this->a<<endl;
    }
};
int main(){
    B obj1, obj2;

    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    obj1();
}*/

/*
//Run time polymorphism(method/function overriding)
//It is dynamic polymorphism 
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Inzemam"<<endl;
    }
     int  sayHello(char name){
        cout<<"Inzemam"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Inzemam"<<name<<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
     /*   int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;
        *//*
       cout<<"Hello Inzemam"<<endl;
    }
    void operator() (){
        cout<<"Mai bracket hu:"<<this->a<<endl;
    }
};
    class Animal{
        public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
    };
    class Dog:public Animal{
      public:
        void speak(){
            cout<<"Barking"<<endl;  
    }
};

int main(){

    Dog obj;
    obj.speak();
}*/


//Abstraction {(Impelementation hiding)=>Showing only essential information}  