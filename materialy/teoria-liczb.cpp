#include<algorithm>

long long nwd(long long a, long long b){
    if( a < b ) std::swap(a,b);
    for( ; b > 0; ){
        a %= b;
        std::swap(a,b);
    }
    return a;
}
//algorytm Euklidesa


long long nww(long long a, long long b){
    return a/nwd(a,b)*b;
}
//najmniejsza wspólna wielokrotność


long long pot(long long a, long long n, long long m){
    if( n == 1 ) return a%m;
    if( n == 0 ) return 1;
    long long tmp = pot(a,n/2,m);
    if( n % 2 == 0 ) return (tmp*tmp)%m;
    return (((tmp*tmp)%m)*a)%m;
}
//szybkie potęgowanie


long long pot2(long long a, long long n, long long m){
    long long ret = 1;
    while(n){
    if(n & 1) ret = ret * a % m;
        a = a * a % m;
        n >>= 1;
    }
    return ret;
}
//to samo ale bez rekurencji


long long odwroc(long long a){
    long long b = 0;
    for( ; a > 0; ){
        b = 10*b + a%10;
        a /= 10;
    }
    return b;
}
//odwrócenie kolejności cyfr w liczbie


bool palindrom(long long a){
    return a == odwroc(a);
}
//sprawdzenie czy liczba jest palindromem


//