#include <iostream>
#include <string>

using namespace std;

int main(){

    string student;
    cin >> student;
    int clas = 0;
    int clasCnt = 0;
    double gradeSum = 0;

    while(clas < 12)
    {
        double grade;
        cin >> grade;
        if(grade >= 4.00)
        {
            gradeSum += grade;
            clas ++;
        }
        else
        {
            clasCnt++;
            if(clasCnt == 2)
            {
                clas++;
                break;
            }
        }
    }
    if(clasCnt == 2)
    {
        cout << student << " has been excluded at " << clas << " grade"<< endl;
    }
    else
    {
        gradeSum = gradeSum / 12;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << student << " graduated. Average grade: " << gradeSum << endl;
    }

    return 0;
}
