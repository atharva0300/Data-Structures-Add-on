// reversing the array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<"size : "<<size<<"\n";

    cout<<"Original Array : ";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    // reversing the array ( O(n) )
    int b[size];
    for(int i=0;i<size;i++){
        b[i] = a[size-i-1];
    }
    cout<<"\nPrinting the reverse array : ";
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }

    // sum of array 
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=b[i];
    }
    cout<<"\nSum : "<<sum<<"\n";

    // searching for the targetElement
    int c[10] = {5,4,7,4,99,5,4,3,6,84};
    int targetNumber = 99;
    for(int i=0;i<10;i++){
        if(c[i]==targetNumber){
            cout<<"Found the number : "<<targetNumber<<"\n";
            break;
        }
    }

    // removing duplicate elements 
    // 1. sorting the array 
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(c[j]<c[i]){
                swap(c[i] , c[j]);
            }
        }
    }
    cout<<"sorted array : ";
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    // 2. creating a temp array and storing the values without the duplicates in it 
    int temp[10];
    int j=0;
    for(int i=0;i<10;i++){
        if(c[i]!=c[i+1]){
            temp[j++] = c[i];
        }
    }
    // 3. trimming the array
    // the non-duplicated array will have a size of j
    cout<<"\nArray with non duplicates : ";
    for(int i=0;i<j;i++){
        cout<<temp[i]<<" ";
    }

    // approach 3 
    // using hashmaps 

    cout<<"\n";
    return 0;
}