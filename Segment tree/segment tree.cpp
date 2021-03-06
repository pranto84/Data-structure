#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

#define MAX 100000
#define N 10000

#define sci(a) scanf("%d", &a)
#define sci2(a,b) scanf("%d%d", &a,&b)
#define loop(a,b) for(int i=a; i<b; i++)

int tree[4*N];
int ara[N];

void build_tree(int node,int Start, int End)
{
    if(Start >End)
        return;
    if(Start == End){
        tree[node] = ara[Start];
        return;
    }
    build_tree(node*2, Start, (Start+End)/2);
    build_tree(1+node*2, 1+(Start+End)/2, End);
    tree[node] = max(tree[node*2], tree[node*2+1]);
}

int query(int node, int Start, int End, int l, int r )
{
    if(l > End)
        return -100;
    if(r < Start)
        return -100;
    if(l<=Start && r >= End)
        return tree[node];
    int mid = (Start+End) / 2;
    int q1 = query(node*2,Start, mid, l, r);
    int q2 = query(1+node*2, mid+1, End, l, r);
    return max(q1, q2);


}

int main()
{
    cout << "Enter the total number of element\n";
    int n;
    sci(n);
    for(int i=0; i<n; i++)
        sci(ara[i]);
    build_tree(1, 0, n-1);
    cout << tree[1] << endl;
    cout << tree[0] << endl;
    for(int i = 0; i<4*n; i++){
        cout << tree[i] << endl;
    }
    int a, b;
    sci2(a,b);
    cout << query(1,1, n, a, b) << endl;
    return 0;
}
