#include <iostream>
using namespace std;

string checkpointposition(int,int,int);
int main() 
{
    int h, x, y;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout<<"Enter the y coordinate: ";
    cin>> y;

    cout<<checkpointposition(h,x,y);

}
string checkpointposition(int h,int x,int y)
{
    if (x >= 0 && x <= 3 * h && y >= 0 && y <= h) 
    {
        if (x == 0 || x == 3 * h || y == 0 || y == h) 
        {
           cout << "Border" << endl;
        }
        else
        {
            cout << "Inside" << endl;
        }
    }
    
    else if (x >= h && x <= 2 * h && y >= h && y <= 4 * h) 
    {
        if (x == h || x == 2 * h || y == h || y == 4 * h)
        {
            cout << "Border" << endl;
        } 
        else 
        {
            cout << "Inside" << endl;
        }
    }
    else 
    {
        cout << "Outside" << endl;
    }

}
