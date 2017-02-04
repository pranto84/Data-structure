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
void Insert(int x, int n)
{
    node* temp1 = new node();
    temp1->data = x;
    temp1->next = NULL;
    if(n==1){
        temp1->next = start;
        start = temp1;
        return;
    }
    node* temp2;
    temp2 = start;
    for(int i = 1; i < n-1; i++){
        temp2 = temp2->next;
    }

    temp1->next = temp2->next;
    temp2->next = temp1;

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
    head = NULL;
    cout << "how many number ?"<< endl;
    int n,x;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> x;
        Insert(x);
        print();
    }
    cout << "print the number and where you want to set it:" << endl;
    cin >> x >> n;
    Insert(x,n);
    print();
    return 0;
}


