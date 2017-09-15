#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;
#define N 10000005
#define MAX 100005

#define sci(a) scanf("%d", &a)
#define sci2(a,b) scanf("%d%d", &a, &b)
#define sci3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define scd(a) scanf("%lf", &a)
#define scd2(a,b) scanf("%lf%lf",&a,&b)
#define scd3(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)
bool test = false;

struct node{
    bool endmark;
    node* next[26+1];
    node(){
        endmark =  false;
        for(int i=0; i<26; i++)
            next[i] = NULL;
    }
};
node* root;
void Insert(string str, int n){
    node* temp;
    if(root == NULL){
        root = new node();
    }
    temp = root;
    for(int i =0; i<n; i++){
        int p = str[i] - 'a';
        if(temp->next[p] == NULL)
            temp->next[p] = new node();
        temp = temp->next[p];
    }
    temp->endmark =  true;
}
bool Search(string str, int n)
{
    node* temp = root;
    for(int i=0; i<n; i++){
        int p = str[i] - 'a';
        if(temp->next[p] == NULL)
            return false;
        else
            temp = temp->next[p];
    }
    return temp->endmark;
}
void Delete(node* temp){
    for(int i =0; i<26; i++){
        if(temp->next[i] != NULL){
            Delete(temp->next[i]);
        }
    }
    delete(temp);
}
int main()
{
    root = NULL;
    string c;
    cin >> c;
    Insert(c, c.size());
    if(Search(c, c.size()) == true)
        cout << "yes" << endl;
    return 0;
}


