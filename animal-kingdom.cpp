#include <iostream>
#include <fstream>

using namespace std;

class animal 
{
    protected:
    int nolimbs;
    bool scutes;
    bool scales;
    string thermoreg;
    public:
    animal()
    { 
        nolimbs = 4;
        scutes = 0;
        scales = 1;
        thermoreg= "homeothermic";
        


    }
    ~animal()
    {}
     virtual void read()
    {
         cout<<"enter the no of limbs of the animal :"<<endl;
         cin>>nolimbs;
         cout<<"enter the presence of scutes either 1 or 0 for yes or no : "<<endl;
         cin>>scutes;
         cout<<"enter the presence of scales either 1 or 0 for yes or no : "<<endl;
         cin>>scales;
         cout<<"enter the type of thermoregulation either homothermic or poikilothermic :"<<endl;
         cin>>thermoreg;
     }   
    virtual void disp()
    {
         cout<<"no of limbs :"<<nolimbs<<endl;
         
         cout<< "presence of scutes:"<<scutes<<endl;
         
         cout<<"presence of scales :"<<scales<<endl;
          
        cout<<"type of thermoregulation  :"<<thermoreg<<endl;
           
     }   
     
    
};
 
class reptiles:public animal
{
    protected:bool layeggs;
    public:
    reptiles()
    {
        layeggs=1;
    }
    void rin()
    {
        cout<<"does animal lays eggs give 1 for true else 0 for false"<<endl;
        cin>>layeggs;
    }
    
   void display()
    {   if(layeggs==1)
         cout<<"the animal belongs to reptiles"<<endl ;

    }
};
class mammals:public animal
{
    protected:bool livebirth;
    public:
    mammals()
    {
        livebirth=1;
    }
  
     void min()
    {
        cout<<"does animal gives live birth give 1 for true else 0 for false"<<endl;
        cin>>livebirth;
    }
   void display()
    {   if(livebirth==1)
         cout<<"The animal belongs to mammals"<<endl;

    }
};
class turtle:public reptiles
{
    protected:string skintype ;
    string sf;
    public:
    void head()
    {
        cout<<"----------------TURTLE--------------"<<endl;
    }
    turtle()
    {
        skintype = "rough";
        sf = "hard-shell";
    }
    void indata()
    {
        cout<<"enter the skin type of the turtle :"<<endl;
        cin>>skintype;
        cout<<"enter the special feature of the turtle :"<<endl;

        cin>>sf;
    }
   void outdata()
    {   
          cout<<" the skin type of the turtle :"<<skintype<<endl;

           cout<<"the special feature of the turtle :"<<sf<<endl;

    }
    void writefile()
     {   ofstream fout;
         fout.open("output.txt",ios::app);
         fout<<"class - turtle \n"<<"no of limbs :"<<nolimbs<<"\n"<<"is scutes present :"<<scutes<<"\n"<<"is scales present :"<<scales<<"\n"<<"skintype"<<skintype<<"\n"<<"special feature :"<<sf<<"\n";
         fout.close();
     }
};
class elephant:public mammals
{
    protected:string skintype ;
    string sf;
    public:
     void head()
    {
        cout<<"------------ELEPHANT-------------"<<endl;
    }
    elephant()
    {
        skintype = "rough";
        sf = "trunk";
    }
         void indata()
    {
        cout<<"enter the skin type of the elephant :"<<endl;
        cin>>skintype;
        cout<<"enter the special feature of the elephant :"<<endl;

        cin>>sf;
    }
   void outdata()
    {   
          cout<<" the skin type of the elephant :"<<skintype<<endl;

           cout<<"the special feature of the elephant :"<<sf<<endl;

    }
    void writefile()
    {   ofstream fout;
         fout.open("output.txt",ios::app);
         fout<<"class - elephant \n"<<"no of limbs :"<<nolimbs<<"\n"<<"is scutes present :"<<scutes<<"\n"<<"is scales present :"<<scales<<"\n"<<"skintype"<<skintype<<"\n"<<"special feature :"<<sf<<"\n";
         fout.close();
     }
   
};
class human:public mammals
{
    protected:string skintype ;
    string sf;
    public:
     void head()
    {
        cout<<"---------------HUMAN-----------------"<<endl;
    }
    human()
    {
        skintype = "rough";
        sf = "can stand erect , has consiousness";
    }
         void indata()
    {
        cout<<"enter the skin type of the human:"<<endl;
        cin>>skintype;
        cout<<"enter the special feature of the human:"<<endl;

        cin>>sf;
    }
   void outdata()
    {   
          cout<<" the skin type of the human:"<<skintype<<endl;

           cout<<"the special feature of the human:"<<sf<<endl;

    }
     void writefile()
     {   ofstream fout;
         fout.open("output.txt",ios::app);
         fout<<"class - human \n"<<"no of limbs :"<<nolimbs<<"\n"<<"is scutes present :"<<scutes<<"\n"<<"is scales present :"<<scales<<"\n"<<"skintype"<<skintype<<"\n"<<"special feature :"<<sf<<"\n";
         fout.close();
     }
};
int main()
{   
    ofstream fout;
   
    human h;   
    elephant e;
    turtle t;
    h.head();
    h.read();
    h.disp();
    h.display();
    h.indata();
    h.outdata();
    h.writefile();
    


    e.head();
    e.read();
    e.disp();
    e.display();
    e.indata();
    e.outdata();
    e.writefile();
    t.head();
    t.read();
    t.disp();
    t.display();
    t.indata();
    t.outdata();
     t.writefile();
    
    
    
  
    return 0;
}