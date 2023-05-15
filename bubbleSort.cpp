#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1;i<n;i++)
    {
        for (int j = 0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int c = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = c;
            }
        }
    }
}
