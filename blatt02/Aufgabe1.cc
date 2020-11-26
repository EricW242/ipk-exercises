#include <iostream>
#include <cmath>


int main(){

    double a;
    double b;
    double c;
    double x1;
    double x2;
    double wurzel;
    double test;

    std::cout << "a = " << std::endl;
    std::cin >> a;

    std::cout << "b = " << std::endl;
    std::cin >> b;

    std::cout << "c = " << std::endl;
    std::cin >> c;

    wurzel = std:: sqrt(b*b-4*a*c);

    x1 = (b* -1 + wurzel)/ (2*a);
    x2 = (b* -1 - wurzel)/ (2*a);

    test = b*b - 4 * a * c;

    if ( test > 0)
    {
        std::cout << "Die Nullstelle für x1 = " << x1 << std::endl << "Die Nullstelle für x2 = " << x2 << std::endl;
    }
    if ( test == 0)
    {
        std::cout << "Die Nullstelle für x1 = " << x1 << std::endl;

    }
    if( test < 0) {

        std::cout << "Die Nullstelle konnte nicht berechnet werden" << std::endl;
    }



    return 0;
}
