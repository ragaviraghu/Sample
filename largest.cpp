#include<iostream>
using namespace std;
int main()
{int num1,num2,num3;
cout<<"Enter the first number: "<<endl;
cin>>num1;
cout<<"Enter the second number: "<<endl;
cin>>num2;
cout<<"Enter the third number: "<<endl;
cin>>num3;
if((num1>=num2)&&(num1>=num3))
{cout<<"The Number1 "<<num1<<" is the largest among three numbers"<<endl;
}
else if((num2>=num1)&&(num2>=num3))
{cout<<"The Number2 "<<num2<<" is the largest among three numbers"<<endl;
}
else
{cout<<"The Number3 "<<num3<<" is the largest among three numbers"<<endl;
}
return 0;
}
