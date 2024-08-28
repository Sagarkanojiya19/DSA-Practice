#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int mindiff = arr[n - 1] - arr[0];

    int newmin, newmax;

    for (int i = 1; i < n; i++)
    {
        newmin = min(arr[i] - k, arr[0] + k);
        newmax = max(arr[i - 1] + k, arr[n - 1] - k);

        if (newmin < 0)
        {
            continue;
        }
        mindiff = min(mindiff, newmax - newmin);
    }

    return mindiff;
}
int main()
{
    int arr[5] = {29, 11, 23, 17, 32};
    int n = 5;
    int k;
    cin >> k;
    cout << "The minimum differce between hights is: " <<getMinDiff(arr,n,k);
}