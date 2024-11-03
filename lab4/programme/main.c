#include <stdio.h>
#include <windows.h>

void cursorMove(HANDLE console, int x, int y) {
    COORD nextMove = {x, y};
    SetConsoleCursorPosition(console, nextMove);
    printf("*");
    Sleep(1);

    return;
}

int main(void) {
    int WIDTH = 120;
    int HEIGHT = 30;
    int i = WIDTH-1;
    int j = HEIGHT-1;
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);

    cursorMove(hout, i, j);

    while(i>=0 && j>0){
        if (i!=0) {
            i-=1;
            cursorMove(hout, i, j);
            while (i!=WIDTH-1 && j!=0) {
                i+=1;
                j-=1;
                cursorMove(hout, i, j);
            }
            if (j!=0) {
                j-=1;
                cursorMove(hout, i, j);
            }
            else if (j==0) {
                i-=1;
                cursorMove(hout, i, j);
            }
            while (j!=HEIGHT-1 && i!=0) {
                    i-=1;
                    j+=1;
                    cursorMove(hout, i, j);
                }
        }
        if (i==0) {
            j-=1;
            cursorMove(hout, i, j);
            while (j!=0) {
                i+=1;
                j-=1;
                cursorMove(hout, i, j);
            }
            if (i!=0) {
                i-=1;
                cursorMove(hout, i, j);
            }
            while (i!=0) {
                i-=1;
                j+=1;
                cursorMove(hout, i, j);
            }
        }
    }

    Sleep(1000000);

    return 0;
}

