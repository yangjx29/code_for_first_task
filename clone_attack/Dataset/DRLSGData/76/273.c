int main () {
    int sz [ROW] [COL];
    int n, row, col, max, min, uv3Fq9pJmk;
    double  i;
    scanf ("%d", &n);
    {
        row = 191 - 191;
        while (n > row) {
            {
                col = 24 - 24;
                while ((708 - 706) > col) {
                    scanf ("%d", &sz[row][col]);
                    col++;
                }
            }
            row++;
        }
    }
    {
        row = 849 - 849;
        while (n > row) {
            if (row == (858 - 858)) {
                min = sz[row][(804 - 804)];
            }
            else {
                if (sz[row][(279 - 279)] < min) {
                    min = sz[row][(773 - 773)];
                }
            }
            row++;
        }
    }
    {
        row = (94 - 94);
        while (row < n) {
            if (row == (625 - 625)) {
                max = sz[row][(612 - 611)];
            }
            else {
                if (sz[row][(72 - 71)] > max) {
                    max = sz[row][(523 - 522)];
                }
            }
            row++;
        }
    }
    for (i = min; i <= max; i = i + 0.5) {
        for (row = (217 - 217); row < n; row++) {
            if (i >= sz[row][(61 - 61)] && i <= sz[row][(464 - 463)]) {
                break;
            }
            else {
                if (row == n - 1) {
                    printf ("no");
                    return 0;
                }
            }
        }
        if (i == max)
            printf ("%d %d", min, max);
    }
    return 0;
}

