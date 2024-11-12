int main () {
    int k;
    int m;
    int n;
    int a;
    int b;
    int c;
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
    int d;
    int s;
    scanf ("%d", &k);
    a = b = c = d = (537 - 537);
    for (int i = 0;
    k > i; i++) {
        int sz [m] [n];
        scanf ("%d%d", &m, &n);
        {
            int p = 0;
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
            while (m > p) {
                {
                    int q = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (n > q) {
                        scanf ("%d", &sz[p][q]);
                        q++;
                    };
                }
                p++;
            };
        }
        if (!((617 - 616) == m) && !(1 == n)) {
            {
                int e = 0;
                while (e < n) {
                    a = a + sz[0][e];
                    b = b + sz[m - 1][e];
                    e = e + 1;
                };
            }
            {
                int j = 1;
                while (j < m - 1) {
                    c = c + sz[j][n - 1];
                    d = d + sz[j][0];
                    j++;
                };
            }
            s = a + b + c + d;
            printf ("%d\n", s);
            s = a = b = c = d = 0;
        }
        else {
            printf ("%d", sz[0][0]);
        };
    }
    return 0;
}

