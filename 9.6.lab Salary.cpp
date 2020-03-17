#include <iostream>
using namespace std;

int main(){

    int openedTabs;
    cin >> openedTabs;
    double salary;
    cin >> salary;
    string site;

    for(int i = 0; i < openedTabs; i++){
        cin >> site;
        if(site == "Facebook"){
            salary -= 150;
        }
        else if(site == "Instagram"){
            salary -= 100;
        }
        else if(site == "Reddit"){
            salary -= 50;
        }
        if(salary <= 0){
            break;
        }
    }
    if(salary > 0){
        cout << salary << endl;
    }else{
        cout << "You have lost your salary." << endl;
    }

    return 0;
}
