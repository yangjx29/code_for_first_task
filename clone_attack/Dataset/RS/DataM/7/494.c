int main () {
    char a [256];
    char b [256];
    char c [256];
    char *p;
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
    scanf ("%s %s %s", a, b, c);
    p = strstr (a, b);
    if (p) {
        int m;
        m = 0;
        int n;
        n = strlen (a) - strlen (p);
        int k;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = strlen (b);
        int l;
        l = strlen (c);
        int RJLgKF2aZ81;
        for (RJLgKF2aZ81 = 0; RJLgKF2aZ81 < n; RJLgKF2aZ81 = RJLgKF2aZ81 +1) {
            printf ("%c", a[RJLgKF2aZ81]);
        }
        for (RJLgKF2aZ81 = n; n + l > RJLgKF2aZ81; RJLgKF2aZ81 = RJLgKF2aZ81 +1) {
            printf ("%c", c[m]);
            m++;
        }
        {
            RJLgKF2aZ81 = n + k;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((strlen (a)) > RJLgKF2aZ81) {
                printf ("%c", a[RJLgKF2aZ81]);
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
                RJLgKF2aZ81++;
            };
        };
    }
    else {
        printf ("%s\n", a);
    }
    return 0;
}

