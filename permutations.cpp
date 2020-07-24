#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){

    ull n,prev;

    cin>>n;

    vector<ull> vec;

    if(n==1){
        cout<<1;
        return 0;
    }

    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }

    for(ull i=1;i<=n;i++){
        if(i%2==0)
            cout<<i<<" ";
        else
            vec.push_back(i);
    }

    for(ull i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
