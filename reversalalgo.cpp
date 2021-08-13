//written and successfully executed.
#include<iostream>
using namespace std;

int reverse(int a[],int start,int end)
{
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

void leftrotate(int a[],int n,int d){
    if(d==0){
        return;
    }
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;

    leftrotate(a,n,d);



    return 0;
}