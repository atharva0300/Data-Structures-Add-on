#include<iostream>
using namespace std;

// calculating the leftSum and the rightSum of the square matrix
int main(){
    int size=0;
    cout<<"Enter the size of the square matrix : ";
    cin>>size;
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"Enter number for indice : "<<i<<" , "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<"displaying the array : \n";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Sum of left diagonal elements : ";
    int leftSum=0;
    for(int i=0;i<size;i++){
        leftSum += arr[i][i];
    }
    cout<<leftSum<<"\n";
    int rightSum = 0;
    for(int i=0;i<size;i++){
        rightSum += arr[i][size-i-1];
    }
    cout<<"Sum of right diagonal elements : "<<rightSum<<"\n";


    return 0;
}