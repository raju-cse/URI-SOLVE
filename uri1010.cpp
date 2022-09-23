#include<bits/stdc++.h>
using namespace std;

int main()
{
	int code1,unit1,code2,unit2;
	float price1,price2,result;
    scanf("%d%d%f",&code1,&unit1,&price1);
	scanf("%d%d%f",&code2,&unit2,&price2);


	result= (unit1*price1)+(unit2*price2);
	printf("VALOR A PAGAR: R$ %.2f\n",result);


	return 0;
}