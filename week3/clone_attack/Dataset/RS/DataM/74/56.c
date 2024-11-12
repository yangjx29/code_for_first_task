void  main () {
    int r [100];
    int oXCySGt (int);
    int MNPRbMEhyul (int);
    int k;
    int ezvkOxN8Qj;
    int gToP8um9h1;
    int A7J3PVG06;
    int n;
    int x;
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
    int i;
    k = 0;
    ezvkOxN8Qj = 0;
    gToP8um9h1 = 0;
    scanf ("%d %d", &A7J3PVG06, &n);
    for (i = 0; (n - A7J3PVG06) >= i; i = i + 1) {
        x = A7J3PVG06 +i;
        ezvkOxN8Qj = MNPRbMEhyul (x);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gToP8um9h1 = oXCySGt (x);
        if (ezvkOxN8Qj && gToP8um9h1) {
            r[k] = x;
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
            k = k + 1;
        };
    }
    if (k > 0) {
        printf ("%d", r[0]);
        for (i = (23 - 22); i < k; i++)
            printf (",%d", r[i]);
    }
    else {
        if (!(0 != k))
            printf ("no");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("\n");
}

int MNPRbMEhyul (int x) {
    int ezvkOxN8Qj;
    int ucaBusoQGg;
    int IGegtX2;
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
    ezvkOxN8Qj = 1;
    IGegtX2 = sqrt (x) + 1;
    for (ucaBusoQGg = 2; IGegtX2 > ucaBusoQGg; ucaBusoQGg = ucaBusoQGg + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (x % ucaBusoQGg == 0) {
            ezvkOxN8Qj = 0;
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
            break;
        };
    }
    return (ezvkOxN8Qj);
}

int oXCySGt (int x) {
    int IGegtX2;
    int gToP8um9h1;
    int n;
    int ucaBusoQGg;
    IGegtX2 = 10;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    gToP8um9h1 = 1;
    int a [5];
    if (9999 < x)
        n = 5;
    else {
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
        if (999 < x && 10000 > x)
            n = 4;
        else {
            if (x > 99 && x < 1000)
                n = 3;
            else if (x > 9 && x < 100)
                n = 2;
            else
                n = 1;
        };
    }
    {
        ucaBusoQGg = 0;
        while (ucaBusoQGg < n) {
            a[ucaBusoQGg] = (x % IGegtX2) * 10 / IGegtX2;
            IGegtX2 = IGegtX2 *10;
            x = x - a[ucaBusoQGg];
            ucaBusoQGg++;
        };
    }
    for (ucaBusoQGg = 0; ucaBusoQGg < n / 2; ucaBusoQGg = ucaBusoQGg + 1) {
        if (a[ucaBusoQGg] != a[n - ucaBusoQGg - 1]) {
            gToP8um9h1 = 0;
            break;
        };
    }
    return (gToP8um9h1);
}

