#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t,n,x,sumaImp=0,sumaPar=0;
    bool band = true; // inicia en impares
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin>> n;
        int casa[n];
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            casa[j]=x;
        }
        for (int j = 0; j < n; j++)
        {
            if(casa[j] != 0){
                if(band){
                    sumaImp +=casa[j];
                    band = false;
                }else{
                    sumaPar += casa[j];
                    band = true;
                }
            }
        }


        //if(sumaImp >= sumaPar ) cout << sumaImp<<'\n';
        //else cout << sumaPar<<'\n';
        cout << sumaImp <<'\n';
        cout << sumaPar;
        sumaImp=0;
        sumaPar=0;
        band = true;
        
    }
    
    return 0;
}