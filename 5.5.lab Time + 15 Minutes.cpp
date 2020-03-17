#include <iostream>
using namespace std;

int main(){

    int hours, minutes;
    cin >> hours >> minutes;
    minutes += 15;

    if(minutes >= 60)
    {
        hours++;
        minutes %= 60;
    }
    if (hours == 24)
    {
        hours = 0;
    }
    if (minutes < 10)
    {
        cout << hours << ":0" << minutes;
    }
    else
    {
        cout << hours << ":" << minutes;
    }

    return 0;
}
