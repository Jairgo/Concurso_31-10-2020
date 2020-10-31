#include<stdio.h>
int A[1000];
int main(){
	int a=0,b=0,c=0,x=0,y=0,m=0,d=0;
	scanf("%d",&a);
	while(a>0){
		scanf("%d",&b);
		c=0;
		while(c<b){
			scanf("%d",&A[c]);
			c++;
		}
		c=d=m=0;
		
		while(c<b){
			if(d==0){
				x=x+A[c];
				d=1;
			}
			else{
				y=y+A[c];
				d=0;
			}
			c++;
		}
		if(x>y){
			m=x;
		}
		else{
			m=y;
		}
		c=d=x=y=0;
		while(c<b){
			if(d==0){
				x=x+A[c];
				if(A[c]!=0){
					d=1;
				}
			}
			else{
				y=y+A[c];
				if(A[c]!=0){
					d=0;
				}
			}
			c++;
		}
		if(x>y){
			m=x;
		}
		else{
			m=y;
		}
		printf("%d\n",m);
		a--;
	}
return 0;
}
