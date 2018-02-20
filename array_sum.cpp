#include<iostream>
using namespace std;
int main()
{int n,k,sum=0,array[50];
cout<<"Enter the number of integers in array : "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{cout<<i<<" element in array : "<<endl;
cin>>array[i];
}
cout<<"Enter the Kth value : "<<endl;
cin>>k;
for(int i=0;i<k;i++)
{sum=sum+array[i];
}
cout<<"The sum of first "<<k<<" integers in the given array is : "<<sum<<endl;
return 0;
}
