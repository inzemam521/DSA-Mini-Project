/*#include<iostream>
using namespace std;
class Hero{
    //properties        
    int health; 
    int level;       
};
int main(){
    //creation of object
    Hero Ramesh;
    cout<<"Size:"<<sizeof(Ramesh)<<endl;     //->>size will be 4 byte  
    return 0;                            //size of empty class(no properties) will be 1 byte
}*/
/*
#include<iostream>
using namespace std;
class Hero{
    //properties
    public:        
    int health;
    char level; 
};

int main(){
    //creation of object
    Hero Ramesh;
   // Ramesh.health=31;
   //Ramesh.level='A';
    cout<<"Health is:"<<Ramesh.health<<endl;
    cout<<"Level is:"<<Ramesh.level<<endl;
    return 0;
}*/
/*
Access modifier->public:kisi v properties/behaviour ko class ke andar ya bahar dono jagah access kr skte h
               ->private:kisi v properties ko sirf class ke andar hi access kr skte hai (16min)
               ->protected:?
               */

 //using getter(private ko read krne ke liye use krte h), setter(Extra condition set krne ke liye use krte h) to access private directly                      
/*
#include<iostream>
using namespace std;
class Hero{
    //properties
    private:        
    int health;
    public: 
    char level; 
    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    //creation of object
    Hero Ramesh;
    //use getter
    cout<<"Ramesh health is:"<<Ramesh.getHealth()<<endl;
    cout<<"Ramesh level is:"<<Ramesh.getLevel()<<endl;

    //use setter
    Ramesh.setHealth(31);
    Ramesh.setLevel('A');
    cout<<"Ramesh health is:"<<Ramesh.getHealth()<<endl;
    cout<<"Ramesh level is:"<<Ramesh.getLevel()<<endl;
    return 0;
}
*/
/*
//static vs dynamic allocaation
#include<iostream>
using namespace std;
class Hero{
    //properties
    private:        
    int health;
    public: 
    char level; 
    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    //statics allocation 
    Hero a;

    a.setHealth(80);
    a.setLevel('A');

    cout<<"Level is:"<<a.level<<endl;
    cout<<"Health is:"<<a.getHealth()<<endl;

    //dynamic allocation
    Hero *b=new Hero;

    b->setHealth(100);
    b->setLevel('B');

    cout<<"Level is:"<<(*b).level<<endl;
    cout<<"Health is:"<<(*b).getHealth()<<endl;

   //alternate of above
    cout<<"Level is:"<<b->level<<endl;
    cout<<"Health is:"<<b->getHealth()<<endl;

    return 0;
}*/
/*
//constructor
#include<iostream>
using namespace std;
class Hero{
    //properties
    private:        
    int health;
    public: 
    char level;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    //object created statically 
    cout<<"Hii"<<endl;
    Hero Ramesh(10);
    cout<<"Adresss of Ramesh:"<<&Ramesh<<endl;
    Ramesh.getHealth();
    cout<<"Hlw"<<endl;
   Ramesh.print();
    //dynamically
    Hero *h=new Hero(11);
    h->print();
    Hero temp(22,'B');
    temp.print();
    return 0;
} 
*/
/*
//copy constructor
#include<iostream>
using namespace std;
class Hero{
    //properties
    private:        
    int health;
    public: 
    char level;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    void print(){
        cout<<"Health:"<<this->health<<endl;
        cout<<"Level:"<<this->level<<endl;
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
   Hero S(70,'C');
   S.print();

//copy constructor
   Hero R(S);
   R.print();

   return 0;
}*/
/*
// writing own copy constructor
#include<iostream>
using namespace std;
class Hero{
    //properties
    private:        
    int health;
    public: 
    char level;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //copying constructor
    Hero(Hero & temp){ 
        cout<<"Copy constuctor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"Health:"<<this->health<<endl;
        cout<<"Level:"<<this->level<<endl;
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
   Hero S(70,'C');
   S.print();
   
//copy constructor
   Hero R(S);
   R.print();

   return 0;
}*/
/*
//Shallow and Deep copy
#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:        
    int health;

    public:
    char *name; 
    char level;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
        name=new char[100];  
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //copy constructor
   Hero(Hero & temp){
    //Deep copy 
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
        cout<<"Copy constuctor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"Health:"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]";
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
       strcpy(this->name,name);
    }
};

int main(){
    Hero hero1;
   hero1.setHealth(12);
   hero1.setLevel('D');
   char name[8]="Inzemam";
   hero1.setName(name);

   hero1.print();
   //use default copy constructor
   Hero hero2(hero1);
   hero2.print();

   hero1.name[0]='G';
   hero1.print();
   hero2.print();
   return 0;
}
*/
/*
//copy assignment operator
#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:        
    int health;

    public:
    char *name; 
    char level;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
        name=new char[100];  
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //copy constructor
   Hero(Hero & temp){
    //Deep copy 
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
        cout<<"Copy constuctor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"Health:"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]";
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
       strcpy(this->name,name);
    }
};

int main(){
    Hero hero1;
   hero1.setHealth(12);
   hero1.setLevel('D');
   char name[8]="Inzemam";
   hero1.setName(name);

   //hero1.print();
   //use default copy constructor
   Hero hero2(hero1);
   hero2.print();

   hero1.name[0]='G';
   hero1.print();
   //hero2.print();
   hero1=hero2;
   hero1.print();
   hero2.print();
   return 0;
}
*/
/*
//destructor
#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:        
    int health;

    public:
    char *name; 
    char level;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
        name=new char[100];  
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //copy constructor
   Hero(Hero & temp){
    //Deep copy 
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
        cout<<"Copy constuctor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"Health:"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]";
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
       strcpy(this->name,name);
    }
    //destructor
    ~Hero(){
    cout<<"Destructor called"<<endl;
    }
};

int main(){
   //static
   Hero a;

   //dynamic
   Hero *b=new Hero();
   //manually destructor call
   delete b;

   return 0;
}*/
/*
//static keyword
#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:        
    int health;

    public:
    char *name; 
    char level;
    static int timeToComplete;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
        name=new char[100];  
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //copy constructor
   Hero(Hero & temp){
    //Deep copy 
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
        cout<<"Copy constuctor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"Health:"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]";
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
       strcpy(this->name,name);
    }
    //destructor
    ~Hero(){
    cout<<"Destructor called"<<endl;
    }
};
int Hero::timeToComplete=5;

int main(){
    cout<<Hero::timeToComplete<<endl;

    Hero a;
    cout<<a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;

   return 0;
}*/

//static function
#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:        
    int health;

    public:
    char *name; 
    char level;
    static int timeToComplete;
//default constructor
    Hero(){
        cout<<"Constructer called"<<endl;
        name=new char[100];  
    } 

    //parameterised constructer
    Hero(int health){
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //copy constructor
   Hero(Hero & temp){
    //Deep copy 
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
        cout<<"Copy constuctor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"Health:"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]";
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }     
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
       strcpy(this->name,name);
    }
    static int random(){
        return timeToComplete;
    }
    //destructor
    ~Hero(){
    cout<<"Destructor called"<<endl;
    }
};
int Hero::timeToComplete=5;

int main(){
    cout<<Hero::random()<<endl;
  
   return 0;
}