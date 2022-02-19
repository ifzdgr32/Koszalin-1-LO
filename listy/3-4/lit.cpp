//ILIT
#include<iostream>
int main()
{
    long long x;
    bool a = true; //wartownik - jeśli tylko znajdziemy literę w liczbie, zmienia wartość na false
    std::cin >> x;
    while( x > 0 && a ){
        if( x % 16 >= 10 ){
            a = false;
        }
        x /= 16;
    }
    if( a )
        std::cout << "NIE\n";
    else
        std::cout << "TAK\n";
    return 0;
}
