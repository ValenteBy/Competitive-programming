#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
//#define DEBUG(x) std::cout << x << endl;
#define DEBUG std::cout << "DEBUG" << std::endl;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    int n; cin >> n;
    llv binarios(n);

    for(int i = 0; i < n; i++){
        cin >> binarios[i];
    }

    int total = 0; int impar = 0; int totalZeros = 0; int totalDaUltimaVezZeroDeImpares = 0; int totalImpares = 0;
    for(int i = 0; i < n; i++){
        
        if(binarios[i] == 1){
            impar ^= 1;
            total += totalZeros + 1;
            if(impar){
                total += totalImpares + totalDaUltimaVezZeroDeImpares;
                totalImpares++;
                totalDaUltimaVezZeroDeImpares = totalZeros;
            }
        totalZeros = 0;
        continue;
        }else if(total != 0){
            total++;
            if(impar == 0){
                //total+=totalDaUltimaVezZeroDeImpares + totalImpares;
            }
        }
        totalZeros++;
    }
    cout << total << endl;
    return 0;
}