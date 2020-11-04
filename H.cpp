<<<<<<< HEAD
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t,n,x,sumaImp=0,sumaPar=0;
    bool band = true; // inicia en impares
    
    cin >> t;
    if(1<=t && t<=50){
        for (int i = 0; i < t; i++){
            cin>> n;
            if(1<=n && n <=50){
                int casa[n];
                int j = 0; 
                while (j < n){
                    if(0<=x && x<=100){
                        cin >> x;
                        casa[j]=x;
                        j++;
                    }
                }
                for (int j = 0; j < n; j++){
                    if(casa[j] != 0){
                        sumaImp+=casa[j];
                        j++;
                    }
                }

                for (int j = 1; j < n; j++){
                    if(casa[j] != 0){
                        sumaPar+=casa[j];
                        j++;
                    }
                }

                if(sumaImp >= sumaPar ) cout << sumaImp<<'\n';
                else cout << sumaPar<<'\n';
                //cout << sumaImp <<'\n';
                //cout << sumaPar;
                sumaImp=0;
                sumaPar=0;
                band = true;
                
                }
            }
    }
    return 0;
}
=======
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
>>>>>>> d36e0762e61f92f148e778846c8b37c632b0c0c7
