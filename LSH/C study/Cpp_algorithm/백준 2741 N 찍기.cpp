// 문제

// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
// 입력

// 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
// 출력

// 첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL); 

    int N;
    std::cin >> N;                  

    for (int i = 1; i <= N; ++i) {
        std::cout << i << '\n'; 
    }
    
    return 0;
}

