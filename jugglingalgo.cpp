/* solution taken from geeks for geeks
   have to study it well*/
#include<iostream>  
using namespace std;
int gcd(int a, int b)
{
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
}
}
void leftRotate(int arr[], int d, int n)
{
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int d;
    cin>>d;
 
    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n);


  return 0;
}