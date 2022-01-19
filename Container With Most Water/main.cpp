#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height) {
    int maxFirstPos = 0, maxLastPos = 0;
    int maxArea1 = 0, maxArea2 = 0;

    for(size_t i = 0; i < height.size(); ++i) {
        bool first = false;

        for(size_t j = 0; j < height.size(); ++j) {
            if(first == false and height[j] >= height[i]) {
                maxFirstPos = j; 
                first = true;
            }

            if(height[j] >= height[i]) {
                maxLastPos = j; 
            }
        }

        maxArea2 = (&height[maxLastPos] - &height[maxFirstPos]) * height[i];
        if(maxArea2 > maxArea1)
            maxArea1 = maxArea2;
    }

    return maxArea1;
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
