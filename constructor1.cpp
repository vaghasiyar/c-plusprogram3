#include<iostream>
using namespace std;
class result{

    
int maths,eng,sci,total;
char name[30];
float per;

   int total() 
    {
        return eng+sci+maths ;
    }
       public:
       result()
       {
        cout<<"enter name :";
        cin>>name;
        cout<<"enter eng mark :";
        cin>>eng;
        cout<<"enter sci mark :";
        cin>>sci;
        cout<<"enter maths mark :";
        cin>>maths;
        total = total();
        per = total/3;
    

    }
    void display()
    {
        cout<<"student name:"<<name<<endl;
        cout<<"maths mark :"<<maths<<endl;
        cout<<"eng mark :"<<eng<<endl;
        cout<<"sci mark :"<<sci<<endl;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage :"<<per<<endl;
        
        
    }
};

int  main()
{
    result r;
    r.display();
}




