#include<iostream>
#include <string>
#include "LinkedList.h"
#include <vector>
using namespace std;

void insertAfter(vector<int>& v,int firstValue, int secondValue);
int main(){
    //we define the head of the linked list
    vector<int> vector1;
    cout<<"Welcome to our Program"<<endl;
    cout<<"Enter the integers you want to store or q to quit!"<<endl;
    string n;
    cin>>n;
    while(n!="q"){
        vector1.push_back(stoi(n));
        cin>>n;
    };
    /*cout<<"Enter Fist Value"<<endl;
    int first;
    cin>>first;
    cout<<"Enter Second Value"<<endl;
    int second;
    cin>>second;
    insertAfter(vector1,first,second);*/
    LinkedList l;
    node* temp = l.CreateListVector(vector1);
    /* it will remove the nodes that have 0 as value
    while(temp != nullptr){
        if(temp->value == 0){
            l.remove(temp);}
        temp = temp->next;
    };*/
    l.print();

    //cout<<"The sum of all nodes is : "<< l.sum()<<endl;
    //l.print();
    //l.printOccurences();
    return 0;
};
void insertAfter(vector<int>& v,int firstValue, int secondValue){
    vector<int>::iterator iter = v.begin();

    for(iter;iter<=v.end();iter++){
        if(*iter == firstValue){
            v.insert(iter+1,secondValue);
        }
    }

}
