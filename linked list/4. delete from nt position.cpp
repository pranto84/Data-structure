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
void Delete(int n)
{
    node* temp1 ;
    temp1 = start;
    for(int i = 1; i <n-1; i++)
        temp1 = temp1->next;
    node* temp2;
    temp2 = temp1->next; //nth node for free
    temp1->next = temp2->next;
    delete temp2;
}
int main()
{
    head = NULL;
    cout << "how many number ?"<< endl;
    int n,x;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> x;
        Insert(x);
        print();
    }
    cout << "Enter the position to delete";
    cin >> n;
    Delete(n);
    print();
    return 0;
}


