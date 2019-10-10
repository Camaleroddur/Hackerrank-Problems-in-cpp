#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
#include <cstdlib>
using namespace std;

int main(){
	int x;
	cin>>x;
	long int mat[x][x];
	for(int i = 0; i < x;i++){
		for(int j = 0;j < x; j++){
			cin>>mat[i][j];
		}
	}
	int num1 = 0,num2 = 0,num3 = x-1, sum1 = 0, sum2= 0;
	while (num1 <= x && num2 <= x && num3 >= 0){
		sum1 += mat[num1][num2];
		sum2 += mat[num3][num2];
		num1++;
		num2++;
		num3--;
	}
	cout<<abs(sum1-sum2);
	return 0;
}
