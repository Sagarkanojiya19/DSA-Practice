# include<bits/stdc++.h>
 using namespace std;

void OptimalSol(int *arr, int n, int k){//T.C=O(N) at worst case
            k = k % n; // for handeling the case where d > n
        reverse (arr, arr+k);
        reverse (arr+k, arr+n);
        reverse (arr, arr+n);
}
 void print(int *arr, int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}
 int main()
{
int arr[5] = {1,2,3,4,5};
int n =5;
int i =0;
int k =3;
/*T.C = O(N^2) at worst case;
while(i < k){
   int temp = arr[0]; // set first element in temp;
    int j =0;
   while(j<n-1){
        arr[j] = arr[j+1];
        j++;
   }
   arr[n-1] = temp;
   i++;
}
*/ 
OptimalSol(arr, n, k);
print(arr,n); 
}