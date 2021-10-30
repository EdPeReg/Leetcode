// https://jayeshkawli.ghost.io/tic-tac-toe/
// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/

#include <iostream>
#include <vector>

using namespace std;

string tictactoe(vector< vector<int> >& moves) {
    char matrix[3][3] = {{'.', '.', '.'},
                         {'.', '.', '.'},
                         {'.', '.', '.'}};

    string winner;
    int total_moves = 0;

    bool A = true;
    for(const auto& m : moves) {
        if(A) {
            matrix[m[0]][m[1]] = 'X';
            A = false;
        } else {
            matrix[m[0]][m[1]] = 'O';
            A = true;
        }
        ++total_moves;
    }

    // Checking rows.
    for(int i = 0; i < 3; ++i) {
        int xcounter = 0;
        int ocounter = 0;

        for(int j = 0; j < 3; ++j) {
            if(matrix[i][j] == 'X') {
                ++xcounter;
            } else if(matrix[i][j] == 'O') {
                ++ocounter;
            }
            cout << matrix[i][j] << ' ';
        }

        if(xcounter == 3) {
            winner = "A";
            break;
        } else if(ocounter == 3) {
            winner = "B";
            break;
        }

        cout << '\n';
    }

    // Cheking columns.
    for(int i = 0; i < 3; ++i) {
        int xcounter = 0;
        int ocounter = 0;
        for(int j = 0; j < 3; ++j) {
            if(matrix[j][i] == 'X') {
                ++xcounter;
            } else if(matrix[j][i] == 'O') {
                ++ocounter;
            }
        }

        if(xcounter == 3) {
            winner = "A";
            break;
        } else if(ocounter == 3) {
            winner = "B";
            break;
        }
    }

    // Diagonal.
    if(matrix[0][0] == 'X' and matrix[1][1] == 'X' and matrix[2][2] == 'X') {
        winner = "A";
    } else if(matrix[0][0] == 'O' and matrix[1][1] == 'O' and matrix[2][2] == 'O') {
        winner = "B";
    } 
    // Opposite diagonal.
    else if(matrix[0][2] == 'X' and matrix[1][1] == 'X' and matrix[2][0] == 'X') {
        winner = "A";
    } else if(matrix[0][2] == 'O' and matrix[1][1] == 'O' and matrix[2][0] == 'O') {
        winner = "B";
    } else if(total_moves == 9 and winner != "A" and winner != "B") winner = "Draw";

    if(winner != "A" and winner != "B" and winner != "Draw") winner = "Pending";

    return winner;
}

int main() {
    vector< vector<int> > moves;

    // [[0,0],[1,2],[2,2],[0,1],[2,1],[0,2],[1,0],[1,1],[2,0]]
    moves.push_back({0,0});
    moves.push_back({1,2});
    moves.push_back({2,2});
    moves.push_back({0,1});
    moves.push_back({2,1});
    moves.push_back({0,2});
    moves.push_back({1,0});
    moves.push_back({1,1});
    moves.push_back({2,0});

    cout << tictactoe(moves) << '\n';

    return 0;
}
