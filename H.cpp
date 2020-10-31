#include <iostream>
//#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t,n,x,sumaImp=0,sumaPar=0;
    bool band = true; // inicia en impares
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin>> n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if(band){
                sumaImp+=x;
                band = false;
            }else{
                sumaPar+=x;
                band = true;
            }
        }

        if(sumaImp > sumaPar ) cout << sumaImp<<'\n';
        else cout << sumaPar<<'\n';

        sumaImp=0;
        sumaPar=0;
        band = true;
        
    }
    
    return 0;
}