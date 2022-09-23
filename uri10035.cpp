#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);

 if((b > c) && (d > a) && (c + d > a + b) && c > 0 && d > 0 && (a %2 == 0))
        printf("Valores aceitosn\n");
 else
        printf("Valores nao aceitosn\n");


	return 0;
}