#include<stdio.h>
int main(){
	int t,n,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n==2 || n%4!=0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
			int evencount=2,a[n],esum=0,oddcount=1,osum=0;
			for(j=0;j<n/2;j++){
				a[j]=evencount;
				evencount+=2;
				esum+=a[j];
			}
			for(j=n/2;j<n-1;j++){
				a[j]=oddcount;
				oddcount+=2;
				osum+=a[j];
			}
			a[n-1]=esum-osum;
			for(j=0;j<n;j++){
				printf("%d ",a[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
