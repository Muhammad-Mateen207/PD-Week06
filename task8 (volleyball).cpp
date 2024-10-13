#include<iostream>
using namespace std;

int calculatevolleyballGames(string, int, int);
int main()
{
    string yearType;
    int holidays,hometownWeekends;
    cout<<"Enter year type (Leap or Normal): ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;

    int result=calculatevolleyballGames(yearType, holidays, hometownWeekends);
    cout<<result;
}
int calculatevolleyballGames(string yearType, int holidays, int hometownWeekends)
{
     float avail_holidays,avail_weekends,total_time;
     int games_played;


     avail_holidays=  holidays*2/3;

     avail_weekends=  48-hometownWeekends;
     avail_weekends=  avail_weekends*0.75;
     avail_weekends=  avail_weekends+hometownWeekends;

     total_time=  avail_holidays+avail_weekends;
     
     if(yearType == "Normal")
     {
        games_played = total_time;
     }
     else if(yearType == "Leap")
     {
         total_time = total_time*1.15;
         games_played= total_time;
     }
     return games_played;
}