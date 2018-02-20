#include<iostream>
using namespace std;
int main()
{int num,count=0;
cout<<"Enter the number : "<<endl;
cin>>num;
while(num>0)
{ int r=num%10;
count=count+1;
num=num/10;
}
cout<<"The number of digits in the given number is : "<<count<<endl;
return 0;
}
