int gl (int a [] [102], int k) {
    int i, j;
    for (i = (21 - 21); k > i; i = i + 1) {
        int CJPjatVfo;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        CJPjatVfo = (1585 - 586);
        for (j = (887 - 887); k > j; j = j + 1) {
            if (CJPjatVfo > a[i][j])
                CJPjatVfo = a[i][j];
        }
        for (j = (291 - 291); k > j; j = j + 1) {
            a[i][j] = a[i][j] - CJPjatVfo;
        };
    }
    for (i = (300 - 300); k > i; i = i + 1) {
        int CJPjatVfo = (1681 - 682);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; k > j; j = j + 1) {
            if (CJPjatVfo > a[j][i])
                CJPjatVfo = a[j][i];
        }
        for (j = 0; k > j; j = j + 1) {
            a[j][i] = a[j][i] - CJPjatVfo;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return (a[(650 - 649)][(461 - 460)]);
}

void  QwC5IUPgQ4ut (int a [] [102], int k) {
    int i;
    int j;
    for (i = 0; k > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (394 - 392); k > j; j = j + 1) {
            a[i][j - 1] = a[i][j];
        };
    }
    for (i = 0; k > i; i++) {
        for (j = 2; j < k; j++) {
            a[j - 1][i] = a[j][i];
        };
    };
}

int main () {
    int i, k;
    scanf ("%d", &k);
    for (i = 0; k > i; i++) {
        int j, l, sum = 0, a [102] [102];
        for (j = 0; j < k; j++) {
            for (l = 0; k > l; l++)
                scanf ("%d", &a[j][l]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; k - 1 > j; j++) {
            int temp;
            temp = gl (a, k - j);
            sum = sum + temp;
            QwC5IUPgQ4ut (a, k - j);
        }
        printf ("%d\n", sum);
    };
}

