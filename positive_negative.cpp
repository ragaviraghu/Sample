#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter the Number:"<<endl;
cin>>number;
if(number>0)
{cout<<" The given number "<<number<<" is positive"<<endl;
}
else if(number<0)
{cout<<" The given number "<<number<<" is negative"<<endl;
}
else
{cout<<" The given number "<<number<<" is neither positive nor negative"<<endl;
}
}

