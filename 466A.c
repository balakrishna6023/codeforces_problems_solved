#include<stdio.h>
int main(){
	int n,m,a,b,i,cost_of_m;
	scanf("%d %d %d %d",&n,&m,&a,&b);
	int c1=a*n;
	int c2=n/m*b;
	if(n%m==0){
		printf("%d\n",c1<c2?c1:c2);
	}
	else if(n%m!=0){
		int extra=n%m;
		int total=extra*a+((n-extra)/m)*b;
		int t=(n/m)+1;
		t=t*b;
		printf("%d",(c1 < total) ? ((c1 < t) ? c1: total) :((total < t) ? total : t));
	}
}
