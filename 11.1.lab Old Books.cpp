#include <iostream>
#include <string>
using namespace std;

int main(){

    string favoriteBook;
    getline(cin, favoriteBook);

    int numOfBooks;
    cin >> numOfBooks;
    cin.ignore();

    string bookName;
    int booksChecked = 0;

    while(numOfBooks > booksChecked)
    {
        getline(cin, bookName);
        if(favoriteBook == bookName)
        {
            break;
        }
        booksChecked++;
    }
    if(favoriteBook == bookName)
    {
        cout << "You checked " << booksChecked << " books and found it." << endl;
    }
    else
    {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << booksChecked << " books." << endl;
    }

    return 0;
}
