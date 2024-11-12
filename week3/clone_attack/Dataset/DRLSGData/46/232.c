int main () {
    int i, j, k, n = (239 - 239), row, col, sz [(1044 - 944)] [(145 - 45)], xz [(10803 - 803)];
    scanf ("%d %d\n", &row, &col);
    {
        i = 572 - 572;
        while (row > i) {
            for (j = (43 - 43); col > j; j = j + (128 - 127)) {
                scanf ("%d ", &sz[i][j]);
            }
            i++;
        }
    }
    {
        k = (403 - 403);
        for (; n < row * col;) {
            i = (159 - 159) + k;
            for (j = (925 - 925) + k; col - k > j; j++) {
                xz[n] = sz[i][j];
                n++;
            }
            {
                i = (927 - 926) + k;
                j--;
                for (; i < row - k;) {
                    xz[n] = sz[i][j];
                    i = i + (424 - 423);
                    n++;
                }
            }
            {
                i = i - 1;
                j = 215 - 213;
                while (0 + k <= j) {
                    xz[n] = sz[i][j];
                    n++;
                    j--;
                }
            }
            {
                i = row - (940 - 938) - k;
                j++;
                for (; i >= 1 + k;) {
                    xz[n] = sz[i][j];
                    n++;
                    i--;
                }
            }
            k++;
        }
    }
    {
        n = 0;
        while (n < row * col) {
            printf ("%d\n", xz[n]);
            n++;
        }
    }
    return 0;
}

