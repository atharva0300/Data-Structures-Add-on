#include<iostream>
using namespace std;

int main(){
    /* int */
    int a = 12;
    cout<<"Hello World from the Computer Centre\n";
    cout<<"int a : "<<a<<"\n";
    
    /* if, else if, else */
    /* ( conditiion )*/
    cout<<"condition\n";
    if(a>12){
        cout<<"a is greater than 12";
    }else if(a<12){
        cout<<"a is smaller than 12";
    }else{
        cout<<"a = 12";
    }

    /* for loop */
    /* ( initialization, condition, expression )*/
    cout<<"\nInside for loop\n";
    for(int i=0;i<a;i++){
        cout<<"iteration : "<<i<<"\n";
    }
    cout<<"a : "<<a<<"\n";

    /* while */
    /* while(condition){
        code body, 
        expression
    }*/
    cout<<"Inside while\n";
    while(a!=8){
        cout<<"decrement : "<<a<<"\n";
        a--;    // post-fix decrement operation
    }
    cout<<"a : "<<a<<"\n";

    /* do while */
    /* do{
        code,
        expression
    }while(condition)
    */
   cout<<"Inside do-while\n";
   do{
    cout<<"decrement : "<<a<<"\n";
    a--;    // postfix decrement operation 
   }while(a!=3);
   cout<<"a : "<<a<<"\n";

    
    return 0;
}