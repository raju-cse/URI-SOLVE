#include<bits/stdc++.h>
using namespace std;

int main()
{
	double x1,y1;
	cin>>x1>>y1;
	double x2,y2;
	cin>>x2>>y2;
 double result ;
 result = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

 printf("%.4lf\n",result);


	return 0;
}