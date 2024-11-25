int main (int argc, char *argv []) {
    int i = 0, j = 0;
    int row = (830 - 830), col = (230 - 230), array [100] [100];
    scanf ("%d%d", &row, &col);
    for (i = 0; row > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; col > j; j++) {
            scanf ("%d", &array[i][j]);
        };
    }
    {
        i = 0;
        while (col > i) {
            j = 0;
            while (i >= j && j < row) {
                printf ("%d\n", array[j][i - j]);
                j = j + 1;
            }
            i++;
        };
    }
    {
        i = 1;
        while (row > i) {
            j = 0;
            while (j <= row - i - 1 && j < col) {
                printf ("%d\n", array[i + j][col - 1 - j]);
                j++;
            }
            i++;
        };
    }
    return 0;
}

