#ifndef _SOMO_H
#define _SOMO_H
//  somo.h
//  作者:Billy2007
//  邮件:1920365539@qq.com
//  Bug:在number中的/=与%=都不能用。
//#pragma GCC optimize(2)
//#pragma GCC optimize(3)
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("inline")
//#pragma GCC optimize("-fgcse")
//#pragma GCC optimize("-fgcse-lm")
//#pragma GCC optimize("-fipa-sra")
//#pragma GCC optimize("-ftree-pre")
//#pragma GCC optimize("-ftree-vrp")
//#pragma GCC optimize("-fpeephole2")
//#pragma GCC optimize("-ffast-math")
//#pragma GCC optimize("-fsched-spec")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize("-falign-jumps")
//#pragma GCC optimize("-falign-loops")
//#pragma GCC optimize("-falign-labels")
//#pragma GCC optimize("-fdevirtualize")
//#pragma GCC optimize("-fcaller-saves")
//#pragma GCC optimize("-fcrossjumping")
//#pragma GCC optimize("-fthread-jumps")
//#pragma GCC optimize("-funroll-loops")
//#pragma GCC optimize("-freorder-blocks")
//#pragma GCC optimize("-fschedule-insns")
//#pragma GCC optimize("inline-functions")
//#pragma GCC optimize("-ftree-tail-merge")
//#pragma GCC optimize("-fschedule-insns2")
//#pragma GCC optimize("-fstrict-aliasing")
//#pragma GCC optimize("-falign-functions")
//#pragma GCC optimize("-fcse-follow-jumps")
//#pragma GCC optimize("-fsched-interblock")
//#pragma GCC optimize("-fpartial-inlining")
//#pragma GCC optimize("no-stack-protector")
//#pragma GCC optimize("-freorder-functions")
//#pragma GCC optimize("-findirect-inlining")
//#pragma GCC optimize("-fhoist-adjacent-loads")
//#pragma GCC optimize("-frerun-cse-after-loop")
//#pragma GCC optimize("inline-small-functions")
//#pragma GCC optimize("-finline-small-functions")
//#pragma GCC optimize("-ftree-switch-conversion")
//#pragma GCC optimize("-foptimize-sibling-calls")
//#pragma GCC optimize("-fexpensive-optimizations")
//#pragma GCC optimize("inline-functions-called-once")
//#pragma GCC optimize("-fdelete-null-pointer-checks") 
#include <bits/defined_some_vanirables.rc>
//#include <bits/stl_iterator_base_funcs.h> 
#include <bits/stl_iterator_base_types.h>
//#include <bits/stl_uninitialized.h>
//#include <bits/functional_hash.h>
#include <profile/forward_list>
#include <_mingw_print_push.h>
#include <condition_variable>
#include <initializer_list>
#include <scoped_allocator>
#include <unordered_map>
#include <unordered_set>
#include <forward_list>
#include <system_error>
#include <type_traits>
#include <functional>
#include <inttypes.h>
#include <synchapi.h>    
#include <algorithm> 
#include <stdexcept>
#include <streambuf>
#include <exception>
#include <typeindex>
#include <windows.h>
#include <complex.h>
#include <stdbool.h>
#include <iomanip>
#include <ios>       
#include <iosfwd>     
#include <iostream>
#include <istream>     
#include <ostream>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <ratio> 
#include <cstdio>
#include <climits>
#include <clocale>
#include <mutex>
#include <random>
#include <regex>
#include <csetjmp>
#include <csignal>  
#include <ctype.h>          
#include <float.h>  
#include <regex>
#include <thread>
#include <tuple>       
#include <limits.h>    
#include <locale.h>    
#include <math.h>            
#include <string.h> 
#include <ciso646>
#include <climits>
#include <clocale>
#include <csetjmp>
#include <csignal>      
#include <wchar.h>     
#include <wctype.h>
#include <chrono>
#include <future>
#include <mutex>        
#include <bitset>     
#include <gl/gl.h>
#include <clocale>
#include <cmath>
#include <complex>     
#include <ctime>
#include <deque>         
#include <limits>
#include <list>      
#include <map>            
#include <queue> 
#include <fenv.h>     
#include <set>           
#include <stack>       
#include <string>     
#include <utility>     
#include <cwchar>
#include <cwctype>   
#include <vector>        
#include <stdlib.h> 
#include <stdint.h>
#include <cerrno>
#include <cstdarg>
#include <tgmath.h>
#include <cstddef>
#include <assert.h> 
#include <istream>
#include <ostream>
#define fs(i,x,y,z) for(ll i=x;i<=y;i+=z)
#define ft(i,x,y,z) for(ll i=x;i>=y;i+=z)
#define ll long long
#define ull unsigned long long
#define db double
#define ms(a,b) memset(a,b,sizeof(a))
#define sz(a) sizeof(a)
const int rw[]={-1,0,1,0,-1,1,-1,1},cl[]={0,1,0,-1,-1,1,1,-1};
const ull N=1001,inf=0x3f3f3f3f,daynum[]={114514,31,28,31,30,31,30,31,31,30,31,30,31};
const db E=2.718281828459,pi=acos(-1.0),eps=0.0000000001; 
using namespace std;
struct number{
	int len,num[N];
	number & operator = (const char*);
	number & operator = (int);
	number();
	number(int);
	bool operator > (const number &) const;
	bool operator < (const number &) const;
	bool operator >= (const number &) const;
	bool operator <= (const number &) const;
	bool operator != (const number &) const;
	bool operator == (const number &) const;
	number operator + (const number &) const;
	number operator - (const number &) const;
	number operator * (const number &) const;
	number operator / (const number &) const;
	number operator % (const number &) const;
	number operator += (const number &);
	number operator -= (const number &);
	number operator *= (const number &);
	number operator /= ( number &);
	number operator %= ( number &);
	number operator ++ ();
	number operator -- ();
};
void deletezero(number &p){
	while(p.num[p.len]==0&&p.len>1) p.len--;
}
number & number::operator = (const char* c){
	ms(num,0);
	int n=strlen(c),j=1,k=1;
	fs(i,1,n,1){
		if(k>=10000){
			j++;
			k=1;
		} 
		num[j]+=k*(c[n-i]-'0');
		k*=10;
	}
	len=j;
	deletezero(*this);
	return *this;
}
number & number::operator = (int p){
	char s[N];
	sprintf(s,"%d",p);
	return *this=s;
}
number::number(){
	ms(num,0);
	len=1;
}
number::number(int p){
	*this=p;
}
bool number::operator > (const number &b) const{
	if(len!=b.len) return len>b.len;
	ft(i,len,1,-1){
		if(num[i]!=b.num[i]) return num[i]>b.num[i];
	}
	return 0;
}
bool number::operator < (const number &b) const{
	return b>*this;
}
bool number::operator <= (const number &b) const{
	return !(*this>b);
}
bool number::operator >= (const number &b) const{
	return !(b>*this);
}
bool number::operator != (const number &b) const{
	return (b>*this)||(*this>b);
}
bool number::operator == (const number &b) const{
	return !(*this>b)&&!(b>*this);
}
ostream & operator << (ostream &o,number p){
	o<<p.num[p.len];
	ft(i,p.len-1,1,-1){
		o.width(4);
		o.fill('0');
		o<<p.num[i];
	}
	return o;
}
istream & operator >> (istream &x,number &p){
	char s[N];
	x>>s;
	p=s;
	return x;
}
number number::operator + (const number &b) const{
	number c;
	c.len=max(len,b.len);
	fs(i,1,c.len,1){
		c.num[i]+=num[i]+b.num[i];
		if(c.num[i]>=10000){
			c.num[i]-=10000;
			c.num[i+1]++;
		}
	}
	if(c.num[c.len+1]>0) c.len++;
	deletezero(c);
	return c;
}
number number::operator - (const number &b) const{
	number c;
	c.len=len;
	fs(i,1,c.len,1){
		c.num[i]+=num[i]-b.num[i];
		if(c.num[i]<0){
			c.num[i]+=10000;
			c.num[i+1]--;
		}
	}
	deletezero(c);
	return c;
}
number number::operator += (const number &b) {
	return *this=*this+b;
}
number number::operator -= (const number &b) {
	return *this=*this-b;
}
number number::operator ++ () {
	return *this=*this+1;
}
number number::operator -- () {
	return *this=*this-1;
}
number number::operator * (const number &b) const{
	number c;
	c.len=len+b.len+1;
	fs(i,1,len,1){
		fs(j,1,b.len,1){
			c.num[i+j-1]+=num[i]*b.num[j];
			c.num[i+j]+=c.num[i+j-1]/10000;
			c.num[i+j-1]%=10000;
		}
		
	}
	deletezero(c);
	return c;
}
number number::operator *= (const number &b) {
	return *this=(*this)*b;
}
number number::operator / (const number &b) const{
	number c,d;
	c.len=len+b.len+1;d.len=0;
	ft(i,len,1,-1){
		memmove(d.num+2,d.num+1,sz(d.num)-sz(int)*2);
		d.len++;
		d.num[1]=num[1];
//		int l=0,r=9999,m;
//		while(l<r){
//			m=(l+r)/2;
//			if((b*number(m))<=d) l=m+1;
//			else r=m;
//		}
		while(d>=b){
			d-=b;
			c.num[i]++;
		}
	}
	deletezero(c);
	return c;
}
number number::operator /= ( number &b) {
	return *this=(*this)/b;
}
number number::operator % (const number &b) const{
	if(*this<b) return *this;
	number c,d;
	c.len=len+b.len+1;d.len=0;
	ft(i,len,1,-1){
		memmove(d.num+2,d.num+1,sz(d.num)-sz(int)*2);
		d.len++;
		d.num[1]=num[1];
		//int l=0,r=9999,m;
//		while(l<r){
//			m=(l+r)/2;
//			if((b*number(m))<=d) l=m+1;
//			else r=m;
//		}
		while(d>=b){
			d-=b;
			c.num[i]++;
		}
	}
	deletezero(c);
	return d;
}
number number::operator %= ( number &b) {
	return *this=(*this)%b;
}
inline bool xr(bool x,bool y){
	return x==y?0:1;
}
inline int read(){
	int date=0,w=1;char c=0;
	while(c<'0'||c>'9'){if(c=='-')w=-1;c=getchar();}
	while(c>='0'&&c<='9'){date=date*10+c-'0';c=getchar();}
	return date*w;
}
ull ksm(ull a,ull b){
    ull ans = 1,base=a;
    while(b){
        if(b&1){
            ans*=base;
	    }
	    base*=base;
	    b>>=1;
	}
    return ans;
}
ll gcd(ll a,ll b){
    if(b) return gcd(b,a%b);
    return a;
}
bool prm(int k){
    if(k<2) return 0;
    if(k==2||k==3) return 1;
    if(k%6!=1&&k%6!=5) return 0;
    for(int i=5;i<=sqrt(k);i+=6)
        if(k%i==0||k%(i+2)==0) return 0;
    return 1;
}
ull js(ull f){
	ull p=1;
	fs(i,1,f,1) p*=i;
	return p;
}
ull ak(ull dwn,ull up){
	return js(dwn)/js(dwn-up);
}
ull ck(ull nn,ull mm){
	return ak(nn,mm)/ak(mm,mm);
}
int exgcd(int a,int b,int &x,int &y){
    if(b==0){
        x=1,y=0;
        return a;
    }
    int res=exgcd(b,a%b,x,y),tp=x;
    x=y;
    y=tp-a/b*y; 
    return res; 
}
#endif     /*somo.h*/
