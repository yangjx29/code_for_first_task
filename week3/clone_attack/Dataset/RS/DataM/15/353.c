int main () {
    int sz [1000] [1000];
    int a, b, c, d;
    int l;
    l = b - d - 1;
    int n;
    int i, j;
    int w = a - c - 1;
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
    int s = l * w;
    printf ("%d", s);
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; n > j; j++) {
            scanf ("%d ", &(sz[i][j]));
        };
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < n) {
            if (!(0 != sz[i][j])) {
                a = i;
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
                b = j;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    for (i = n - 1; 0 <= i; i = i - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = n - 1; j >= 0; j = j - 1) {
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
            if (sz[i][j] == 0) {
                c = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                d = j;
            };
        };
    }
    return 0;
}

