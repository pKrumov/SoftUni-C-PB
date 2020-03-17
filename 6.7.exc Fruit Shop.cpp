#include <iostream>
using namespace std;

int main(){

    string product, day;
    cin >> product >> day;
    double quantity;
    cin >> quantity;
    double price = 0;

    if(day == "Saturday" || day == "Sunday")
    {
        if(product == "banana")
        {
            price = 2.7;
        }
        else if(product == "apple")
        {
            price = 1.25;
        }
        else if(product == "orange")
        {
            price = 0.9;
        }
        else if(product == "grapefruit")
        {
            price = 1.60;
        }
        else if(product == "kiwi")
        {
            price = 3.0;
        }
        else if(product == "pineapple")
        {
            price = 5.6;
        }
        else if(product == "grapes")
        {
            price = 4.2;
        }
    }
    else
    {
        if(product == "banana")
        {
            price = 2.5;
        }
        else if(product == "apple")
        {
            price = 1.2;
        }
        else if(product == "orange")
        {
            price = 0.85;
        }
        else if(product == "grapefruit")
        {
            price = 1.45;
        }
        else if(product == "kiwi")
        {
            price = 2.7;
        }
        else if(product == "pineapple")
        {
            price = 5.5;
        }
        else if(product == "grapes")
        {
            price = 3.85;
        }
    }
    if(price > 0)
    {
        cout.setf(ios::fixed);
        cout.precision(2);

        cout << price * quantity << endl;
    }
    else
    {
        cout << "error" << endl;
    }
    return 0;
}
