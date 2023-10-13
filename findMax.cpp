#include <iostream>
#include <vector>

// Function to find the maximum element in a vector
int findMax(const std::vector<int>& arr) {
    if (arr.empty()) {
        throw std::invalid_argument("Vector is empty.");
    }

    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    std::vector<int> numbers = {5, 12, 7, 9, 22, 8, 15};
    
    try {
        int max = findMax(numbers);
        std::cout << "The maximum element in the vector is: " << max << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
