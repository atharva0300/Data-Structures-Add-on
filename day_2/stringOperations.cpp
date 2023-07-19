#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string fname = "atharva";
    string lname = "pingale";
    string fullname = fname + lname;
    cout<<"fullname : ";
    for(int i=0;i<fullname.length();i++){
        cout<<fullname[i]<<"";
    }

    // comparing strings 
    string tempName = "atharva";
    if(tempName==fname){
        cout<<"\nThe 2 strings are equal";
    }else{
        cout<<"\nThe 2 strings are not equal";
    }

    // counting the number of vovels in the string
    // Approach 1'
    cout<<"Enter string : ";
    char tempString[100] = {0};
    cin.getline(tempString , 100);
    cout<<"tempString : "<<tempString<<"\n";
    // cout<<"size : "<<tempString.length()<<"\n";
    char vowels[5] = {'a' , 'e' , 'i' , 'o' , 'u'};
    int vowelCounter=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<5;j++){
            if(tempString[i]==vowels[j]){
                vowelCounter++;
            }
        }
    }
    cout<<"\nNumber of vowels : "<<vowelCounter;
    cout<<"length of the array : "<<sizeof(tempString)/sizeof(char);

    // Approach 2


    cout<<"\n";
    return 0;
}