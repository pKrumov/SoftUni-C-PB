#include <iostream>
using namespace std;

int main(){

    double x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    bool isUp = x1 <= x && x <= x2 && y == y1;
    bool isBottom =  x1 <= x && x <= x2 && y == y2;
    bool leftSide = y1 <= y && y <= y2 && x == x1;
    bool rightSide = y1 <= y && y <= y2 && x == x2;

    if (isUp || isBottom || leftSide || rightSide)
    {
        cout << "Border" << endl;

    }
    else
    {
        cout << "Inside / Outside" << endl;
    }

    return 0;
}
