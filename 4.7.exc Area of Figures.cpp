#include <iostream>
using namespace std;

int main(){

    string figureType;
    cin >> figureType;

    cout.setf(ios::fixed);
    cout.precision(3);
    if(figureType == "square")
    {
        double side;
        cin >> side;
        cout << side * side << endl;
    }
    else if(figureType == "rectangle")
    {
        double lenght, height;
        cin >> lenght >> height;
        cout << lenght * height << endl;
    }
    else if(figureType == "circle")
    {
        double radius;
        cin >> radius;
        cout << radius * radius * 3.14159265359 << endl;

    }
    else
    {
        double lenght, height;
        cin >> lenght >> height;
        cout << 0.5 * lenght * height << endl;
    }

    return 0;
}
