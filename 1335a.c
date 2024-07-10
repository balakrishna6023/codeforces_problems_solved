#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,i,n;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&n);
		if(n%2==0){
			printf("\n%d",abs(n/2-1));
		}
		else{
			printf("\n%d",abs(n/2));
		}
	}
}
