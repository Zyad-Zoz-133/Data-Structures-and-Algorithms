#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbel (vector<int>&nums){

    for (int j = 0;j<nums.size();j++){
        for (int i =0 ;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
    }

}

int main(){
    vector <int> nums{2,6,1,64,45,13,3,5,68};
    bubbel(nums);

    for(int i : nums){
        cout << i << " ";
    }
}

