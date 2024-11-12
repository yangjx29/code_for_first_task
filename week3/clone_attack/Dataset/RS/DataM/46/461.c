int main () {
    int isPzLRCr, n, sz [100] [100], x, Rw5IUa, z, a, ufiPS9Z, w = 0, i;
    scanf ("%d %d", &isPzLRCr, &n);
    {
        int p = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (isPzLRCr > p) {
            {
                int hQ0h8DGRTW = 0;
                while (hQ0h8DGRTW < n) {
                    scanf ("%d", &sz[p][hQ0h8DGRTW]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hQ0h8DGRTW = hQ0h8DGRTW + 1;
                };
            }
            p = p + 1;
        };
    }
    if (isPzLRCr > n)
        i = n;
    else
        i = isPzLRCr;
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
    for (x = 0; x < i / 2; x = x + 1) {
        for (Rw5IUa = 0 + x; Rw5IUa < n - (387 - 386) - x; Rw5IUa = Rw5IUa +1) {
            printf ("%d\n", sz[x][Rw5IUa]);
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
            z = 0 + x;
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
            while (z < isPzLRCr - (402 - 401) - x) {
                printf ("%d\n", sz[z][Rw5IUa]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                z = z + 1;
            };
        }
        for (a = n - 1 - x; a > 0 + x; a = a - 1) {
            printf ("%d\n", sz[z][a]);
        }
        for (ufiPS9Z = isPzLRCr - 1 - x; ufiPS9Z > 0 + x; ufiPS9Z = ufiPS9Z - 1) {
            printf ("%d\n", sz[ufiPS9Z][a]);
        };
    }
    if (!(1 != isPzLRCr % 2) && n >= isPzLRCr) {
        w = isPzLRCr / 2;
        for (Rw5IUa = w; Rw5IUa <= n - 1 - w; Rw5IUa = Rw5IUa +1)
            printf ("%d\n", sz[w][Rw5IUa]);
    }
    else if (n % 2 == 1 && isPzLRCr >= n) {
        w = n / 2;
        for (x = w; x <= isPzLRCr - 1 - w; x = x + 1)
            printf ("%d\n", sz[x][w]);
    }
    return 0;
}

