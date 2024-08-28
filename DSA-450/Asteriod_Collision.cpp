#include <bits/stdc++.h>
using namespace std;

vector<int> AsteroidCollision(vector<int> &asteroids)
{

    vector<int> ans;
    if (asteroids.size() == 0 || asteroids.size() == 1)
    {
        return asteroids;
    }
    stack<int> st;

    for (int i = 0; i < asteroids.size(); ++i)
    {
        bool destroyed = false;
        while (!st.empty() && asteroids[i] < 0 && st.top() > 0)
        {
            if (st.top() < -asteroids[i])
            {
                st.pop(); // the top asteroid is destroyed
                continue; // check next top of stack
            }
            else if (st.top() == -asteroids[i])
            {
                st.pop(); // both asteroids destroy each other
            }
            destroyed = true; // current asteroid is destroyed
            break;
        }
        if (!destroyed)
        {
            st.push(asteroids[i]);
        }
    }

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end()); // the stack order should be reversed
    return ans;
}
void print(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> asteroid = {1, -2, 4, -8, 16};
    vector<int> asteroid1 = {-2, -2, 1, -2};

    vector<int> ans = AsteroidCollision(asteroid);
    print(ans);
}