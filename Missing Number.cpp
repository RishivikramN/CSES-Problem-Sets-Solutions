#include <bits/stdc++.h>

using namespace std;

/*bool linearsearch(vector<long> v,long element){
    for(int i=0;i<v.size();i++){
        if(v[i]==element)
            return true;
    }
    return false;
}*/

int main(){
    long n;
    vector<long> v;
    cin>>n;

    for(int i=0;i<n-1;i++){
        long temp;
        cin>>temp;
        v.push_back(temp);
    }
    if(v.size()==1){
        if(v[0]!=n)
            cout<<n;
        else
            cout<<1;
        return 0;
    }
    else
        sort(v.begin(),v.end());

    if(!(binary_search(v.begin(),v.end(),n))){
            cout<<n;
        return 0;
    }


    for(int i=0;i<n-1;i++){
        if(n-v[i]==0)
            continue;
        if(!binary_search(v.begin(),v.end(),(n-v[i])))
            cout<<n-v[i]<<" ";
    }

    return 0;
}
