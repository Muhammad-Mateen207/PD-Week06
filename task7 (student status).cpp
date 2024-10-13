#include<iostream>
#include<iomanip>
using namespace std;

string checkStudentstatus(int,int,int,int);
int main()
{
     int hours,minutes,stud_hour,stud_min;
     cout<<"Enter Exam starting time(hour): ";
     cin>>hours;
     cout<<"Enter Exam Staring Time(minutes): ";
     cin>>minutes;
     cout<<"Enter student hour of arrival: ";
     cin>>stud_hour;
     cout<<"Enter student minutes of arrival: ";
     cin>>stud_min;

     cout<<checkStudentstatus(hours,minutes,stud_hour,stud_min);

} 
string checkStudentstatus(int hours,int minutes,int stud_hours,int stud_min)
{
     int hours_minutes;
     int stud_hours_minutes;
     int time_difference;
     int convert_hours;
     int convert_mins;

     hours_minutes = (hours*60) + minutes;
     stud_hours_minutes = (stud_hours*60) + stud_min;
     time_difference = stud_hours_minutes - hours_minutes;
     convert_hours= time_difference/60;
     convert_mins=time_difference%60;


     if (time_difference > 0)
      {
        cout << "Late" << endl;
        time_difference = abs(time_difference);
        
        if (time_difference < 60) 
        {
            cout << time_difference << " minutes after the start" << endl;
        } 
        else 
        {
          
            cout << convert_hours << ":" << setw(2) << setfill('0') << convert_mins << " hours after the start" << endl;
        }
     } 
      else if(time_difference == 0)
     {
          cout<<"On time"<<endl;
     }
     else if (time_difference >= -30) 
     {
        cout << "On time" << endl;
        cout << -1*time_difference << " minutes before the start" << endl;
     } 
    
     else 
     {
        cout << "Early" << endl;
        time_difference = abs(time_difference);
        
        if (time_difference < 60)
         {
            cout << -1*time_difference << " minutes before the start" << endl;
         } 
        else 
        {
            cout << convert_hours << ":" << setw(2) << setfill('0') << convert_mins << " hours before the start" << endl;
        }
    }

}

