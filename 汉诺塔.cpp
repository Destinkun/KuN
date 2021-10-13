#include<stdlib.h>
#include<stdio.h>
using namespace std;
void hanoi(int n,int x,int y ,int z)//x,y,z±íÊ¾A¡¢B¡¢C¸Ü
{
	if(n==1)
	{
		printf("%c-->%c\n",x,z);
	}
	else
	{
		hanoi(n-1,x,z,y);
		printf("%c-->%c\n",x,z);
		hanoi(n-1,y,x,z);
	}
 } 
 int main(void)
 {
 	int m;
 	printf("input unmber:");
 	scanf("%d",&m);
 	printf("moving %2d diskes:\n",m);
 	hanoi(m,'a','b','c');
 	return 0;
 }
