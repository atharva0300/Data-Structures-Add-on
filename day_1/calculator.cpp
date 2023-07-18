#include <iostream>
using namespace::std;

int main(){

    float n1, n2;
    int i;

    cout<<"Enter two numbers=";
    cin>>n1>>n2;

    do{
        cout<<"\nSelect operation: 1.Add 2.Substract 3.Multiple 4.Divide 5.Exit\n";
        cin>>i;

        switch (i)
        {
            case 1:
                cout<<"Addition="<<n1+n2<<"\n";
                break;

            case 2:
                cout<<"Substraction="<<n1-n2<<"\n";
                break;
            
            case 3:
                cout<<"Multiplication="<<n1*n2<<"\n";
                break;

            case 4:
                cout<<"Division="<<n1/n2<<"\n";
                break;
            
            default:
                break;
        }
    }while(i!=5);

    return 0;
}
