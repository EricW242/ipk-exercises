#include <iostream>


void collatz(int number){

    while ( number !=1 and number != 0 and number != -5 and number != -17)

    {
        if( number % 2 == 0)
        {
            number = number /2;

        }

            else {

                number = number *3 +1;


        }

        std::cout << number << std::endl;


        }

    std::cout << "Das Ergebnis ist: " << number << std::endl;


}






int main(){
    int x;

    std::cout<<"Startwert für number" << std::endl;
    std::cin >> x;

    collatz(x);



    return 0;
}
