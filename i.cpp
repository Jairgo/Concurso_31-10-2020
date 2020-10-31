#include<stdio.h>
#include<iostream>
#include <string.h> 
using namespace std; 
int main(){
	int prueba=0;
	char a[1000];
 	int i=0,n=0,cont=0,j=0;
 	int Check[5]={0,0,0,0,0};
 	int longitud=0;
 	scanf("%d",&n);
 	while(n){
 		scanf("%s",&a);
 		longitud = strlen(a);
 		while(a[i]!='\0'){
 		if(a[i]>=65 and a[i]<=90){
 			Check[0]=1;
 			printf("Mayus\n");
		 }
		 if(a[i]>=97 and a[i]<=122){
		 	Check[1]=1;
		 	printf("min\n");
		 }
		 if(a[i]=='.' or a[i]=='#' or a[i]=='$' or a[i]=='%' or a[i]=='/' or a[i]=='(' or a[i]=='&' or a[i]==')'){
		 	Check[2]=1;
		 	printf("Raro\n");
		 }
		 if(longitud>=10){
		 	Check[3]=1;
		 	printf("Longitud\n");
		 }
		 if(a[i]>=48 and a[i]<=57 and a[i]!=a[i+1]+1){
 			Check[4]=1;
 			printf("Num\n");
		 }
		 i++;	
		 }
		 while(Check[j]!='\0'){
		 	if(Check[j]==1){
		 		cont++;
			 }
			 j++;
		 }
		 while(Check[prueba]!='\0'){
		 	printf("%d",Check[prueba]);
		 	prueba++;
		 }
		 if(cont==5){
		 	printf("Assertion number #%d: Strong\n",n);
		 }
		 if(cont==4){
		 	printf("Assertion number #%d: Good\n",n);
		 }
		 if(cont==3){
		 	printf("Assertion number #%d: Weak\n",n);
		 }
		 if(cont<3){
		 	printf("Assertion number #%d: Rejected\n",n);
		 }
		 cont=0;
		 memset(Check,'0',5);
		 j=0;
		 i=0;
		 longitud=0;	
		 n--;	 
	 }
 		 
}
	 
 		
 	
 
