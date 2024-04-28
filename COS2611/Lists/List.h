#ifndef CLASS_H
#define CLASS_H

using namespace std;

class List{
    private:
    struct node{
         int Data;
         node* next;
    };

    typedef struct node* nodePtr;
    nodePtr head;
    nodePtr curr;
    nodePtr temp;

    public:
        List();
        void AddNode(int addData);
        void DeleteNode(int delData);
        void PrintList();

};

#endif
