#include <iostream>

#define MODE 8

#ifndef MODE
#error MODE was not defined
#endif

int main()
{
#if MODE == 0
    std::cout << "Training mode activated\n";
    
#elif MODE == 1
    std::cout << "Combat mode activated\n";
    std::cout << "Enter number 1: ";
    int num1;
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    int num2;
    std::cin >> num2;
    
    #define ADD(a, b) ((a) + (b))
        
    #ifdef ADD
        int result = ADD(num1, num2);
    #else
    #error ADD(a, b) was not defined
    #endif // ADD(a, b)
    
    std::cout << "Result of addition: " << result << std::endl;
    
#else // MODE != 0 && MODE != 1
    std::cout << "Unknown mode. Goodbye\n";
    
#endif // MODE
    
    return 0;
}
