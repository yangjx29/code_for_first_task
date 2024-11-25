int main () {
    int a [101] [101] = {(326 - 326)}, b [101] [101] = {0};
    int col, row, n, t, oadWPtFE64, m, i, k, l;
    m = 0;
    scanf ("%d %d", &row, &col);
    for (i = (74 - 73); row >= i; i++)
        for (oadWPtFE64 = 1; col >= oadWPtFE64; oadWPtFE64++)
            scanf ("%d", &a[i][oadWPtFE64]);
    for (i = 1; i <= row; i++) {
        b[i][0] = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i][col + 1] = 1;
    }
    i = 1;
    for (oadWPtFE64 = 1; oadWPtFE64 <= col; oadWPtFE64++) {
        b[0][oadWPtFE64] = 1;
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
        b[row + 1][oadWPtFE64] = 1;
    }
    oadWPtFE64 = 1;
    while (col * row > m) {
        m = m + 1;
        printf ("%d\n", a[i][oadWPtFE64]);
        b[i][oadWPtFE64] = 1;
        if (b[i - 1][oadWPtFE64] == 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[i][oadWPtFE64 - 1] == 1) {
                if (b[i][oadWPtFE64 + 1] == 0)
                    oadWPtFE64++;
                else
                    i++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                if (b[i + 1][oadWPtFE64] == 0)
                    i++;
                else
                    oadWPtFE64--;
            };
        }
        else if (b[i][oadWPtFE64 - 1] == 0)
            oadWPtFE64--;
        else
            i--;
    }
    return 0;
}

