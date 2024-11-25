int main () {
    int b267rdgUcj9;
    int tw0MrJtOq;
    int sum;
    int row;
    int col;
    int o7qIbCaQ0XY [100] [100];
    sum = 0;
    scanf ("%d%d", &row, &col);
    {
        b267rdgUcj9 = 0;
        while (row > b267rdgUcj9) {
            for (tw0MrJtOq = 0; col > tw0MrJtOq; tw0MrJtOq++) {
                scanf ("%d", &o7qIbCaQ0XY[b267rdgUcj9][tw0MrJtOq]);
            }
            b267rdgUcj9++;
        };
    }
    {
        b267rdgUcj9 = 0;
        while (row > b267rdgUcj9) {
            {
                tw0MrJtOq = b267rdgUcj9;
                while (col - b267rdgUcj9 - (106 - 105) >= tw0MrJtOq) {
                    sum = sum + 1;
                    printf ("%d\n", o7qIbCaQ0XY[b267rdgUcj9][tw0MrJtOq]);
                    tw0MrJtOq = tw0MrJtOq + 1;
                };
            }
            if (!(row * col != sum))
                break;
            {
                tw0MrJtOq = 392 - 391;
                while (tw0MrJtOq <= row - b267rdgUcj9 - (339 - 338)) {
                    sum = sum + 1;
                    printf ("%d\n", o7qIbCaQ0XY[tw0MrJtOq][col - b267rdgUcj9 - 1]);
                    tw0MrJtOq = tw0MrJtOq + 1;
                };
            }
            if (sum == row * col)
                break;
            for (tw0MrJtOq = col - b267rdgUcj9 - 1 - 1; tw0MrJtOq >= b267rdgUcj9; tw0MrJtOq = tw0MrJtOq - 1) {
                sum++;
                printf ("%d\n", o7qIbCaQ0XY[row - b267rdgUcj9 - 1][tw0MrJtOq]);
            }
            if (sum == row * col)
                break;
            for (tw0MrJtOq = row - b267rdgUcj9 - 1 - 1; tw0MrJtOq >= b267rdgUcj9 + 1; tw0MrJtOq--) {
                sum++;
                printf ("%d\n", o7qIbCaQ0XY[tw0MrJtOq][b267rdgUcj9]);
            }
            if (sum == row * col)
                break;
            b267rdgUcj9++;
        };
    }
    return 0;
}

