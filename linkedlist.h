#include<iostream>
#include<string.h>
#include"node.h"
using namespace std;

class LinkedList{
    Node* start;

    public: 
    LinkedList();
    void setStart(Node* );
    Node* getStart();
    void display();
    int insertBeg(int);
    int insertEnd(int);
    int insertPosition(int,int);

};