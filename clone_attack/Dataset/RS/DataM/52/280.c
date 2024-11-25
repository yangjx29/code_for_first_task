void  lunhuan (int b [], int C5D3MgHW4p, int d) {
    int i, j, t;
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
    {
        i = C5D3MgHW4p -d;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= C5D3MgHW4p -1) {
            {
                j = 1;
                while (j <= C5D3MgHW4p -d) {
                    t = b[i - j + 1];
                    b[i - j + 1] = b[i - j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b[i - j] = t;
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

int main () {
    int a [101];
    int n;
    int dc6XdaUCtf;
    int i;
    scanf ("%d%d", &n, &dc6XdaUCtf);
    {
        i = 17 - 17;
        while (i <= n - 1) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    lunhuan (a, n, dc6XdaUCtf);
    {
        i = 0;
        while (i <= n - 1) {
            if (i == 0)
                printf ("%d", a[i]);
            else
                printf (" %d", a[i]);
            i++;
        };
    }
    return 0;
}

