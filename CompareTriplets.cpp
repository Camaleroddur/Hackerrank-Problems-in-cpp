#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int list1[3],list2[3];
	int suma = 0, sumb = 0;
	for (int i = 0; i < 3; i++){
		cin>>list1[i];
	}
	for (int i = 0; i < 3; i++){
		cin>>list2[i];
	}
	for (int i = 0; i < 3; i++){
		if (list1[i] > list2[i]){
			suma ++;
		}
		else if (list2[i] > list1[i]){
			sumb ++;
		}
	}
	cout<<suma<<" "<<sumb;
	return 0;
}
