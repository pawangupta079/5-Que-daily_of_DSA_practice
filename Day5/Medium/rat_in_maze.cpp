#include <iostream>  
#include <vector>  

using namespace std;  

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& solution) {  
    // Check if x and y are within the bounds and the cell is not blocked and not already visited  
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && solution[x][y] == 0);  
}  

bool solveMazeUtil(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& solution) {  
    // If we reached the destination cell, return true  
    if (x == n - 1 && y == n - 1) {  
        solution[x][y] = 1;  // Marking solution path  
        return true;  
    }  

    // Check if current position is safe  
    if (isSafe(x, y, n, maze, solution)) {  
        // Mark this cell as part of the solution path  
        solution[x][y] = 1;  

        // Move forward in x direction  
        if (solveMazeUtil(x + 1, y, n, maze, solution)) {  
            return true;  
        }  

        // If moving in x direction didn't lead to a solution then move down in y direction  
        if (solveMazeUtil(x, y + 1, n, maze, solution)) {  
            return true;  
        }  

        // If neither forward nor down leads to a solution, backtrack  
        solution[x][y] = 0;  
        return false;  
    }  

    return false;  
}  

void solveMaze(vector<vector<int>>& maze, int n) {  
    vector<vector<int>> solution(n, vector<int>(n, 0));  // Create a solution matrix  

    if (!solveMazeUtil(0, 0, n, maze, solution)) {  
        cout << "No solution exists" << endl;  
        return;  
    }  

    // Print the solution  
    for (const auto& row : solution) {  
        for (int cell : row) {  
            cout << cell << " ";  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int n; // Size of the maze  
    cin >> n;  
    vector<vector<int>> maze(n, vector<int>(n));  

    // Input maze matrix  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cin >> maze[i][j];  
        }  
    }  

    solveMaze(maze, n);  
    return 0;  
}  