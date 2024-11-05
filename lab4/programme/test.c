#include <stdio.h>
#include <windows.h>

void cursorMove(HANDLE console, char sym, int x, int y) {
    COORD nextMove = {x, y};
    SetConsoleCursorPosition(console, nextMove);
    printf("%c", sym);
}

int main(void) {
    int WIDTH = 25;
    int HEIGHT = 25;
    int i = WIDTH - 1;
    int j = HEIGHT - 1;

    char symbol;
    printf("Enter a symbol: ");
    scanf(" %c", &symbol); // Додано пробіл для коректного зчитування символу

    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD written;
    COORD clearPos = {0, 0};

    // Очищення екрану
    FillConsoleOutputAttribute(hout, 0, WIDTH * HEIGHT, clearPos, &written);

    // Основний цикл для малювання шляху
    while (i != 0 || j != 0) {
        cursorMove(hout, symbol, i, j);
        Sleep(50); // Встановлено більшу затримку для економії часу

        if (i > 0) {
            i--;
        } else {
            j--;
        }

        // Малювання по діагоналі, коли це можливо
        while (i < WIDTH - 1 && j > 0) {
            cursorMove(hout, symbol, i, j);
            i++;
            j--;
            Sleep(50); // Більша затримка тільки для кожного кроку
        }
        
        // Якщо нижній край, йдемо на діагональний шлях вгору зліва
        while (j < HEIGHT - 1 && i > 0) {
            cursorMove(hout, symbol, i, j);
            i--;
            j++;
            Sleep(50);
        }
    }

    // Очікування перед завершенням
    Sleep(5000);
    return 0;
}
