#include <iostream>
using namespace std;
//递归
int f(int n)
{

	if (n==0) return 1;
	if (n==1) return 1;
	return f(n-1)+f(n-2);
}
 //递推方法
  int fun（int n）
  {
        if(n==1)return 1;
        if(n==2)return 1;

        int Part1 = 1;
        int Part2 = 1;
        int temp;
        int sum = 0;

        for (int i = 3; i <= n; i++) {
            sum = Part1+Part2;
            temp = Part2;
            Part2 = sum;
            Part1 = temp;
        }
        return sum;
 }
int main()
{
	cout<<f(6);
 } 
