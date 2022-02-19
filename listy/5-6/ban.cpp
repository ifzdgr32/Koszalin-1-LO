#include<iostream>
int main()
{
    int N, *t, s = 0, prev, next;
    std::cin >> N;
    t = new int[N];
    for( int i = 0; i < N; i++ ) std::cin >> t[i];
    for( int i = 0; i < N; i++ ){
        if( t[i] != -1 ){
            s++;
            prev = i + 1;
            next = t[i];
            for( ; next != -1; ){
                t[prev - 1] = -1;
                prev = next;
                next = t[next - 1];
            }
        }
    }
    std::cout << s << "\n";
    return 0;
}
