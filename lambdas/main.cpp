#include <iostream>

int main()
{
        int x;
        std::cout << "Enter value to be cubed:" << std::endl;
        std::cin >> x;

        auto cubed = [&]()->int
        {
          return x * x * x;
        };

        std::cout << x << " cubed is " << cubed() << std::endl;
}
