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
void Insert(int x)
{
    node* temp;
    temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void print()
{
    node* temp = head;
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
    return 0;
}
