#include <iostream>
using namespace std;

int main(){

    string password = "s3cr3t!P@ssw0rd";
    string guess;
    cin >> guess;

    if(guess == password)
    {
        cout << "Welcome" << endl;
    }
    else
    {
        cout << "Wrong password!" << endl;
    }

    return 0;
}
