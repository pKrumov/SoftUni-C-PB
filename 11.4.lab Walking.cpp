#include <iostream>
#include <string>
using namespace std;

int main(){

    string input;
    cin >> input;
    int totalSteps;

    while(input != "Going home")
    {
        int steps = stoi(input);
        totalSteps += steps;

        if(totalSteps >= 10000)
        {
            break;
        }
        cin >> input;
    }
    if(totalSteps >= 10000)
    {
        cout << "Goal reached! Good job!" << endl;
    }
    else
    {
        cin >> input;
        int steps = stoi(input);
        totalSteps += steps;
        cout << 10000 - totalSteps << " more steps to reach goal." << endl;
    }

    return 0;
}
