#include<iostream>
int main()
{
    int n, *l, g, np = 0;
    std::cin >> n;
    l = new int [1000001];
    for( int i = 0; i <= 1000000; i++ ) l[i] = 0;
    for( int i = 0; i < n; i++ ){
        std::cin >> g;
        l[g]++;
    }
    for( int i = 0; i <= 1000000; i++ ) if( l[i] % 2 == 1 ) np++;
    if( np > 1 ) std::cout << "NIE";
    else         std::cout << "TAK";
    return 0;
}
