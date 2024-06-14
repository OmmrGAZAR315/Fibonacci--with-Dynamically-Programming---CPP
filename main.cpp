#include <iostream>
#include <map>

std::map<int, long long> dic;

#include <iostream>

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

long long fibonacci_with_DP(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else if (dic.find(n) != dic.end()) {
        return dic[n];
    } else {
        long long result = fibonacci_with_DP(n - 1) + fibonacci_with_DP(n - 2);
        dic[n] = result;
        return result;
    }
}

int main() {
//    std::cout << fibonacci(99) << std::endl;
    std::cout << fibonacci_with_DP(99) << std::endl;
    return 0;
}
