#include <bits/stdc++.h>
using namespace std;

int LongestOnce(int arr[], int n, int k)
{
    int Maxi = INT_MIN;
    int i = 0;
    int j = 0;
    int cntr = 0;
    while (j < n)
    {

        if (arr[j] == 0)
        {
            cntr++;
        }
        if (cntr > k)
        {
            if (arr[i] == 0) cntr--;
            i++;
        }
        Maxi = max(Maxi, j - i + 1);
        j++;
    }
    return Maxi;
}

int main()
{
    int arr[11] = {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0};
    int n = 11;
    int k = 2;

    cout << "Max length: " << LongestOnce(arr, n, k);
}