#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 50000
int n;
int ara[MAX];
void Insert(int num, int position, int ara[])
{
    int k = n - 1;
    position -= 1;
    while(position <= k){
        ara[k+1] = ara[k];
        k--;
    }
    ara[position] = num;
    n++;

}
void Print(int ara[])
{
    cout << "Current list is: ";
    for(int i =0; i<n; i++)
        cout << ara[i] << " ";
    cout << endl;
}
void Delete(int position)
{
    int i = n-1;
    position -= 1;
    while(i > position){
        ara[position] = ara[position+1];
        position++;
    }
    n--;
}
void Search(int num)
{

    for(int i=0; i<n; i++){
        if(ara[i] == num){
            cout << "element found at " << i+1 << "th Position" << endl;
            return;
        }
        else if(i == n-1)
            cout << "Not found" << endl;

    }
}

int main()
{
    cout << "Enter the array size: ";
    cin >> n;
    for(int i= 0; i< n; i++)
        cin >> ara[i];
    Print(ara);
    cout << "Enter the number that you want to insert: ";
    int temp, place;
    cin >> temp;
    cout << "Enter the place number where you want to insert that number: ";
    cin >> place;
    Insert(temp, place, ara);
    Print(ara);
    cout << "Enter the position from where you want to delete an element:";
    cin >> place;
    Delete(place);
    Print(ara);
    cout <<"Enter the element that you want to search: ";
    cin >> temp;
    Search(temp);

	return 0;
}
