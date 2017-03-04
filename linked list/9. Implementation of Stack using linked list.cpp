#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

struct node{
    int data;
    node* next;
};
node *top;
void push(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = top;
    top = temp;
}
void print()
{
    node *temp;
    temp = top;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }
    cout << endl;

}
void pop()
{
    node* temp = top;
    top= top->next;
    delete(temp);
}

int isEmpty()
{
    if(top == NULL)
        return true;
    else
        return false;
}
int main()
{
    top = NULL;
    push(4);
    push(0);
    push(33);
    push(55);
    push(66);
    push(47);
    print();
    pop();
    print();
    push(5);
    print();
    if(isEmpty())
        cout << "Empty.";
    else
        cout << "nope";

    return 0;
}
