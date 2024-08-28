#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int maxarea = 0;
        int l = 0;
        int r = height.size() -1;

        while( l < r){
            int area = 0;
            if(height[l] < height[r]){
               area =  (r -l) * min(height[l], height[r]);
                l++;
            }
            else{
                 area =  (r -l) * min(height[l], height[r]);
                r--;
            }
            maxarea = max (maxarea, area);
        }
        return maxarea;
}

int main( ){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"Maximum Area is : "<< maxArea(height);
}