#include <iostream>
#include <cmath>    


//Recursive function of raising x to the power n
double power(double x, int n) 
{
    if (n == 0) 
    {
        return 1.0;
    }
    if (n > 0) 
    {
        return x * power(x, n - 1);
    }
    
    return 1.0 / power(x, -n);
}

int main() 
{
    double x;
    int n;

    std::cout << "Enter a real number x (x must not equal zero): ";
    std::cin >> x;

    if (x == 0) 
    {
        std::cout << "Error: x must not equal 0." << std::endl;
        return 1;
    }

    std::cout << "Please, enter a natural number n: ";
    std::cin >> n;

    double result = power(x, n);
    std::cout << "The result is: " << x << "^" << n << " = " << result << std::endl;

    return 0;
}


