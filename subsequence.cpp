#include <iostream>
#include <stack>
#include <string>

bool is_balanced(const std::string& str) {
    std::stack<char> brackets;
    for (char bracket : str) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            brackets.push(bracket);
        }
        else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (brackets.empty()) {
                return false;
            }
            char open_bracket = brackets.top();
            brackets.pop();
            if ((open_bracket == '(' && bracket != ')') ||
                (open_bracket == '[' && bracket != ']') ||
                (open_bracket == '{' && bracket != '}')) {
                return false;
            }
        }
    }
    return brackets.empty();
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::cout << (is_balanced(str) ? "yes" : "no") << std::endl;
    return 0;
}