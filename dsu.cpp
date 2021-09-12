#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int p[N],r[N];

int find(int u){
    if(p[u]==u) return u;
    return p[u]=find(p[u]);
}
void join(int u,int v){
    int a=find(u),b=find(v);
    if(r[a]>r[b]) swap(a,b);
    r[b]+=r[a];
    p[a]=b;

}
