#include<iostream>
#include<vector>
int main()
{
    std::vector<int> v;
    int a = 1;
    long long s = 0, ms = 0;
    for( ; a != 0; ){
        std::cin >> a;
        v.push_back(a);
    }
    for( auto it : v ){
        s += it;
        ms = s > ms ? s : ms;
        s = s < 0 ? 0 : s;
    }
    std::cout << ms << "\n";
    return 0;
}
