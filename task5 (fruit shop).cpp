#include<iostream>
using namespace std;

float calculatefruitprice(string,string,double);
int main()
{
     string fruit,day;
     double quantity;

     cout<<"Enter Fruit name: ";
     cin>> fruit;
     cout<<"Enter Day of the week: ";
     cin>>day;
     cout<<"Enter quantity: ";
     cin>>quantity;

    cout<<calculatefruitprice(fruit,day,quantity);

}
float calculatefruitprice(string fruit,string day,double quantity)
{
     float price;
    if (day == "Saturday" || day == "Sunday") 
    {
        if (fruit == "banana") {
            price = 2.70*quantity;
        } else if (fruit == "apple") {
            price = 1.25;
        } else if (fruit == "orange") {
            price = 0.90*quantity;
        } else if (fruit == "grapefruit") {
            price = 1.60 * quantity;
        } else if (fruit == "kiwi") {
            price = 3.00 * quantity;
        } else if (fruit == "pineapple") {
            price = 5.60 * quantity;
        } else if (fruit == "grapes") {
            price = 4.20 * quantity;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } 
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana") {
            price = 2.50* quantity;
        } else if (fruit == "apple") {
            price = 1.20* quantity;
        } else if (fruit == "orange") {
            price = 0.85* quantity;
        } else if (fruit == "grapefruit") {
            price = 1.45 * quantity;
        } else if (fruit == "kiwi") {
            price = 2.70 * quantity;
        } else if (fruit == "pineapple") {
            price = 5.50 * quantity;
        } else if (fruit == "grapes") {
            price = 3.85 * quantity;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } 
    return price;

}