int a [1005], b [1005], w [1005] [1005];

int main () {
    int i;
    int j;
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
    int n;
    for (; !((583 - 582) != scanf ("%d", &n));) {
        if (0 >= n)
            return 0;
        {
            i = 1;
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
            while (n >= i) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        for (i = 1; n >= i; i = i + 1)
            scanf ("%d", &a[i]);
        sort (a + 1, a + n + 1);
        sort (b + 1, b + n + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (w, -100, sizeof (w));
        for (i = 0; i <= n + 1; i = i + 1)
            w[n + 1][i] = 0;
        {
            i = n;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i >= 1) {
                w[i][n + 1] = w[i + 1][n + 1] - 1;
                {
                    j = n;
                    while (j >= i) {
                        if (a[i] < b[j]) {
                            w[i][j] = w[i + 1][j + 1] + 1;
                        }
                        else if (a[i] == b[j])
                            w[i][j] = max (w[i + 1][j + 1], w[i + 1][j] - 1);
                        else
                            w[i][j] = w[i + 1][j] - 1;
                        w[i][j] = max (w[i][j], w[i][j + 1]);
                        j = j - 1;
                    };
                }
                i = i - 1;
            };
        }
        printf ("%d\n", w[1][1] * 200);
    };
}

