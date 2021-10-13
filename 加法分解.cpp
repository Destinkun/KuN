#include<iostream>
using namespace std;

int sum = 0;

void dfs1(int n, int count, int* p)
{
	if (n == 0) { //递归基，到叶子结点时输出结果
		cout << sum << "=";
		for (int i = 0; i < count; i++)
			if (i == count - 1)
				cout << p[i] << endl;
			else
				cout << p[i] << "+";
		return;
	}
	for (int i = 1; i <= n; i++) {
		p[count] = i;
		dfs1(n - i, count + 1, p);
	}
	return;
}

int main() 
{
	int n, m;
	cin >> n >> m;
	sum = n;
	int* p = new int[n];
	if (m == 1)
		dfs1(n, 0, p);
	return 0;
}
