#include <iostream>
#include <string>

// task 1
std::string remove_char(const std::string& s, const char target) {
    std::string result = "";
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] != target) {
            result += s[i];
        }
    }
    return result;
}

// task 2
int count_words(const std::string& s) {
    int count = 0;
    bool in_word = false;
    
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') {
            if (in_word == false) {
                count++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
    }
    return count;
}

// task 3
std::string reverse_words(const std::string& s) {
    std::string result = "";
    int word_start = 0;
    
    for (size_t i = 0; i <= s.length(); ++i) {
        if (i == s.length() || s[i] == ' ') {
            for (size_t j = 0; j < i - word_start; ++j) {
                result += s[i - 1 - j];
            }
            if (i != s.length()) {
                result += ' ';
            }
            word_start = i + 1;
        }
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::string text = "hello world";

    std::cout << "task 1\n" << remove_char(text, 'l') << "\n\n";
    std::cout << "task 2\n" << count_words(text) << "\n\n";
    std::cout << "task 3\n" << reverse_words(text) << "\n";

    return 0;
}
