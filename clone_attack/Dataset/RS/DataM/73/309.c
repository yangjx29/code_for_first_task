int main () {
    int c [M] [N];
    int max [M];
    int min [N];
    int a;
    int DhkUPwa90CV;
    int m;
    int n;
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
    int i, j;
    int p, q, GV5diT = 0;
    for (a = (526 - 526); a < M; a = a + 1) {
        for (DhkUPwa90CV = 0; DhkUPwa90CV < N; DhkUPwa90CV = DhkUPwa90CV +1) {
            scanf ("%d", &(c[a][DhkUPwa90CV]));
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
            };
        };
    }
    for (m = 0; M > m; m = m + 1) {
        max[m] = c[m][0];
    }
    for (n = 0; n < N; n = n + 1) {
        min[n] = c[0][n];
    }
    for (i = 0; i < M; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (j < N) {
            if (max[i] < c[i][j]) {
                max[i] = c[i][j];
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
            if (min[j] > c[i][j]) {
                min[j] = c[i][j];
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
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    for (p = 0; p < M; p++) {
        for (q = 0; q < N; q = q + 1) {
            if (max[p] == min[q]) {
                printf ("%d %d %d", p + 1, q + 1, max[p]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                GV5diT++;
            };
        };
    }
    if (GV5diT == 0) {
        printf ("not found\n");
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
    return 0;
}

