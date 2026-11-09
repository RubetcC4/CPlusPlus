#include <iostream>
#include <clocale>

void countCharacters(const char str[], int& letters, int& digits, int& spaces, int& others) {
    letters = 0;
    digits = 0;
    spaces = 0;
    others = 0;
    
    for (size_t i = 0; str[i] != '\0'; ++i) {
        char c = str[i];
        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            ++letters;
        } else if (c >= '0' && c <= '9') {
            ++digits;
        } else if (c == ' ') {
            ++spaces;
        } else {
            ++others;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    char s[] = "Hello 123!";
    
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int others = 0;
    
    countCharacters(s, letters, digits, spaces, others);
    
    std::cout << "Букв: " << letters << "; ";
    std::cout << "Цифр: " << digits << "; ";
    std::cout << "Пробелов: " << spaces << "; ";
    std::cout << "Других: " << others << '\n';

    return 0;
}
