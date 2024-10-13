#include<iostream>
#include<string>
using namespace std;

int grade(float,float,float,float,float);
float percentage(float,float,float,float,float);

int main()
{
    string name;
    float eng,math,chem,soc_sci,bio;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter marks of English: ";
    cin>>eng;
    cout<<"Enter marks of Maths: ";
    cin>>math;
    cout<<"Enter marks of Chemistry: ";
    cin>>chem;
    cout<<"Enter marks of Social Science: ";
    cin>>soc_sci;
    cout<<"Enter marks of Biology: ";
    cin>>bio;

    cout<<"Student name: "<<name<<endl;

    (percentage(eng,math,chem,soc_sci,bio));
    
    grade(eng,math,chem,soc_sci,bio);


}
float percentage(float eng,float math,float chem,float soc_sci,float bio)
{
     float total;
     total= eng+math+chem+soc_sci+bio;
     float percent;
     percent= total/500 * 100;
     cout<<"Percentage: "<<percent<<"%"<<endl;
     
}
int grade(float eng,float math,float chem,float soc_sci,float bio)
{  
    float total;
    total= eng+math+chem+soc_sci+bio;
    float marks;
    marks= total/500 * 100;
    
    if(marks>= 90 && marks<=100)
    {
         cout<<"GRADE: A+";
    }
    else if(marks>= 80 && marks<90)
    {
         cout<<"GRADE: A";
    }
    else if(marks>= 70 && marks<80)
    {
         cout<<"GRADE: B+";
    }
    else if(marks>= 60 && marks<70)
    {
         cout<<"GRADE: B";
    }
    else if(marks>= 50 && marks<60)
    {
         cout<<"GRADE: C";
    }
    else if(marks>= 40 && marks<50)
    {
         cout<<"GRADE: D";
    }
    else if(marks<40)
    {
      cout<<"GRADE: F";
    }

    
}