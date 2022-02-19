//SZAW
#include<iostream>
int main()
{
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if( x1 == x2 ^ y1 == y2 ) std::cout << "TAK";
    // x1 == x2 ^ y1 == y2 zwróci prawdę tylko, gdy jedna wartość jest prawdziwa i jedna fałszywa (^ - XOR)
    else                      std::cout << "NIE";
    return 0;
}
