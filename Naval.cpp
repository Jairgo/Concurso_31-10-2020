#include<stdio.h>
int main(){
int c=0,n=0,D=0,L=0,R=0,C=0,x=0,a=1,b=1;
int A[11][11];
scanf("%d",&n);
while(a<=10){
b=1;
while(b<=10){
A[a][b]=0;
b++;
}
a++;
}
a=b=1;
while(c<n){
scanf("%d %d %d %d",&D,&L,&R,&C);
if(D==0){
if(C+L-1>10){
x=1;
}
while(L>0){
if(A[R][C+L-1]==0){
A[R][C+L-1]=1;
}
else{
x=1;
}
L--;
}
}
else{
if(R+L-1>10){
x=1;
}
while(L>0){
if(A[R+L-1][C]==0){
A[R+L-1][C]=1;
}
else{
x=1;
}
L--;
}
}
c++;
}
if(x==0){
printf("Y\n");
}
else{
printf("N\n");
}
return 0;
}
