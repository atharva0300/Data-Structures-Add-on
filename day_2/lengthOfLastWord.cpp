#include<bits/stdc++.h>
using namespace std;

int main(){
    string tempString;
    cout<<"Enter a string : ";
    cin>>tempString;
    cout<<"size of the string : "<<tempString.length();
    vector<char>lastWord;
    for(int i=tempString.length()-1;i>=0;i--){
        if(tempString[i]!=' '){
            lastWord.push_back(tempString[i]);
        }else{
            break;
        }
    }
    cout<<"\nlast word : ";
    for(auto x : lastWord){
        cout<<x<<" ";
    }
    cout<<"length of the last word : "<<lastWord.size()<<"\n";    

    cout<<"\n";
    return 0;
}