#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
	int n;
	cin>>n;
	int min=999999;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++){
			int b=abs((a[j]-a[i]));
			if(b<min) min=b;
		}
	cout<<min;
		return 0;
} 
