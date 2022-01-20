#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height) {
    int currentArea = 0, result = 0;

    for(size_t i = 0; i < height.size(); ++i) {
        for(size_t j = i+1; j < height.size(); ++j) {
            size_t distance = j-i;
            currentArea = std::min(height[i], height[j]) * distance;
            result = std::max(result, currentArea);
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for(auto &e : v)
        std::cin >> e;

    std::cout << maxArea(v) << '\n';

    return 0;
}
