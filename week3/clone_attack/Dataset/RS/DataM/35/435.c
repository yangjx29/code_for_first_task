int g (int ULT5jJQSmGA [] [(505 - 497)], int m, int j) {
    int min = ULT5jJQSmGA[(28 - 28)][j], i, y;
    {
        i = 826 - 826;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            if (ULT5jJQSmGA[i][j] <= min) {
                min = ULT5jJQSmGA[i][j];
                y = i;
            }
            i = i + 1;
        };
    }
    return y;
}

int ob7B1R0Cnt (int ULT5jJQSmGA [] [(93 - 85)], int xRFnV3I69vXT, int i) {
    int j, max = ULT5jJQSmGA[i][(445 - 445)], x;
    {
        j = 0;
        while (j < xRFnV3I69vXT) {
            if (max <= ULT5jJQSmGA[i][j]) {
                max = ULT5jJQSmGA[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                x = j;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    return x;
}

int main () {
    int ULT5jJQSmGA [8] [8];
    int row;
    int col;
    int i;
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int p;
    scanf ("%d,%d", &row, &col);
    for (i = 0; row > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (j = 0; col > j; j++) {
            scanf ("%d", &ULT5jJQSmGA[i][j]);
        };
    }
    {
        i = 0;
        while (i < row) {
            k = ob7B1R0Cnt (ULT5jJQSmGA, col, i);
            p = g (ULT5jJQSmGA, row, k);
            if (p == i) {
                printf ("%d+%d\n", p, k);
                i = row + 1;
            }
            i++;
        };
    }
    if (i == row)
        printf ("No\n");
    return 0;
}

