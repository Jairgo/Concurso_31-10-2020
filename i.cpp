#include<stdio.h>
#include<iostream>
#include <string.h> 
using namespace std; 
int main(){
	int prueba=0;
	char a[1000];
 	int i=0,n=0,cont=0,j=0,k=1;
 	int Check[5]={0,0,0,0,0};
 	int longitud=0;
 	scanf("%d",&n);
 	while(k<=n){
 		scanf("%s",&a);
 		longitud = strlen(a);
 		while(i<longitud){
			if(a[i]>=65 and a[i]<=90){
				Check[0]=1;
				//printf("Mayus\n");
			}
			if(a[i]>=97 and a[i]<=122){
				Check[1]=1;
				//printf("min\n");
			}
			if(a[i]=='.' or a[i]=='#' or a[i]=='$' or a[i]==37 or a[i]== 47 or a[i]=='(' or a[i]=='&' or a[i]==')'){
				Check[2]=1;
				//printf("Raro\n");
			}
			if(longitud>=10){
				Check[3]=1;
				//printf("Longitud\n");
			}
			if(a[i]>=48 and a[i]<=57){
				if(a[i]!=a[i+1]+1){
					Check[4]=1;
					//printf("Num\n");
				}
					
			}
			k++;	
		 }
		 j=0;
		 while(j<strlen(a)){
		 	if(Check[j]==1){
		 		cont++;
			 }
			 j++;
		 }
		 /*while(prueba<strlen(a)){
		 	printf("%d",Check[prueba]);
		 	prueba++;
		 }*/
		 if(cont==5){
		 	printf("Assertion number #%d: Strong\n",k);
		 }
		 if(cont==4){
		 	printf("Assertion number #%d: Good\n",k);
		 }
		 if(cont==3){
		 	printf("Assertion number #%d: Weak\n",k);
		 }
		 if(cont<3){
		 	printf("Assertion number #%d: Rejected\n",k);
		 }

		 cont=0;
		 memset(Check,'0',5);
		 for (int p = 0; p < 5; p++)
		 {
			printf("%d",Check[p]);
		 }
		 
		 j=0;
		 i=0;
		 longitud=0;	
		 n--;	 
		 prueba=0;
		 j=0;
	 }
 		 
}
	 
 		
 	
 
