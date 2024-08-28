#include <bits/stdc++.h>
using namespace std;
int minjumps(int arr[], int N)
{
    if (N <= 1) // If array size is 0 or 1, no jumps are needed.
        return 0;

    int maxReach = arr[0]; // Represents the furthest index you can reach from the current position.
    cout << maxReach << endl;

    int steps = arr[0]; // Represents the steps you can take from the current position.
    cout << steps << endl;

    int jumps = 1; // Number of jumps required.
    cout << jumps << endl;

    for (int i = 1; i < N; ++i)
    {
        if (i == N - 1) // If we've reached the last index, no need for further jumps.
            return jumps;

        maxReach = max(maxReach, i + arr[i]); // Update maxReach if we can reach a further index.
        cout << maxReach << endl;
        steps--; // Use up a step.
        cout << steps << endl;

        if (steps == 0)
        { // If no more steps left, we need another jump.
            jumps++;

            if (i >= maxReach) // If we can't go further even with a jump, return -1.
                return -1;

            steps = maxReach - i; // Steps for the next jump.
            cout << steps << endl;
        }
    }

    return -1; // If we somehow exit loop without reaching the end, return -1.
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 1, 1};
    int n = 6;
    //        int maxR = arr[0];
    //           int step = arr[0];
    //           int jump = 1;
    //           if(n == 1 && arr[0]== 0) return 0;
    //           else if(arr[0]==0) return -1;
    //           else if(n==1) return 0;

    //           else{
    //               for(int i = 1;i < n; i++){
    //                   if(i == n-1){
    //                       return jump;
    //                   }
    //                   maxR = max(maxR, i+arr[i]);
    //                   step--;
    //                   if(step == 0){
    //                       jump++;
    //                       if(i >= maxR) {
    //                       return -1;
    //                       }
    //                       step = maxR-i;
    //                   }
    //               }
    //           }

    cout << " " << minjumps(arr, 6) << " " << endl;
}