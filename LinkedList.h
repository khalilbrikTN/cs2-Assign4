#ifndef UNTITLED_LINKEDLIST_H
#define UNTITLED_LINKEDLIST_H
#include <iostream>
#include <vector>
using namespace std;


struct node{
    int value;
    int occurence = 1;
    node* next;
};

class LinkedList {
private:
    node* head = new node();

public:
    LinkedList();
    node* getHead();
    void add(node* last, node* n);
    void remove(node* n);
    void print();
    void printOccurences(); //print each element with the number of its occurences
    int sum();
    node* CreateListVector(vector<int> v);
    ~LinkedList();
};


#endif
