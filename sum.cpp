#include<iostream>
using namespace std;
int main()
{ int n,sum=0;
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{sum=sum+i;
}
cout<<"The sum of natural numbers upto "<<n<<" numbers is : "<<sum;
return 0;
}

