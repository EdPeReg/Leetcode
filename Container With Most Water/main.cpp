#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height) {
    int currentArea = 0, maxArea = 0;
    int right = height.size() - 1;

    for(int left = 0; left < right;) {
        int distance = right-left;
        currentArea = std::min(height[left], height[right]) * distance;
        maxArea = std::max(maxArea, currentArea);

        if(height[left] < height[right]) ++left;
        else --right;
    }

    return maxArea;
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
