
/*
Student Name: Carlos Mukoyi
Student Number: 44445075
*/

#include <iostream>
#include <fstream>
#include <string>
#include <regex>
 #include <filesystem>

using namespace std;

struct Node
{
    string data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack();
    ~Stack();
    void push(string d);
    string pop();
    string toString();
    bool isEmpty();
    void display();
    void clearScreen();
};
Stack::Stack()
{
    top = nullptr;
}
void Stack::push(string url)
{
    Node *newNode = new Node;
    newNode->data = url;
    newNode->next = top;
    top = newNode;
}
string Stack::pop()
{
    if (top == nullptr)
    {
        cout << "No more browser history" << endl;
        return "";
    }
    else
    {
        Node *temp = top;
        string url = top->data;
        top = top->next;
        delete temp;
        return url;
    }
}

void Stack::display()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
bool Stack::isEmpty()
{
    return (top == NULL);
}
// regex validation of URL
bool validateURL(string url)
{
    regex pattern("www\\..+\\..+");
    return regex_match(url, pattern);
}
Stack::~Stack()
{

    while (top != NULL)
    {
        pop();
    }
}

void clearScreen()
{
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

int main()
{
    Stack urlStack;
    Stack forwardHistory;
    string filename = "/Users/carl/Data/BrowserHistory.txt"; // mac os path to the file

    ifstream inputFile(filename);
    if (inputFile.is_open())
    {
        string url;
        while (getline(inputFile, url))
        {
            urlStack.push(url);
        }
        inputFile.close();
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }


    int choice;
    do
    {
        cout << "Menu:" << endl;
        cout << "1. Add a new URL" << endl;
        cout << "2. Navigate back to the previous URL" << endl;
        cout << "3. Navigate forward to the next URL" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        string url;

        switch (choice)
        {

        case 1:
            cout << "Enter new URL" << endl;
            cin >> url;

            while (!validateURL(url))

            {
                cout << "Invalid URL. Please try again." << endl;
                cin >> url;
            }

            urlStack.push(url);

            cout << "Navigated to: " << url << endl;
            cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();
            clearScreen();

            break;

        case 2:

            if (urlStack.isEmpty())
            {
                cout << "no more back history." << endl;
                cout << "Press any key to continue..." << endl;
                cin.ignore();
                cin.get();
                clearScreen();
            
            }
            else
            {

                string previousURL = urlStack.pop();
                forwardHistory.push(previousURL);
                cout << "Navigating back to: " << previousURL << endl;
                cout << "Press any key to continue..." << endl;
                cin.ignore();
                cin.get();
                clearScreen();
            }
            break;
        case 3:
            if (forwardHistory.isEmpty())
            {

                cout << "no more forward history." << endl;
                cout << "Press any key to continue..." << endl;
                cin.ignore();
                cin.get();
                clearScreen();
            }
            else
            {
                string nextURL = forwardHistory.pop();
                urlStack.push(nextURL);
                cout << "Navigating forward to: " << nextURL << endl;
                cout << "Press any key to continue..." << endl;
                cin.ignore();
                cin.get();
                clearScreen();
            }
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();
            clearScreen();
            break;
        }
    } while (choice != 4);
    return 0;
}
