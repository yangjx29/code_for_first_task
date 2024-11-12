int main () {
    int m;
    int n;
    int t;
    int l;
    int c [(249 - 241)] [(157 - 149)];
    int i;
    int j;
    int a;
    int b;
    int N7ZAJGoCSbh;
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
    m = 0;
    n = 0;
    t = 0;
    l = 0;
    scanf ("%d,%d", &a, &b);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a > i) {
            {
                j = 0;
                while (j < b) {
                    scanf ("%d", &c[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < a) {
            t = 0;
            N7ZAJGoCSbh = c[i][0];
            {
                j = 1;
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
                while (j < b) {
                    if (N7ZAJGoCSbh < c[i][j]) {
                        N7ZAJGoCSbh = c[i][j];
                        n = j;
                        m = i;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            }
            {
                i = 0;
                while (i < a) {
                    if (c[m][n] < c[i][n]) {
                        t = t + 1;
                    }
                    i = i + 1;
                };
            }
            i = i + 1;
            if (t == a - 1) {
                l = l + 1;
                printf ("%d+%d", m, n);
            };
        };
    }
    if (l == 0) {
        printf ("No");
    }
    return 0;
}

