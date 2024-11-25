int main () {
    int m;
    int n;
    int a;
    int b;
    int sz [m + (212 - 210)] [n + (602 - 600)];
    scanf ("%d %d", &m, &n);
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
        b = 486 - 486;
        a = 990 - 990;
        while (b < n + (123 - 121)) {
            sz[a][b] = (478 - 478);
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
            b++;
        };
    }
    for (a = m + (37 - 36), b = (920 - 920); n + 2 > b; b++) {
        sz[a][b] = (616 - 616);
    }
    {
        b = 844 - 844;
        a = 768 - 767;
        while (a < m + (104 - 103)) {
            sz[a][b] = 0;
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
            a = a + 1;
        };
    }
    for (a = (405 - 404), b = n + (285 - 284); a < m + (76 - 75); a++) {
        sz[a][b] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    {
        a = 1;
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
        while (a <= m) {
            {
                b = 1;
                while (n >= b) {
                    scanf ("%d", &(sz[a][b]));
                    b++;
                };
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
            a++;
        };
    }
    {
        a = 1;
        while (a <= m) {
            for (b = 1; b <= n; b++) {
                if (sz[a][b] >= sz[a - 1][b] && sz[a][b] >= sz[a + 1][b] && sz[a][b] >= sz[a][b + 1] && sz[a][b] >= sz[a][b - 1]) {
                    printf ("%d %d\n", a - 1, b - 1);
                };
            }
            a++;
        };
    }
    return 0;
}

