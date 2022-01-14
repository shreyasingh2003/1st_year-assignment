//sum of the even elements in a array
#include <iostream>
using namespace std;
int main()
{
    int i;
    const int n=5;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0; i<n; i++)
    cin>>a[i];
    int sum=0;
    for(i=0; i<n; i++)
    {
    sum=sum+a[i];
    }
    cout<<"the sum of the elements of array is:"<<sum;
   return 0;
}
