#include <iostream>
#include <unordered_set>
#include <string>
#include <map>


int main()

{
    std::multimap<int, std::string> map0;
    std::string str;
    while (std::getline(std::cin, str)) {
        int key = std::stoi(str.substr(0, str.find(" ")));
        std::string value = str.substr(str.find(" ") + 1);
        map0.insert(make_pair(key, value));

    }
    std::map <int, std::string> ::iterator it = map0.begin();
    for (int i = 0; it != map0.end(); it++, i++) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}
