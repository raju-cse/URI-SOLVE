#include<bits/stdc++.h>
using namespace std;

int main()
{
	char name;
	scanf("%s",&name);
	double salary,exta_sal;
	cin>>salary>>exta_sal;

	double cal,result;

	cal=(exta_sal*15)/100;
	result=salary+cal;
	printf("TOTAL = R$ %.2lf\n",result);




	return 0;
}