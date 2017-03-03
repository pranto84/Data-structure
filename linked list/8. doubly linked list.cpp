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
    node* befoure;
};
node* head;
node* last;
node* prev;
node* start;

void Insert_begin(int x)
{
    node* temp;
    temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->befoure = NULL;
    if(start == NULL){
        start = temp;
        last = temp;
        return;
    }
    start->befoure = temp;
    temp->next = start;
    start = temp;
}
void Insert_last(int x)
{
    node* temp;
    temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->befoure = NULL;
    if(start == NULL){
        start = temp;
        last = temp;
        return;
    }
    last->next = temp;
    temp->befoure = last;
    last = temp;
}
void print_forword(node *temp)
{
    cout << "List is : " ;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(node *temp)
{
    cout << "List is : " ;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->befoure;
    }
    cout << endl;
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
int main()
{
    start = NULL;
    last = NULL;
    head = NULL;
    Insert_begin(6);
    Insert_begin(5);
    Insert_begin(3);
    Insert_begin(2);
    cout << "Forward ";
    print_forword(start);
    cout << "Reverse ";
    print_reverse(last);

    Insert_last(10);
    Insert_last(15);

    cout << "Final ";
    print();
    return 0;
}
