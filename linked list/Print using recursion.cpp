
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
void Print_recursion_forward(node *temp)
{

    if(temp == NULL){
        cout << endl;
        return;
    }
    else{
        cout << temp->data << " ";
        Print_recursion_forward(temp->next);
    }

}
void Print_recursion_reverse(node *temp)
{

    if(temp == NULL){
        cout << endl;
        return;
    }
    else{
        Print_recursion_reverse(temp->next);
        cout << temp->data << " ";
    }

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
    cout << "forword list is ";
    Print_recursion_forward(start);
    cout << "Reverse list is ";
    Print_recursion_reverse(start);
    // print();
    return 0;
}


