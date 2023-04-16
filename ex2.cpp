#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int M, N;
    std::cout << "Enter the size of array A: ";
    std::cin >> M;
    std::cout << "Enter the size of array B: ";
    std::cin >> N;

    std::vector<int> A(M);
    std::vector<int> B(N);

    std::cout << "Enter the elements of array A: ";
    for (int i = 0; i < M; i++) {
        std::cin >> A[i];
    }

    std::cout << "Enter the elements of array B: ";
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }

    std::unordered_set<int> setB(B.begin(), B.end());
    std::vector<int> result;

    for (int i = 0; i < M; i++) {
        if (setB.find(A[i]) == setB.end()) {
            result.push_back(A[i]);
        }
    }

    for (int i = 0; i < N; i++) {
        if (setB.find(B[i]) == setB.end()) {
            result.push_back(B[i]);
        }
    }

    std::cout << "Result: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}