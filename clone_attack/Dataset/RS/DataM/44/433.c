int main () {
    int a [6] = {(211 - 211)};
    int j;
    int reverse (int hstANXgw);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 6) {
            scanf ("%d", &a[j]);
            j++;
        };
    }
    for (j = 0; j < 6; j++) {
        printf ("%d\n", reverse (a[j]));
    };
}

int reverse (int hstANXgw) {
    int leziCFdLX;
    int vIkPdu5vc;
    int jud;
    int xwqZk1b;
    int i;
    int oEyvP56;
    leziCFdLX = 0;
    vIkPdu5vc = (432 - 431);
    jud = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    xwqZk1b = -1;
    int a6TCwoH8O [100] = {0};
    if (hstANXgw < 0) {
        jud++;
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
        hstANXgw = -hstANXgw;
    }
    {
        i = 0;
        while (hstANXgw > 0) {
            xwqZk1b++;
            a6TCwoH8O[i] = hstANXgw % 10;
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
            i = i + 1;
            hstANXgw = hstANXgw / 10;
        };
    }
    for (i = 0; i <= xwqZk1b; i++) {
        for (oEyvP56 = 0; oEyvP56 < xwqZk1b - i; oEyvP56++) {
            vIkPdu5vc = vIkPdu5vc * 10;
        }
        leziCFdLX = leziCFdLX + a6TCwoH8O[i] * vIkPdu5vc;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        vIkPdu5vc = 1;
    }
    if (jud) {
        leziCFdLX = 0 - leziCFdLX;
    }
    for (i = 0; i < 100; i++)
        a6TCwoH8O[i] = 0;
    return (leziCFdLX);
}

