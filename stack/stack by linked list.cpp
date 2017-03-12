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
        cout << temp->data << " ";
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
int Search(int num)
{
    node *temp = top;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(temp->data == num)
            return cnt;
        temp = temp->next;
    }
    if(temp == NULL)
        return 0;
}
void Update(int n, int position)
{
    node* temp = top;
    for(int i=1; i < position; i++)
        temp = temp->next;
    temp->data = n;
}
void Swap(int a, int b)
{
    node *loc1 , *loc2, *temp;
    temp = top;
    if(a > b)
        swap(a,b);
    int cnt = 1;
    if(a == 1){
        int p = temp->data;
        while(cnt != b){
            temp = temp->next;
            cnt++;
        }
        top->data = temp->data;
        temp->data = p;
    }
    else{
        cnt = 1;
        int cnt2 = 1;
        loc1 = top;
        loc2 = top;
        int p, q;
        while(cnt != a){
            loc1= loc1->next;
            cnt++;
        }
        p = loc1->data;
        while(cnt2 != b){
            loc2 = loc2->next;
            cnt2++;
        }
        loc1->data = loc2->data;
        loc2->data = p;
    }
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
    cout << "Enter number for search ";
    int n;
    cin >> n;
    int cnt;
    cnt = Search(n);
    if(cnt == 0)
        cout << "not found" << endl;
    else
        cout << "found at "<< cnt <<"th position" << endl;

    cout << "Enter the number and position  for update ";
    cin >> n >> cnt;
    Update(n, cnt);
    print();
    cout << "Enter the two location for swap";
    cin >> n >> cnt;
    Swap(n, cnt);
    print();

    return 0;
}
