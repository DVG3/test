#include <bits/stdc++.h>
#include <iostream>
#pragma GCC optimize("O2")
using namespace std;



#define $d(x) cout << #x <<": " << x <<"\n";
#define _$(x) cout << x <<"\n";
#define $f(x,y) freopen(x,"r",stdin); freopen(y,"w",stdout);


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(s,e) for (int i = s; i < e;i++)
#define FORP(e,s) for (int i = e; i > s;i--)

#define MOD 1000000007
#define oo 9999999999999999
#define oo 9999999999999999
#define OO 1061109567
#define MSET 0x3F

#define ll long long
#define pr pair
#define vt vector
#define fir first
#define sec second

#define GetBit(x, i) (((x) >> (i))& 1)
#define OffBit(x, i) ((x) & ~(1 << (i)))
#define ChgBit(x, i) ((x) ^ (1 << (i)))
#define Mask(x) (1 << (x))
#define DEB_MODE 0
#if DEB_MODE
#define DebugA(a,e) for (int i = 0; i < e;i++) cout << a[i] <<" ";
#define DebugM(a,e1,e2) for (int i = 0; i < e1;i++){ for (int j = 0; j < e2;j++) cout << a[i][j] <<" "; cout << "\n";} cout <<"\n";
#else
#define DebugA(a,e)
#define DebugM(a,e1,e2)
#endif



template<typename T>
bool smin(T & x, const T & y) { T tmp = x ; return tmp == (x = std::min(x, y)); }
template<typename T>
bool smax(T& x, const T& y) { T tmp = x;  return tmp == (x = std::max(x, y)); }


int k;
int main(){
    $f("MSSV.INP","MSSV.OUT");
    cin >> k;
    cout << lookuptable[k];
}