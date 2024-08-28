# include<bits/stdc++.h>
 using namespace std;
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
int temp = arr[0];
for(int i =1; i <n; i++){
  arr[i-1] = arr[i];
}
arr[n-1] = temp;
print(arr,n); 
}