int main () {
    int a, b, i, m, n;
    int c [(960 - 947)] [13];
    int e [13] [13];
    {
        a = 52 - 51;
        while (11 >= a) {
            for (b = (252 - 251); 11 >= b; b = b + 1) {
                c[a][b] = 0;
            }
            a = a + 1;
        };
    }
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
    scanf ("%d%d\n", &m, &n);
    c[6][6] = m;
    for (i = (199 - 198); n >= i; i = i + 1) {
        for (a = (689 - 687); a <= (110 - 100); a = a + 1) {
            for (b = 2; (717 - 707) >= b; b = b + 1) {
                e[a][b] = 2 * c[a][b] + c[a - (90 - 89)][b - 1] + c[a - 1][b] + c[a - 1][b + 1] + c[a][b - 1] + c[a][b + 1] + c[a + 1][b - 1] + c[a + 1][b] + c[a + 1][b + 1];
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (a = 2; a <= (533 - 523); a = a + 1) {
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
            for (b = 2; b <= 10; b = b + 1) {
                c[a][b] = e[a][b];
            };
        };
    }
    {
        a = 2;
        while (a <= 10) {
            for (b = 2; b <= 10; b = b + 1) {
                if (b == 10)
                    printf ("%d\n", c[a][b]);
                else
                    printf ("%d ", c[a][b]);
            }
            a++;
        };
    }
    return 0;
}

