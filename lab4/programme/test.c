#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD def_pos = { 0, 29 };
    SetConsoleCursorPosition(hConsole, def_pos);
    printf("*");
    _sleep(200);
    for (int n = 1; n < 20; n++) {
        if (n <= 15) {
            COORD start_upper_diagonal = {def_pos.X + 2*n - 1, def_pos.Y };
            SetConsoleCursorPosition(hConsole, start_upper_diagonal);
            for (int i = 0; i < 2*n; i++) {
                COORD upper_diagonal = {start_upper_diagonal.X - i, start_upper_diagonal.Y - i};
                SetConsoleCursorPosition(hConsole, upper_diagonal);
                printf("*");
                _sleep(10);
            }
            COORD start_lower_diagonal = {def_pos.X, def_pos.Y - 2*n };
            SetConsoleCursorPosition(hConsole, start_lower_diagonal);
            for (int j = 0; j <= 2*n; j++) {
                COORD lower_diagonal = {start_lower_diagonal.X + j, start_lower_diagonal.Y + j};
                SetConsoleCursorPosition(hConsole, lower_diagonal);
                printf("*");
                _sleep(10);
            }
        }
        else {
            COORD start_upper_diagonal = {def_pos.X + 2*n - 1, def_pos.Y };
            SetConsoleCursorPosition(hConsole, start_upper_diagonal);
            for (int i = 0; i < 2*n; i++) {
                COORD upper_diagonal = {start_upper_diagonal.X - i, start_upper_diagonal.Y - i};
                SetConsoleCursorPosition(hConsole, upper_diagonal);
                printf("*");
                _sleep(200);
            }
            COORD start_lower_diagonal = {def_pos.X, def_pos.Y - 2*n };
            SetConsoleCursorPosition(hConsole, start_lower_diagonal);
            for (int j = 0; j <= 2*n; j++) {
                COORD lower_diagonal = {start_lower_diagonal.X + j, start_lower_diagonal.Y + j};
                SetConsoleCursorPosition(hConsole, lower_diagonal);
                printf("*");
                // _sleep(200);
            }
        }
    }
    _sleep(10000);
}
