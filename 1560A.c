#include<stdio.h>
int main(){
	int n,t,j;
	
	scanf("%d",&t);
	for(j=0;j<t;j++){
		int i=0,count=0;
		scanf("%d",&n);
		while(count<n){
		i++;
		if(i%3!=0 && i%10!=3){
			count++;
		}
	}
	printf("%d\n",i);
	}	
}
