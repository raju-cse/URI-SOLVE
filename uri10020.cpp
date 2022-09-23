#include<bits/stdc++.h>
using namespace std;

int main()
{
	int year , mathon,day;
	scanf("%d",&day);
	year=0;
	mathon=0;
	year=day/365;
	day=day%365;
	mathon=day/30;
	day=day%30;
	printf("%d ano(s)\n",year);
	printf("%d mes(es)\n",mathon);
	printf("%d dia(s)\n",day);


	return 0;
}