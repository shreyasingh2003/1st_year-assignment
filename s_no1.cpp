//linear search in a array
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    int x;
    const int n=5;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0; i<n; i++)
        cin>>a[i];
        cout<<"linear search"<<endl;
 cout<<"enter the number to be searched:";
cin>>x;
for(i=0; i<n; i++)
{
    if(a[i]==x)
    {
        cout<<"number found at position"<<(i+1);
        break;
    }
}
    if(a[i]!=x)
        cout<<"number not found";
    return 0;
}
