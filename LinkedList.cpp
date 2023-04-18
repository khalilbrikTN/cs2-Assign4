#include <iostream>
#include "LinkedList.h"
#include <vector>
using namespace std;

LinkedList::LinkedList(){
    head->next = nullptr;  //nullptr is more precise than null
}
LinkedList::~LinkedList() {
    delete head;
}
node* LinkedList::getHead(){
    return head;
};
void LinkedList::add(node* last, node* n){
    last->next = n;
};
void LinkedList::remove(node* n){
    node* h = head;
    node* prev = h;
    while(h!= nullptr){
        if(h == n){
            prev->next= h->next;
            break;
        }else{
            prev = h;
            h = h->next;
        }
    }
};
void LinkedList::print(){
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->value<<endl;
        temp = temp->next;
    };
    delete temp;
}
void LinkedList::printOccurences(){
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->value<<":"<<temp->occurence<<endl;
        temp = temp->next;
    };
    delete temp;
}
int LinkedList::sum(){
    int sum = 0;
    node* temp = head;
    while(temp!= nullptr){
        sum+=temp->value;
        temp = temp->next;
    };
    delete temp;
    return sum;
};
node* LinkedList::CreateListVector(vector<int> v){
    node* temp = head;
    node* search = head;
    for(int i = 0; i<v.size(); i++){
        temp->value = v.at(i);
        search = head;
        for(int j = 0; j<i;j++){
            if(search->value == temp->value){
                temp->occurence+=1; //will update the occurences of the added node
                search->occurence+=1; //will update the occurences of the already existing nodes
            };
            search = search->next;
        }
        if(i<=v.size()-2){
            temp->next = new node();
        }else{
            temp->next = nullptr;
        }
        temp = temp->next;
    }
    delete temp;
    return head;

}


