#include <iostream>
#include <string>
using namespace std;

int main(){

    int badScore = 0;
    int curentBadScore =0;
    string taskName;
    string lastTask;
    cin >> badScore;
    cin.ignore();
    double gradeSum = 0;
    int problemsSolved = 0;

    while(badScore > curentBadScore)
    {
        getline(cin, taskName);
        double grade;
        if(taskName == "Enough")
        {
            break;
        }
        lastTask = taskName;

        cin >> grade;
        cin.ignore();
        if(grade <= 4.00)
        {
            curentBadScore++;
        }
        gradeSum += grade;
        problemsSolved++;
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    if(taskName == "Enough")
    {
        cout << "Average score: " << gradeSum / problemsSolved << endl;
        cout << "Number of problems: " << problemsSolved << endl;
        cout << "Last problem: " << lastTask << endl;
    }
    else
    {
        cout << "You need a break, " << curentBadScore << " poor grades." << endl;
    }

    return 0;
}
