#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int num;
    double p1input = 0;
    double p2input = 0;
    double p3input = 0;


    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 0){
            p1input ++;
        }
        if(num % 3 == 0){
            p2input ++;
        }
        if(num % 4 == 0){
            p3input ++;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1input / n * 100 << "%" << endl;
    cout << p2input / n * 100 << "%" << endl;
    cout << p3input / n * 100 << "%" << endl;


    return 0;
}
