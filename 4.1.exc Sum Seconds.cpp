#include <iostream>
using namespace std;

int main(){

    int firstTime, secoundTime, thirdTime;
    cin >> firstTime >> secoundTime >> thirdTime;

    int totalTime = firstTime + secoundTime + thirdTime;

    int minutes = totalTime / 60;
    int seconds = totalTime % 60;

    if(seconds < 10)
    {
        cout << minutes << ":0" << seconds;
    }
    else
    {
        cout << minutes << ":" << seconds;
    }

    return 0;
}
