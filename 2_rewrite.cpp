/*
题目链接：http://118.190.20.162/view.page?gpid=T67
日期：2018.3.34 
*/
/*
这道题其实不难，原来用数组的方法做只有90分，另外10分因为时间复杂度被扣了，这道题主要还是在于学习队列queue，先进先出
front()返回的是队列的第一个元素，而pop()和push()则是弹出和压入元素 
*/ 
#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> list;
	int n,k;
	int num=1;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		list.push(i);
	while(list.size()!=1){
		int a=list.front();
		list.pop();
		if(num%10!=k&&num%k!=0)	list.push(a);
		num++;
	}
	cout<<list.front();
	return 0;
}
