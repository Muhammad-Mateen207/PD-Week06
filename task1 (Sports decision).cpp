#include<iostream>
using namespace std;

string activity(string,string);
int main()
{
    string temp, humidity;
    cout<<"Enter Temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter Humidity(dry or humid): ";
    cin>>humidity;

    string a = activity(temp,humidity);
    cout<<"Recommended Acitivity: "<<a;

}
string activity(string temp, string humidity)
{
  string suggest;
  if( temp == "warm" && humidity == "dry") 
  {
     suggest = "Play tennis";
  }   
  if( temp == "warm" && humidity == "humid") 
  {
     suggest = "Swim";
  }     

  if( temp == "cold" && humidity == "dry") 
  {
     suggest = "Play basketball";
  }    
  if( temp == "warm" && humidity == "dry") 
  {
     suggest = "Play tennis";
  }   
  if( temp == "cold" && humidity == "humid") 
  {
     suggest = "Watch Tv";
  }    
  return suggest; 
}