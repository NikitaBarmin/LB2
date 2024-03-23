#include <iostream>
#include <stack>
#include <string>




int main()
{
    std::stack <int> stack;
    std::string str;
    std::getline(std::cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            stack.push(atoi(&(str[i])));
        }
        else if (str[i] == '+')
        {
            int a, b;
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b + a);
        }
        else if (str[i] == '-')
        {
            int a, b;
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b - a);
        }
        else if (str[i] == '*')
        {
            int a, b;
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b * a);
        }

    }
    std::cout << stack.top();
}
