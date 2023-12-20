#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string s1, s2;

    std::cout << "Enter first string: (relation is case sensitive) \n";
    std::cin >> s1;

    std::cout << "Enter second string: ";
    std::cin >> s2;

    if (s1==s2) {
    	reverse(s1.begin(), s1.end());
        std::cout << "Strings were equal. Rotating first string: " << s1 << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }

    return 0;
}

