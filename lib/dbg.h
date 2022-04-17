#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(unsigned char x) { cerr << '\'' << x << '\''; }
void __print(const char* x) { cerr << '\"' << x << '\"'; }
void __print(const unsigned char* x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <size_t S>
void __print(bitset<S> t){ for(size_t i = 0; i < S; i++) cerr << t[i]; }
template <typename T, typename V>
void __print(const pair<T, V> &x) { cerr << '('; __print(x.first); cerr << ", "; __print(x.second); cerr << ")"; }
template <typename T>
void __print(const T &x) { int f = 0; cerr << '{'; for(auto &i : x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if(sizeof... (v)) cerr << ", "; _print(v...); }
