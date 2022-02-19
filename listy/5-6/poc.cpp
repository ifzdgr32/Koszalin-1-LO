#include<iostream>
int main(){
    std::cin.tie(0);
	std::ios_base::sync_with_stdio(0);
    int n, k, b, e;
    long long *w;
    std::cin >> n;
    w = new long long[n+1];
    w[0] = 0;
    for( int i = 1; i <= n; i++ ){
        std::cin >> w[i];
        w[i] += w[i-1];
    }
    std::cin >> k;
    for( int i = 0; i < k; i++ ){
        std::cin >> b >> e;
        std::cout << w[e] - w[b-1] << "\n";
    }
    return 0;
}
