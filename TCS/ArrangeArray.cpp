#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    // enter the size of the array
    int a[n]; // for elements on array
    for(int i = 0; i < n; i++)
    cin >> a[i]; //enter element of the array
    int l = 0, m = 0, h = n-1; // pointers

    while (m <= h) // process elemet while 'm' cross 'h'
    {
        if(a[m] == 0)
        swap(a[l++], a[m++]); // if element is 0
        else if(a[m] == 1)
        m++; // if element is 1
        else
        swap(a[m], a[h--]); // if element is 2
    }
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
}