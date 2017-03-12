#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;
int main()
{
    stack<int> s;
    int n;
    cin >>n;
    cout << endl;
    for(int i=0; i<n; i++){
        int a;
        cin>> a;
        s.push(a);

    }
    int len = s.size();
    cout << len<< endl;

    if(s.empty())
        cout << "Empty stack" << endl;
    else
        cout<< "Non empty stack" << endl;

    for(int i=0; i<len; i++){
        cout << s.top() <<" ";
        s.pop();
    }
    cout << endl;
    if(s.empty())
        cout << "Empty stack" << endl;
    else
        cout<< "Non empty stack" << endl;

    return 0;
}
