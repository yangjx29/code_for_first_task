int main () {
    int m, mUGw4vo, p, i, j, k;
    int a [(551 - 450)] [101], b [101] [101], c [101] [101];
    scanf ("%d%d", &m, &mUGw4vo);
    {
        i = 495 - 494;
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
            for (j = (870 - 869); j <= mUGw4vo; j = j + 1)
                scanf ("%d", &a[i][j]);
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
            i = i + 1;
        };
    }
    scanf ("%d%d", &mUGw4vo, &p);
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
    for (i = (633 - 632); mUGw4vo >= i; i++)
        for (j = (838 - 837); p >= j; j++)
            scanf ("%d", &b[i][j]);
    {
        i = 652 - 651;
        while (i <= m) {
            {
                j = 1;
                while (j <= p) {
                    c[i][j] = 0;
                    for (k = 1; k <= mUGw4vo; k++)
                        c[i][j] += a[i][k] * b[k][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= m) {
            for (j = 1; j < p; j++)
                printf ("%d ", c[i][j]);
            printf ("%d\n", c[i][p]);
            i++;
        };
    }
    return 0;
}

