#include <iostream>
#include <string>

using namespace std;

int main(){

    string user, password, input;
    cin >> user >> password;

    while(input != password)
    {
        cin >> input;
    }
    cout << "Welcome " << user << "!" << endl;

    return 0;
}
