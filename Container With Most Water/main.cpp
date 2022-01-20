#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height) {
    int currentArea = 0, result = 0;
    int right = height.size() - 1;

    for(int left = 0; left < right;) {
        int distance = right-left;
        currentArea = std::min(height[left], height[right]) * distance;
        result = std::max(result, currentArea);

        if(std::max(height[left], height[right]) > height[left]) ++left;
        else --right;
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
