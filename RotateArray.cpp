#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int s,int e)
{
    while(s<=e)
    {
        int c = arr[s];
        arr[s] = arr[e];
        arr[e] = c;
        s++;
        e--;
    }
}
int main() {
  
    int n;
    cin >> n;
    vector<int>arr;
    int a;
    for(int i = 0;i<n;i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    int target;
    cin >> target;
    reverse(arr,0,n-1);
    reverse(arr,0,n-target-1);
    reverse(arr,n-target,n-1);

    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
