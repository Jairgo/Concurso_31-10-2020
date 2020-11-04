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