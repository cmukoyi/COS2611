#include<iostream>
#include<fstream>
#include<string>
#include<regex>

using namespace std;

class Node{
    public:
        int key;
            int data;
            Node *next;
    Node (){
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d){
        key = k;
        data = d;
        next = NULL;
    }
};

class Queue{
    public:
        Node *front;
        Node *rear;
    Queue(){
        front = NULL;
        rear = NULL;
    }
    bool isEmpty(){
        if(front == NULL && rear == NULL){
            return true;
        } else {
            return false;
        }
    }
    void enqueue(Node *n){
        if(isEmpty()){
            front = n;
            rear = n;
        } else {
            rear->next = n;
            rear = n;
        }
    }
    Node* dequeue(){
        Node *temp = NULL;
        if(isEmpty()){
            return temp;
        } else {
            if(front == rear){
                temp = front;
                front = NULL;
                rear = NULL;
            } else {
                temp = front;
                front = front->next;
            }
            return temp;
        }
    }
    void display(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
        } else {
            Node *temp = front;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Queue q;
    int option,key,data;
    do{
        cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. Display()" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "0. Exit" << endl;

        cin >> option;
        Node *n1 = new Node();
        switch(option){
            case 0:
                break;
            case 1:
                cout << "Enter key and data of the Node to be enqueued" << endl;
                cin >> key;
                cin >> data;
                n1->key = key;
                n1->data = data;
                q.enqueue(n1);
                break;
            case 2:
                cout << "Dequeued Function Called - Dequeued Value: " << q.dequeue()->data << endl;
                break;
            case 3:
                if(q.isEmpty()){
                    cout << "Queue is Empty" << endl;
                } else {
                    cout << "Queue is not Empty" << endl;
                }
                break;
            case 4:
                q.display();
                break;
            case 5:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option number" << endl;
        }
    } while(option != 0);
       return 0;
    }
 
 

