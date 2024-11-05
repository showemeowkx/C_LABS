#include <stdio.h>
#include <windows.h>

void cursorMove(HANDLE console, char sym, int x, int y) {
    COORD nextMove = {x, y};
    SetConsoleCursorPosition(console, nextMove);
    printf("%c", sym);
    Sleep(1);

    return;
}

int main(void) {
    int WIDTH = 80;
    int HEIGHT = 24;
    int i = WIDTH-1;
    int j = HEIGHT-1;
    unsigned long int l;

    char symbol;
    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    COORD clearPos = {0,0};
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);

    FillConsoleOutputAttribute(hout, 0, 2000, clearPos, &l);
    cursorMove(hout, symbol, i, j);

    while(i>0 || j>0) {
        if (i>0) {
            i--;
            cursorMove(hout, symbol, i, j);
        }
        else {
            j--;
            cursorMove(hout, symbol, i, j);
        }

        while (i<WIDTH-1 && j>0) {
            i++;
            j--;
            cursorMove(hout, symbol, i, j);
        }

        if (j==0) {
            i--;
            cursorMove(hout, symbol, i, j);
        }
        else {
            j--;
            cursorMove(hout, symbol, i, j);
        }

        while (j<HEIGHT-1 && i>0) {
            i--;
            j++;
            cursorMove(hout, symbol, i, j);
        }
    }

    Sleep(1000000);

    return 0;
}