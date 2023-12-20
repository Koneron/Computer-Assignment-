#include <iostream>
#include <string>

int main() {
    std::string DS;

    std::cout << "Enter a string: ";
    std::getline(std::cin, DS);

    std::string NS;
    std::cout<<"result string test" <<NS;
    for (char ch : DS) 
	{
        bool dup = false;
        for (char Ch : NS) {
            if (ch == Ch) {
                dup = true;
                break;
            }
        }
        if (!dup) {
            NS.push_back(ch);
        }
    }
    std::cout << "String after removing duplicates becomes: " << NS << std::endl;
    return 0;
}

