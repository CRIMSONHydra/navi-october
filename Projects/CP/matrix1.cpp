#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double  long double
#define endl    '\n' 
#define all(x)  x.begin(), x.end()
using pii = pair<int, int>;
#define ff      first
#define ss      second
#define v       vector
#define vi      vector<int>

const bool multipleTestCases = 0;

void sqtranspose(v<vi> &a, int &n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(a[i][j],a[j][i]);
        }
    }

}

void sqreverserows(v<vi> &a, int &n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            swap(a[i][j],a[i][n-1-j]);
        }
    }
}

void sqrotate(v<vi> &a, int &n){
    sqtranspose(a,n);
    sqreverserows(a,n);    
}

void twodvin(v<vi> &a, int &r, int &c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
}

void twodvout(v<vi> &a, int &r, int &c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

v<vi> multiply(v<vi> &m1, v<vi>&m2, int r1, int c1, int r2, int c2){
    v<vi> p(r1, vi(c2));
    
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<r2; k++){
                p[i][j] += m1[i][k]* m2[k][j];
            }
        }
    }
    
    return p;
}


void solve()
{
    int r1,c1,r2,c2; cin>>r1>>c1>>r2>>c2;
    v<vi> m1(r1,vi(c1));
    v<vi> m2(r2,vi(c2));

    twodvin(m1,r1, c1);
    twodvin(m2,r2, c2);

    v<vi> res = multiply(m1,m2,r1,c1,r2,c2);

    twodvout(res, r1, c2);
}


signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t=1;
    multipleTestCases and cin >> t;
    while(t--){
        solve();
    }
}