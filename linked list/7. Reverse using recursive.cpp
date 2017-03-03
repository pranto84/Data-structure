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
void recursive_reverse(node* temp)
{
    if(temp->next == NULL){
        start = temp;
        return;
    }
    recursive_reverse(temp->next);
    node* temp1 = temp->next;
    temp1->next = temp;
    temp->next = NULL;

}

int main()
{
    head = NULL;
    Insert(5);
    Insert(4);
    Insert(6);
    Insert(10);
    Insert(120);
    print();
    recursive_reverse(start);
    cout << "Reverse ";
    print();
    return 0;
}



