#include"linkedlist.h"

LinkedList::LinkedList(){
    start = NULL;
}
void LinkedList::setStart(Node* st){
    start = st;   
}
Node* LinkedList::getStart(){
    return start;
}
void LinkedList::display(){
    Node *p = start;
    while(p!=NULL){
        cout<<p->getData()<<"\t";
        p = p->getNext();
    }

}
int LinkedList::insertBeg(int d){
    Node* temp = new Node(d);
    temp->setNext(start);
    start = temp;

}
int LinkedList::insertEnd(int d){
    Node *temp = new Node(d);
    if(start == NULL){
        start = temp;
        return 1;
    }
    Node *p = start;
    while(p->getNext()!=NULL){
        p=p->getNext();
    } 
    p->setNext(temp);
}
int LinkedList::insertPosition(int data,int pos){
    
    Node* temp = new Node(data);
    if(start == NULL){
       start = temp;
       return 1;
    }
    if(pos == 1){
        temp->setNext(start);
        start = temp ;
        return 1;
    }
    int i = 1;
    Node* p = start;
    while(i < pos -1 && p->getNext() != NULL){
        p = p->getNext();
        i++;
    }
    temp->setNext(p->getNext());
    p->setNext(temp);
}
Node::Node(int d){
    data = d;
    next = NULL;
}
void Node::setDate(int d){
    data = d;
}
void Node::setNext(Node* nt){
    next = nt;   
}
int Node::getData(){
    return data;
}
Node* Node::getNext(){
    return next;
}