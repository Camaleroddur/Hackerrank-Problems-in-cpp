#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x;
	cin>>x;
	long long int num = 0,sum = 0;
	for (int i = 0; i < x; i++){
		cin>>num;
		sum += num;
	}
	cout<<sum;
	return 0;
}
