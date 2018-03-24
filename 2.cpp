/*
题目链接：http://118.190.20.162/view.page?gpid=T67
日期：2018.3.34 
*/
/*
这道题其实不难，用数组的方法做只有90分，另外10分因为时间复杂度被扣了，这道题主要还是在于学习队列queue，先进先出
front()返回的是队列的第一个元素，而pop()和push()则是弹出和压入元素 
*/ 
#include<iost
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int r;
	int a[n]={0};
	int count=0,c=n;
	for(int i=1;i<=n;i++)
		if (i%10!=k&&i%k!=0){
			a[i]=i;
		}
	int j=1;
	int i=n;
	while(count!=1){
		count=0;
		for(int j=1;j<=n;j++ )
			if(a[j]%10!=k&&a[j]%k!=0){
				i+=1;
				a[j]=i;
				count++;
				r=j;
			}
			else{
				a[j]=0;
			}
	
	}
	
		cout<<r;
	return 0;
	}
	
