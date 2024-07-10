#include<stdio.h>
int main(){
	int t,n1,j,i;
	scanf("%d",&t);
	for(j=0;j<t;j++){
		int n2=0,n3=0;
		scanf("%d%d%d",&n1,&n2,&n3);
		if(n1<n2 && n1>n3 ||n1>n2 && n1<n3){
		    printf("%d\n",n1);	
		}
		else if(n2<n1 && n2>n3 ||n2>n1 && n2<n3){
		    printf("%d\n",n2);	
		}
		else{
			 printf("%d\n",n3);
		}
	}
	return 0;
}
