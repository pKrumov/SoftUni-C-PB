#include <iostream>
using namespace std;

int main(){

    string type;
    cin >> type;
    int units;
    cin >> units;
    double totalPrice = 0;
    double budget;
    cin >> budget;

    if(type == "Roses"){
        if(units >= 80){
            totalPrice = (units * 5.0) * 0.9;
        }
        else{
            totalPrice = units * 5.0;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    if(totalPrice <= budget){
        cout << "Hey, you have a great garden with "
             << units << " " << type << " and "
             << budget - totalPrice << " leva left.";
    }
    else if (totalPrice > budget){
        cout << "Not enough money, you need "
             << totalPrice - budget << " leva more.";
    }



    return 0;
}
