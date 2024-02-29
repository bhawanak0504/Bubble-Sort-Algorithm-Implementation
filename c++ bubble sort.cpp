#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int count = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count++;
            }
        }
        if(count==0)
        break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    free (a);
   return 0;
}
