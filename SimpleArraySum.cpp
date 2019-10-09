#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x;
	cin>>x;
	int foo[x], sum = 0;
	for (int i = 0; i < x; i++){
		cin>>foo[i];
	}
	for (int i = 0; i < x; i++ ){
		sum = sum + foo[i];
	}
	cout << sum;
	return 0;
}
