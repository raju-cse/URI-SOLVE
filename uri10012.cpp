#include<bits/stdc++.h>
using namespace std;

int main()
{ double a,b,c;
	cin>>a>>b>>c;
	double pi =3.14159;
	double result_a,result_b,restult_c,result_d,result_e;
    
    result_a = 0.5*a*c ;
    result_b = (pi*c*c);
    restult_c = 0.5*(a+b)*c;
    result_d = b*b;
    result_e = a*b;
    printf("TRIANGULO: %.3lf\n",result_a);
    printf("CIRCULO: %.3lf\n",result_b);
    printf("TRAPEZIO: %.3lf\n",restult_c);
    printf("QUADRADO: %.3lf\n",result_d);
    printf("RETANGULO: %.3lf\n",result_e);



	return 0;
}