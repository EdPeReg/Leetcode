
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int numberOfBoomerangs(vector<vector<int>>& points) {
    if(points.size() != 3) return 0;

    int x1 = points[0][0];
    int x2 = points[1][0];
    int y1 = points[0][1];
    int y2 = points[1][1];

    int d1 = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );

    x2 = points[2][0];
    y2 = points[2][1];
    int d2 = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );

    return d1 > d2 ? d1 : d2;
}

int main() {
    vector< vector <int> > v = { {1,1}, {2,2}, {3,3} };
    cout << numberOfBoomerangs(v);


    return 0;
}
