/*
��Ŀ���ӣ�http://118.190.20.162/view.page?gpid=T67
���ڣ�2018.3.34 
*/
/*
�������ʵ���ѣ�������ķ�����ֻ��90�֣�����10����Ϊʱ�临�Ӷȱ����ˣ��������Ҫ��������ѧϰ����queue���Ƚ��ȳ�
front()���ص��Ƕ��еĵ�һ��Ԫ�أ���pop()��push()���ǵ�����ѹ��Ԫ�� 
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
	
