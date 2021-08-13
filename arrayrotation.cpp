/* written by utkarsh gupta and submitted on github
   8/12/2021 1:32 AM */

#include<iostream>
using namespace std;
void rotate(int ar[],int d,int n)
{   
    // loop for d iterations of one rotation.

    for(int i=0;i<d;i++){

    // following is the process for one iteration.
   
    int temp=ar[0];

    for(int j=1;j<n;j++)
    {
        ar[j-1]=ar[j];
    }
    ar[n-1]=temp;}

    // one loop for printing the output.
    
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return;    
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int d;
    cin>>d;
    rotate(array,d,n);
    return 0;
}
//program.... end here.
