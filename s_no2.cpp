//max element in a array
#include <iostream>
using namespace std;
int main()
{
    int i;
    int max1;
    const int n=5;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0; i<n; i++)
    cin>>a[i];
    max1=a[0];
    for(i=1; i<=n; i++)
    {
        if(a[i]>=max1)
        {
            max1=a[i];
        }
    }
    cout<<"the max element of array is:"<<max1;
    return 0;
}
