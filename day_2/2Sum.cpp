#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[5] = {1,5,4,3,6};
    int targetNumber = 5;
    int indices[2];
    // Approach 1
    cout<<"approach 1\n";
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(nums[i]+nums[j]==targetNumber){
                indices[0] = i;
                indices[1] = j;
            }
        }
    }
    cout<<"indices : ";
    for(int i=0;i<2;i++){
        cout<<indices[i]<<" ";
    }

    // Approach 2
    cout<<"\napproach 2";
    // using vectors 
    vector<int>nums2;
    // populating the vector
    for(int i=0;i<5;i++){
        nums2.push_back(nums[i]);
    }
    cout<<"\nvector : ";
    for(auto x : nums2){
        cout<<x<<" ";
    }
    vector<int>indices2;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if((nums2[i] + nums2[j])==targetNumber){
                indices2.push_back(i);
                indices2.push_back(j);
            }
        }

    }
    cout<<"\nindices with vector apprach : ";
    for(auto x  : indices2){
        cout<<x<<" ";
    }

    
    
    cout<<"\n";
    return 0;
}