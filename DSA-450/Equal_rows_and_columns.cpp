#include <bits/stdc++.h>
using namespace std;

int Matched(vector<vector<int>> &arr, int row, int col)
{
    int ans = 0;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            int cnt = 0;
            for (int i = 0; i < col; i++)
            {
                if (arr[r][i] == arr[i][c])
                {
                    cnt++;
                }
                else{
                    break;
                }
            }
            if (cnt == col)
            {
                ans++;
            }
        }
    }
    return ans;
}
// optimal
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;

        map<vector<int>,int> mp;

        for(int row = 0; row < n; row++){
            mp[grid[row]]++;
        }

        for(int c = 0; c < n; c++){
            vector<int> temp;
            for(int r =0; r < n; r++){
                temp.push_back(grid[r][c]);
            }
            ans += mp[temp];
        }
        return ans;
    }
int main()
{
    vector<vector<int>> arr = {{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    cout << Matched(arr, 4, 4);
}