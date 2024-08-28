#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& arr, int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    // union
    unordered_set<int> s;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }


     vector<int> U;
     for(auto i: s){
         U.push_back(i);
   }
    sort(U.begin(), U.end());
    cout << "Union: ";

     print(U,U.size());
    cout<<endl;
    for(int i =0; i < n; i++){
        mp[a[i]]++;
    }
    for(int i =0; i < m; i++){
        mp[b[i]]++;
    }
    vector<int> I;
    for(auto i: mp){
        if(i.second>=2){
            I.push_back(i.first);
        }
    }
    cout << "Intersection: ";
    
    sort(I.begin(),I.end());
    print(I,I.size());
}
// #include <iostream>
// #include <unordered_set>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void print(vector<int>& arr) {
//     for (int k : arr) {
//         cout << k << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int a[5] = {1, 2, 3, 4, 5};
//     int b[5] = {3, 4, 5, 6, 7};
//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(b) / sizeof(b[0]);

//     // union
//     unordered_set<int> s;
//     unordered_map<int,int> mp;

//     for (int i = 0; i < n; i++) {
//         s.insert(a[i]);
//     }

//     for (int i = 0; i < m; i++) {
//         s.insert(b[i]);
//     }
//     vector<int> U;
//     for(auto i: s){
//         U.push_back(i);
//     }

//     // vector<int> U(s.begin(), s.end()); // Converting set to vector
//     sort(U.begin(), U.end()); // Sorting vector

//     cout << "Union: ";
//     print(U);

//     // intersection
//     for(int i = 0; i < n; i++) {
//         mp[a[i]]++;
//     }

//     for(int i = 0; i < m; i++) {
//         mp[b[i]]++;
//     }

//     vector<int> I;
//     for(auto i: mp) {
//         if(i.second >= 2) {
//             I.push_back(i.first);
//         }
//     }

//     cout << "Intersection: ";
//     print(I);

//     return 0;
// }
