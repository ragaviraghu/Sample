#include<iostream>
using namespace std;
int main()
{char ch;
cout<<"Enter the character:"<<endl;
cin>>ch;
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{cout<<" The given character "<<ch<<" is an alphabet"<<endl;
}
else
{cout<<" The given character "<<ch<<" is not an alphabet"<<endl;
}
return 0;
}
