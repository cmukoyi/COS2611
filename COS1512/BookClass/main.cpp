#include <iostream>

using namespace std;

class book{
public:
    string title;
    string author;
    int pages;

};
int main()
{
    book book1;
    book1.title = "Il Principe";
    book1.author ="Nicolo Machiavelli";
    book1.pages = 560;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    book book2;
    book2.title = "Think and Grow Rich";
    book2.author ="Napolean Hill";
    book2.pages = 678;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    cout << "Hello world!" << endl;
    return 0;
}
