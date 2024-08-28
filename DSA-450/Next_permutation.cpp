# include<bits/stdc++.h>
 using namespace std;
void print(vector<int> nums){
    for(int i =0; i < nums.size(); i++){
    cout<<nums[i];
}
}
 int main()
{
vector<int> nums = {2,1,5,4,3,0,0};

int index =-1;
for(int i =nums.size()-2; i >=0 ; i--){
    if(nums[i] < nums[i+1]){
        index = i;
        break;
    }
}
if(index == -1){
    reverse(nums.begin(),nums.end());
}

for(int i = nums.size()-1; i >index; i--){
    if(nums[i] > nums[index]){
        swap(nums[i],nums[index]);
        break;
    }
}
reverse(nums.begin()+index+1,nums.end());
print(nums);
 
 
 
}