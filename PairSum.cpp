#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target)
{
	int s = 0;
	int e = n-1;
	int ans = 0;
	while(s<e)
	{
		if(arr[s]+arr[e] == target)
		{
			s++;
			e--;
			ans++;
		}
		else if(arr[s]+arr[e]<target)
		{
			s++;
		}
		else
		e--;
	}
	if(ans == 0)
	return -1;
	else
	return ans;
}
