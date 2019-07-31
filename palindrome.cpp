#include <iostream>
#include <string>
#include <string_view>

bool isPalindrome(const std::string_view &input)
{
    auto ritr = input.rbegin();
    for(auto itr = input.begin(); itr != input.end(); ++itr)
    {
        if(*itr != *ritr)
            return false;
        ++ritr;
    }
    return true;
}

int main()
{
    std::cout << "Palindrome function - stl style iterators version.\n";
    std::string string1 = "kajak";
    std::cout << "string1 = " << "\"" << string1 << "\"\n";
    if(isPalindrome(string1))
        std::cout << "\"" << string1 << "\" is a palindrome!\n"; 
    else
        std::cout << "\"" << string1 << "\" is NOT a palindrome!\n"; 
    return 0;
}



