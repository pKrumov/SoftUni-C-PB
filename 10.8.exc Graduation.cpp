#include <iostream>
#include <string>

using namespace std;

int main(){

    string student;
    cin >> student;
    double gradeSum = 0;
    int clas = 0;

    while(clas < 12)
    {
        double grade;
        cin >> grade;
        if(grade >= 4.00)
        {
            gradeSum += grade;
            clas++;
        }
    }
    gradeSum = gradeSum / 12;
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << student << " graduated. Average grade: " << gradeSum << endl;

    return 0;
}
