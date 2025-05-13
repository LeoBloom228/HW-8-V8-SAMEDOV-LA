//#include <iostream>
//#include <cmath>    
//
//
//Recursive function of raising x to the power n
//double power(double x, int n) 
//{
//    if (n == 0) 
//    {
//        return 1.0;
//    }
//    if (n > 0) 
//    {
//        return x * power(x, n - 1);
//    }
//    
//    return 1.0 / power(x, -n);
//}
//
//int main() 
//{
//    double x;
//    int n;
//
//    std::cout << "Enter a real number x (x must not equal zero): ";
//    std::cin >> x;
//
//    if (x == 0) 
//    {
//        std::cout << "Error: x must not equal 0." << std::endl;
//        return 1;
//    }
//
//    std::cout << "Please, enter a natural number n: ";
//    std::cin >> n;
//
//    double result = power(x, n);
//    std::cout << "The result is: " << x << "^" << n << " = " << result << std::endl;
//
//    return 0;
//}

//task 2

#include <iostream>
#include <cmath>

// Recursive function to print the digits of a number in direct order
void printdigits(unsigned int n) 
{
    if (n < 10) 
    {
        std::cout << n;
    }
    else 
    {
        printdigits(n / 10);       // First, print all the "left" numbers
        std::cout << n % 10;            // Then the current (right)
    }
}

// Processing all numbers from A to B
void processrange(unsigned int A, unsigned int B) 
{
    if (A > B) return;
    printdigits(A);
    std::cout << std::endl;
    processrange(A + 1, B);  // Recursive call for the next number
}

int main() 
{
    unsigned int A, B;

    std::cout << "Please, enter two natural numbers A and B (A <= B): ";
    std::cin >> A >> B;

    if (A == 0 || B == 0 || A > B) 
    {
        std::cout << "An error occured: A and B are supposed to be natural numbers, and A <= B." << std::endl;
        return 1;
    }

    std::cout << "\nDigits of nubers from " << A << " till " << B << ":\n";
    processrange(A, B);

    return 0;
}
