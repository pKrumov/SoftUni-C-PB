#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double lenght;
    cin >> lenght;
    double width;
    cin >> width;
    double wardrobeSide;
    cin >> wardrobeSide;

    double area = (lenght * 100) * (width * 100);
    double wardrobe = wardrobeSide * wardrobeSide * 10000;
    double bench = area / 10;
    double freeSpace = area - wardrobe - bench;
    double dancers = freeSpace / 7040;


    cout << floor(dancers) << endl;


    return 0;
}
