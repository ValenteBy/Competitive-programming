#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    string str; cin >> str;
    int k; cin >> k;
    vector<vector<char>> show(k);
    int i = 0;
    while(i < k){
        int cont = i;
        while(cont < str.size()){
            show[i].pb(str[cont]);
            cont += k;
        }
        i++;
    }
    
    int maior = 0;
    for(int j = 0; j < k; j++){
        sort(show[j].begin(), show[j].end());
        int t = show[j].size();
        maior = max(t, maior);
    }

    for(int t = 0; t < maior; t++){
        int ate = 0;
        while(ate < k){
            if(t < show[ate].size()){
                cout << show[ate][t];
            }
            ate++;
        }
    }

    //cout << show.size();
    return 0;
}
/*
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    string str; cin >> str;
    int k; cin >> k;
    vector<vector<char>> vetor(2);

    int cont = 0;
    vetor[0].pb(str[0]);
    cont++;
    for(int i = 1; i < str.size(); i++){
        if(cont == k){
            vetor[0].pb(str[i]);
            cont = 0;
        }else{
            vetor[1].pb(str[i]);
        }
        cont++;
    }
    sort(vetor[0].begin(), vetor[0].end());
    sort(vetor[1].begin(), vetor[1].end());

    int menorVetor = min(vetor[0].size(), vetor[1].size());

    int qualmenorvetor = 0;
    if(vetor[0].size() < vetor[1].size()){
        qualmenorvetor = 0;
    }else
        qualmenorvetor = 1;
    //string ans = "";

    int aonde = 0; cont = 0; int eita = k; int contA = 0; int contB = 0;
    while(cont < str.size()){
        if(k - eita == 0){
            cout << vetor[0][contA];
            eita = 1;
            contA++;
        }
        else if(contB < vetor[1].size()){
            cout << vetor[1][contB];
            contB++;
            eita++;
        }
        cont++;
    }
    cout << endl;

    return 0;
}
*/