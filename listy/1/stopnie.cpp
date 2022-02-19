//STO
#include<iostream>
#include<iomanip>
int main(){
    double f;
    std::cin >> f;
    f = 5.0 / 9.0 * ( f - 32.0 );
    std::cout << std::setprecision(2) << std::fixed << f << "\n";
    return 0;
}
