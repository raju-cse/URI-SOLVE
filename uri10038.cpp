#include<bits/stdc++.h>
using namespace std;

int main()
{
	int code,prodac;
	cin>>code>>prodac;

	double a,b,c,d,e,result ;
	a = 4.00;
	b = 4.50;
	c = 5.00;
	d = 2.00;
	e = 1.50;

	if(code==3 && prodac==2)
	{
      result = prodac*c;
	}
	if(code==4 && prodac==3)
	{
      result = prodac*d;
	}
	if(code==2 && prodac==3)
	{
      result = prodac*b;
	}

	
	printf("Total: R$ %.2lf\n",result);



	return 0;
}