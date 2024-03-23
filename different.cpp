#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> numbers;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        numbers.insert(num);
    }

    cout << numbers.size() << endl;

    return 0;
}