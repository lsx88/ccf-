/*
��Ŀ���ӣ�http://118.190.20.162/view.page?gpid=T67
���ڣ�2018.3.34 
*/
/*
�������ʵ���ѣ�ԭ��������ķ�����ֻ��90�֣�����10����Ϊʱ�临�Ӷȱ����ˣ��������Ҫ��������ѧϰ����queue���Ƚ��ȳ�
front()���ص��Ƕ��еĵ�һ��Ԫ�أ���pop()��push()���ǵ�����ѹ��Ԫ�� 
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
