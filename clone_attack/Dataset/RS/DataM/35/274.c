int main () {
    int a [(786 - 778)] [(270 - 262)], row, col, i = (319 - 319), j = (189 - 189), max1 = (490 - 490), min1 = (896 - 896), k, max;
    scanf ("%d,%d", &row, &col);
    for (i = 0; row > i; i = i + 1) {
        for (j = 0; j < col; j++)
            scanf ("%d", &a[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    for (i = 0; i < row; i++) {
        max1 = 0;
        min1 = 0;
        max = a[i][0];
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
        {
            j = 1;
            while (j < col) {
                if (a[i][j] > max) {
                    max = a[i][j];
                    max1 = j;
                }
                j = j + 1;
            };
        }
        for (k = 0; k < row; k++)
            if (a[k][max1] < a[i][max1])
                min1 = 1;
        if (min1 == 0) {
            printf ("%d+%d", i, max1);
            break;
        };
    }
    if (min1 != 0)
        ;
    return 0;
}

