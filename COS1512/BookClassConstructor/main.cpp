#include <iostream>

using namespace std;

class book{
public:
    string title;
    string author;
    int pages;

    book(string ttl, string aut,int pg){

    title = ttl;
    author = aut;
    pages = pg;


    }

};
int main()
{
    book book1("Il Principe","Nicolo Machiavelli",560);


    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout <<"\n"<< endl;
    book book2("Think and Grow Rich","Napolean Hill",678);


    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;


    return 0;
}
