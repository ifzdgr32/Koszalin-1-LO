#include<iostream>
int main(){
    int n, *t, x, k = 0;
    std::cin >> n;
    t = new int[n];
    for( int i = 0; i < n; i++ ) std::cin >> t[i];
    std::cin >> x;
    for( int i = 0; i < n; i++ ) if( t[i] == x ) k++;
    std::cout << k << " ";
    for( int i = 0; i < n; i++ ) if( t[i] == x ) std::cout << i + 1 << " ";
    delete[] t;
    return 0;
}
