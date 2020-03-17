#include <iostream>
#include <string>

using namespace std;

int main(){

    string text;
    getline(cin, text);
    int num = 0;

    for(int i = 0; i < text.length(); i++){
        switch (text[i]){
        case 'a':
            num += 1;
            break;
        case 'e':
            num += 2;
            break;
        case 'i':
            num += 3;
            break;
        case 'o':
            num += 4;
            break;
        case 'u':
            num += 5;
            break;
        }
    }
    cout << num << endl;

    return 0;
}
