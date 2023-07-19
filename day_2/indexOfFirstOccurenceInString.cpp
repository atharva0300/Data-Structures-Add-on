#include<bits/stdc++.h>
using namespace std;

int main(){
    string tempString;
    cout<<"Enter string : ";
    cin>>tempString;
    string needle;
    cout<<"needle string : ";
    cin>>needle;
    int index =-1;
    bool hook = false;
    int startIndex = 0;
    

    for(int i=0;i<tempString.length();i++){
        // the first element pointer would be tempString[i]
        if(tempString[i]==needle[0]){
            hook = true;
        }

        if(hook==true){
            
        }
    }
    cout<<"index : "<<index<<"\n";

    return 0;
}