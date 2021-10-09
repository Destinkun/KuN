#include<iostream>
#include <cstdio>
#include<cstring>
using namespace std;
bool fun(const char *str,int length)
{
	if(length<=1) return true;
	else if(str[0]==str[length-1]) return fun(str+1,length-2);
	else return false;
}
int main ()
{
	char *str=new char[20];
	cout<<"input the string: ";
	gets(str);
	int length=strlen(str);
	if(fun(str,length))
	{
		cout<<"is palindrome";
	}
	else
	{
		cout<<"is not palindrome";
	}
	return 0;	
}
