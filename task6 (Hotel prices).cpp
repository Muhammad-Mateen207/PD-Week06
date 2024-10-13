#include<iostream>
#include<string>
using namespace std;

string calculateprice(string,int);
 
int main()
{
    string month;
    int stays;
    cout<<"Enter the month (May, June, July ,August, September , October): ";
    cin>>month;
    cout<<"Enter the days ";
    cin>>stays;

   cout<<calculateprice(month,stays);

}
string calculateprice(string month, int stays)
{ 
     float stud_rate, apart_rate;
     if( month=="May" || month=="October" )
     {
        {
        if( stays <= 14)
        {
            apart_rate = 65* stays;
            cout<<"Apartment: "<<apart_rate<<"$"<<endl;
        }
        else if(stays > 14)
        {
             apart_rate = (65*stays)*.90;
             cout<<"Apartment: "<<apart_rate<<"$"<<endl;
        }
        }
        
        {
        if(stays < 7)
        {
             stud_rate = 50*stays;
             cout<<"Studio :"<<stud_rate<<"$"<<endl;
        }
         else if( stays >= 7 && stays<=14)
         {
             stud_rate = (50*stays)*.95;
             cout<<"Studio :"<<stud_rate<<"$"<<endl;
         }
         else if ( stays > 14)
         {
             stud_rate = (50*stays)*.70;
             cout<<"Studio :"<<stud_rate<<"$"<<endl;
         }
        }
     }
     else if( month == " June" || month=="September")
     {
       {
        if( stays <= 14)
        {
            apart_rate = 68.70* stays;
            cout<<"Apartment: "<<apart_rate<<"$"<<endl;
        }
        else if(stays > 14)
        {
             apart_rate = (68.70*stays)*.90;
             cout<<"Apartment: "<<apart_rate<<"$"<<endl;
        }
       }
       {
        if(stays <= 14)
        {
             stud_rate = 75.20*stays;
             cout<<"Studio :"<<stud_rate<<"$"<<endl;
        }
         else if ( stays > 14)
         {
             stud_rate = (75.20*stays)*.80;
             cout<<"Studio :"<<stud_rate<<"$"<<endl;
         }

        }
    }
    else if( month == " July" || month=="August")
    {
       {
        if( stays <= 14)
        {
            apart_rate = 77* stays;
            cout<<"Apartment: "<<apart_rate<<"$"<<endl;
        }
        else if(stays > 14)
        {
             apart_rate = (77*stays)*.90;
             cout<<"Apartment: "<<apart_rate<<"$"<<endl;
        }
       }
       {
        stud_rate = 76*stays;
        cout<<"Studio :"<<stud_rate<<"$"<<endl;
       }
    }
}