#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;
struct node
{
    int data;
    node* next;
};
node* head;
node* prev;
node* start;
void Insert(int x)
{
    node* temp;
    temp = new node();
    temp->data = x;
    temp->next = NULL;
    if(head != NULL){
        prev->next = temp;
    }
    else start = temp;
    head = temp;
    prev = temp;
}
void print()
{
    node* temp = start;
    cout << "List is : " ;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
void Reverse()
{
    node *temp , *current;
    prev = NULL;
    current = start;
    while(current != NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    start = prev;
}
int main()
{
    head = NULL;
    Insert(5);
    Insert(4);
    Insert(6);
    print();
    Reverse();
    cout << "Reverse ";
    print();
    return 0;
}


