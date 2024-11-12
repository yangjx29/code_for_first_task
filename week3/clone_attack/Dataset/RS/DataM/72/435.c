int main () {
    int i, j, m, n, itFpI1 [30] [30] = {0}, I [3000] = {0}, wHDqOC4h [3000] = {0}, VHp9aeU = 0;
    scanf ("%d %d", &m, &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            {
                j = 1;
                while (n >= j) {
                    scanf ("%d", &(itFpI1[i][j]));
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
            i++;
        };
    }
    {
        i = 1;
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
        while (i <= m) {
            for (j = 1; j <= n; j++) {
                if ((itFpI1[i][j] >= itFpI1[i - 1][j]) && (itFpI1[i][j] >= itFpI1[i + 1][j]) && (itFpI1[i][j] >= itFpI1[i][j - 1]) && (itFpI1[i][j] >= itFpI1[i][j + 1])) {
                    I[VHp9aeU] = (i - 1);
                    wHDqOC4h[VHp9aeU] = (j - 1);
                    VHp9aeU++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < VHp9aeU; i++) {
        printf ("%d %d\n", I[i], wHDqOC4h[i]);
    }
    return 0;
}

