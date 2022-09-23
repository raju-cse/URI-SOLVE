#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int m100,m50,m20,m10,m5,m2;
	int c1,c50,c25,c10,c05,c01;
	

	double n;

    scanf("%lf", &n);
    int notes = n;
    int moeda = (n - notes) * 100;


	m100=notes/100;
	notes=notes%100;
	m50=notes/50;
	notes=notes%50;
	m20=notes/20;
	notes=notes%20;
	m10=notes/10;
	notes=notes%10;
	m5=notes/5;
	notes=notes%5;
	m2=notes/2;
	notes=notes%2;

	c1=moeda/1;
	moeda=moeda%1;
	c50=moeda/50;
	moeda=moeda%50;
	c25=moeda/25;
	moeda=moeda%25;
	c10=moeda/10;
	moeda=moeda%10;
	c05=moeda/5;
	moeda=moeda%5;
	c01=moeda/1;
	moeda=moeda%1;

	printf("NOTAS:\n");


	printf("%d nota(s) de R$ 100.00\n", m100);
    printf("%d nota(s) de R$ 50.00\n", m50);
    printf("%d nota(s) de R$ 20.00\n", m20);
    printf("%d nota(s) de R$ 10.00\n", m10);
    printf("%d nota(s) de R$ 5.00\n", m5);
    printf("%d nota(s) de R$ 2.00\n", m2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c05);
    printf("%d moeda(s) de R$ 0.01\n", c01);





	return 0;
}