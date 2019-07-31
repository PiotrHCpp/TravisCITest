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
    std::cout << "Enter string for palindrome check: ";
    std::string string1;
    std::cin >> string1;
    if(isPalindrome(string1))
        std::cout << "\"" << string1 << "\" " << "is a palindrome!\n";
    else
        std::cout << "\"" << string1 << "\" " << "is NOT a palindrome!\n";
    return 0;
}



