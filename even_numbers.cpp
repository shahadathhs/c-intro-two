#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if (N == 1) 
    {
        std::cout << -1 << std::endl;
        return 0;
    }

    for (int i = 2; i <= N; i += 2) 
    {
        std::cout << i << std::endl;
    }

    return 0;
}
