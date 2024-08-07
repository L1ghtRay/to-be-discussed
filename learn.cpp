#include <iostream>
#include <string>

int main() {
    int map[11][11] = {0};
    int row = 5, col = 5;
    map[row][col] = 1;
    char x;

    while (1) {
        
        for (int i = 0; i < 11; i++) {
            std::cout << "[ ";
            for (int j = 0; j < 11; j++) {
                std::cout << map[i][j] << " ";
            }
            std::cout << "]\n";
        }

        std::cin >> x;
        system("cls");

        switch (x) {

            case 'w':
                if (row == 0) {
                    break;
                }
                map[row][col] = 0;
                row -= 1;
                map[row][col] = 1;
                break;

            case 'a':
                if (col == 0) {
                    break;
                }
                map[row][col] = 0;
                col -= 1;
                map[row][col] = 1;
                break;

            case 's':
                if (row == 10) {
                    break;
                }
                map[row][col] = 0;
                row += 1;
                map[row][col] = 1;
                break;

            case 'd':
                if (col == 10) {
                    break;
                }
                map[row][col] = 0;
                col += 1;
                map[row][col] = 1;
                break;

            default:
                return 0;
                break;
        }
    }
    
    return 0;
}
