 #include <iostream>
 using namespace std;
 int f(int n)
{
	int sum=1,i;
	for(i=1;i<=n;i++)
	{
		sum=i*sum;
	}
	return sum;
 }
 int main()
 {
 	cout<<f(5);
  } 
