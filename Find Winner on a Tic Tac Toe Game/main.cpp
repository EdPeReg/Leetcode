// https://jayeshkawli.ghost.io/tic-tac-toe/
// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/

// INCOMPLETO

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

string tictactoe(vector< vector<int> >& moves) {
    char matrix[3][3] = {{'.', '.', '.'},
                         {'.', '.', '.'},
                         {'.', '.', '.'}};

    int row_container[3] {0,0,0};
    int col_container[3] {0,0,0};
    int diagonal_container[3] {0,0,0};
    int oposite_diagonal_container[3] {0,0,0};
    string winner;

    bool A = true;
    for(const auto& m : moves) {
        int sum = 0;
        int sum2 = 0;

        row_container[m[0]] += 1;
        col_container[m[1]] += 1;
        
        if(m[0] == m[1]) {
            diagonal_container[m[0]] += 1;
        } 
        
        if(m[0] + m[1] + 1 == 3) {
            oposite_diagonal_container[m[0]] += 1;    
        } 

        if(A) {
            matrix[m[0]][m[1]] = 'x';
            A = false;

            for(int i = 0; i < 3; ++i) {
                sum += diagonal_container[i];
                sum2 += oposite_diagonal_container[i];
            }

            if(row_container[m[0]] == 3 or col_container[m[1]] == 3 or sum == 3 or sum2 == 3) {
                winner = "A";
                break;
            }

        } else {
            matrix[m[0]][m[1]] = 'o';
            A = true;

            for(int i = 0; i < 3; ++i) {
                sum += diagonal_container[i];
                sum2 += oposite_diagonal_container[i];
            }

            if(row_container[m[0]] == 3 or col_container[m[1]] == 3 or sum == 3 or sum2 == 3) {
                winner = "B";
                break;
            }
        }
    }

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';

    int row_container_sum = accumulate(row_container, row_container+3, 0);
    int col_container_sum = accumulate(col_container, col_container+3, 0);
    int diagonal_container_sum = accumulate(diagonal_container, diagonal_container+3, 0);
    int oposite_diagonal_container_sum = accumulate(oposite_diagonal_container, oposite_diagonal_container+3, 0);

    if(row_container_sum == 9 and col_container_sum == 9 and diagonal_container_sum == 3 
       and oposite_diagonal_container_sum == 3) 
    {
        winner = "Draw";
    }

    cout << "Row container: ";
    for(auto e : row_container) {
        cout << e << " ";
    }
    cout << '\n';

    cout << "Col container: ";
    for(auto e : col_container) {
        cout << e << " ";
    }
    cout << '\n';

    cout << "Diagoncal container: ";
    for(auto e : diagonal_container) {
        cout << e << " ";
    }
    cout << '\n';

    cout << "Opposite diagoncal container: ";
    for(auto e : oposite_diagonal_container) {
        cout << e << " ";
    }
    cout << '\n';

    return winner;
}

int main() {
    vector< vector<int> > moves;

    // o row win
    // moves.push_back({0,2});
    // moves.push_back({2,1});
    // moves.push_back({0,0});
    // moves.push_back({2,0});
    // moves.push_back({1,1});
    // moves.push_back({2,2});

    // x col win
    // moves.push_back({0,1});
    // moves.push_back({0,2});
    // moves.push_back({2,1});
    // moves.push_back({2,2});
    // moves.push_back({1,0});

    // x diagonal win
    // moves.push_back({0,0});
    // moves.push_back({1,0});
    // moves.push_back({2,2});
    // moves.push_back({2,0});
    // moves.push_back({1,1});

    // x opostibe diagonal winner
    // moves.push_back({1,2});
    // moves.push_back({0,2});
    // moves.push_back({0,0});
    // moves.push_back({2,0});
    // moves.push_back({0,1});
    // moves.push_back({1,1});

    // draw
    // moves.push_back({0,1});
    // moves.push_back({0,0});
    // moves.push_back({1,1});
    // moves.push_back({0,2});
    // moves.push_back({1,0});
    // moves.push_back({1,2});
    // moves.push_back({2,0});
    // moves.push_back({2,1});
    // moves.push_back({2,2});

    moves.push_back({0,0});
    moves.push_back({1,1});
    moves.push_back({2,0});
    moves.push_back({1,0});
    moves.push_back({1,2});
    moves.push_back({2,1});
    moves.push_back({0,1});
    moves.push_back({0,2});
    moves.push_back({2,2});

    cout << tictactoe(moves) << '\n';

    return 0;
}
