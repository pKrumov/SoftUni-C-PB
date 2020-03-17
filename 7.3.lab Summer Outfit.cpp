#include <iostream>
using namespace std;

int main(){

    double temp;
    cin >> temp;
    string outfit = "";
    string shoes = "";
    string time;
    cin >> time;

    if (10 <= temp && temp <= 18)
    {
        if (time == "Morning")
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (time == "Afternoon")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (time == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (18 < temp && temp <=24)
    {
        if (time == "Morning")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (time == "Afternoon")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (time == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (temp >= 25)
    {
        if (time == "Morning")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (time == "Afternoon")
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else if (time == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << temp << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}
