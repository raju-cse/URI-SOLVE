#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, pr1;    
    
    scanf("%lf", &a);
    
    scanf("%lf", &b);
    
    scanf("%lf", &c);
    
    pr1 = (b*b) - (4*(a)*(c));
        
    if(pr1 > 0 && a != 0) {
        double x, y;
        pr1 = sqrt(pr1);
        x = (-b + pr1)/(2*a);
        y = (-b - pr1)/(2*a);
        printf("R1 = %.5lf\n", x);
        printf("R1 = %.5lf\n", y);
    } 
    else
     {
        printf("Impossivel calcular\n");
    }
    
    return 0;
}