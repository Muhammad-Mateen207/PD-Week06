#include<iostream>
using namespace std;


float calculation(char,string,int);
int main()
{
     char s_code;
     cout<<"Enter the service code (R/r for regular and P/p for premium): ";
     cin>> s_code;
     int minutes;
     string time;
      if(s_code == 'p' ||  s_code=='P')
      {
       cout<<"Enter time of call (D/d for day and N/n for night): ";
       cin>> time;
      }
     
     cout<<"Enter minutes used: ";
     cin>>minutes;    
     
     cout<<calculation(s_code,time,minutes);

}

float calculation_regular(char s_code, string time,int minutes)
{
      float amount;
      if ( s_code == 'R' || s_code=='r' )
      {
          if( minutes <= 50)
          {
             cout<<"Service Type: Regular"<<endl; 
             cout<<"Total Minutes used: "<<minutes<<endl;
             cout<<"Amount Due: $10"<<endl;
          }
          else if( minutes > 50)
          {
                cout<<"Service Type: Regular"<<endl;
                cout<<"Total Minutes used: "<<minutes<<endl;
                amount = (minutes-50)*.20;
                cout<<"Amount Due: $"<<amount<<endl;
          }    
      }
     if ( s_code == 'p' || 'P')
     {
          if ( time== "d" || "D" && minutes <= 75)
          {
               cout<<"Service Type: Premium"<<endl; 
               cout<<"Total Minutes used: "<<minutes<<endl;
                 cout<<"Amount Due: $25"<<endl;
               }
               else if( time == "d" || "D" && minutes >= 75)
               {
                 cout<<"Service Type: Premium"<<endl; 
                 cout<<"Total Minutes used: "<<minutes<<endl;
                 amount = (minutes-75)*.10;
                 cout<<"Amount Due: $"<<amount<<endl;
               }
              else if ( time== "n" || "N" && minutes <= 100)
               {
                 cout<<"Service Type: Premium"<<endl; 
                 cout<<"Total Minutes used: "<<minutes<<endl;
                 cout<<"Amount Due: $25"<<endl;
               }
               else if( time == "n" || "N" && minutes >= 100)
              {
                 cout<<"Service Type: Premium"<<endl; 
                 cout<<"Total Minutes used: "<<minutes<<endl;
                 amount = (minutes-100)*.05;
                 cout<<"Amount Due: $"<<amount<<endl;
               }
           
           }
           else 
           {
                cout<<"Invalid Input. Give valid Service Code";
           }
}

