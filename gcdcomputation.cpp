#include<iostream>
using namespace std;
int gcd(int b, int a)
{
    //for this we have to return a
    //while substraction is zero.
    if(a==0){
        return b;
    }
    else{
        return gcd(a,b%a);
    }

}
int main()
{
    int a,b,gcd1;
    cin>>a>>b;
    if(b>=a){
        gcd1=gcd(b,a);
       
    }
    else{
        gcd1=gcd(a,b);
    }
    
    cout<<gcd1<<endl;


    return 0;
}