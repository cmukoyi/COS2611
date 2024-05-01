#include <cstdlib>
#include <iostream>
#include "List.cpp"

using namespace std;

int main()
{

    List mylist;
    mylist.AddNode(4);
    mylist.AddNode(6);
    mylist.AddNode(8);
    mylist.AddNode(9);
    // delete 8
    mylist.DeleteNode(8);
    mylist.PrintList();
    return 0;
}