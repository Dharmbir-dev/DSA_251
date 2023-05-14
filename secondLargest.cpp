#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int flargest = INT_MIN;
    int slargest = INT_MIN;
    for(long long i = 0;i<n;i++)
    {
        if(arr[i] > flargest && arr[i] > slargest)
        {
            slargest = flargest;
            flargest = arr[i];
        }
        if(arr[i]<flargest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
    }
    if(slargest == INT_MIN)
    return -1;
    else
    return slargest;
}
