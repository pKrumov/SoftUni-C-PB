#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        int num = 0;
        cin >> num;
        sum += num;
    }
    cout << sum << endl;

    return 0;
}
