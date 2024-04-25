#include <iostream>

using namespace std;

class Item{
private:
    string name;
    double price;
public:
   void inputItem();
   void outputItem();

};

void Item::inputItem(){
    cout << "item Name: ";
    cin >> name;
    cout << "item Price: ";
    cin >> price;
}

void Item::outputItem(){
    cout <<"Name" << name<<"\n";
     cout <<"Price" << price<<"\n";

}

const int size =3; //size of array

int main()
{
    Item myItems[size];
    for (int i = 0;i < size;i++){
        cout << "Item: " << i+1 <<"\n" <<endl;
        myItems[i].inputItem(); //call function to input items
    }

    return 0;
}
