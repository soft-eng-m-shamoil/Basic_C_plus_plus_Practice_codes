#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    //making number even
    if (num%2!=0)
    {}
    else
    {
        num--;
    }

    for(int counter=0 ; counter<=num;counter+=2)
    {
        for(int gap=1;gap<=(num-counter)/2; gap++)
        {
            cout << " ";
        }
        for(int count=0; count<=counter; count++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int count=num-2; count >= 1; count-=2)
    {
        for(int gap=count;gap<=num-2;gap+=2)
        {
            cout << " ";
        }
        for(int counter=count;counter>=1; counter--)
        {
            cout << "*";
        }
        cout << endl;
    }
}