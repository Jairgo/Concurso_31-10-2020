#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    int x=0,suma=0,a=0;
    int holes[25];
    string var;

    for(int i=0;i<18;i++){
        cin >> x;
        holes[i] = x;
    }
    cout << "fin";
    for (int i = 0; i <18; i++){
        cin >> var;
        if(var =="hole in one"){
            suma+=1;
        }else if(var == "condor"){
            suma+=(holes[i]-4);
        }else if(var=="albatross"){
            suma+=(holes[i]-3);
        }else if(var=="eagle"){
            suma+=(holes[i]-2);
        }else if(var=="birdie"){
            suma+=(holes[i]-1);
        }else if(var=="par"){
            suma+=holes[i];
        }else if(var=="bogey"){
            suma+=(holes[i]+1);
        }else if(var=="double bogey"){
            suma+=(holes[i]+2);
        }else if(var=="triple bogey"){
            cout<<i<<" <i";
            a=holes[i]+3;
            suma= suma + a;
        }
        //cout << holes[i]<<" ";
        cout << suma;
    }   
    cout << suma;

    return 0;
}