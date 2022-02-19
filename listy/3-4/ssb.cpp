#include<iostream>
int main(){
    int m, n;
    std::cin >> m >> n;
    int a = 0, b = 1, c = 1, d = 0, e, f;
    for( ; ; ){
        e = a + c;
        f = b + d;
        if( e == m && f == n ) break;
        if( m*f < e*n ){
            std::cout << "L";
            c = e;
            d = f;
        }else{
            std::cout << "P";
            a = e;
            b = f;
        }
    }
    return 0;
}
