int maxArea(vector<int>& height) 
{
    int n = height.size()-1;
    int result = 0;
    int s = 0;
    int e = n;
    while(s<e)
    {
        int length = min(height[s],height[e]);
        int breadth = e-s;
        result = max(length*breadth,result);
        if(height[s]<height[e])
            s++;
        else
            e--;

    }
    return result;
}
