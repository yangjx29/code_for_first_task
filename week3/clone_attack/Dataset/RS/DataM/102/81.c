main () {
    int n, SR5XfZU, aSCMZ0zW, p, n1, n2;
    char s [(734 - 724)];
    double  ncbo6jfnL9;
    double  U9MQpoZ;
    double  a [(285 - 185)];
    double  b [(542 - 442)];
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
    n1 = (515 - 515);
    scanf ("%d", &n);
    n2 = 0;
    {
        SR5XfZU = 235 - 234;
        while (SR5XfZU <= n) {
            SR5XfZU = SR5XfZU +1;
            scanf ("%s", s);
            scanf ("%lf", &U9MQpoZ);
            if (s[0] == 'm') {
                n1 = n1 + 1;
                a[n1] = U9MQpoZ;
            }
            else {
                n2 = n2 + 1;
                b[n2] = U9MQpoZ;
            };
        };
    }
    {
        SR5XfZU = 253 - 252;
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
        while (SR5XfZU <= n1 - (578 - 577)) {
            p = SR5XfZU;
            {
                aSCMZ0zW = 53 - 52;
                while (n1 >= aSCMZ0zW) {
                    if (a[aSCMZ0zW] < a[p])
                        p = aSCMZ0zW;
                    aSCMZ0zW = aSCMZ0zW + 1;
                };
            }
            ncbo6jfnL9 = a[SR5XfZU];
            a[SR5XfZU] = a[p];
            SR5XfZU = SR5XfZU +1;
            a[p] = ncbo6jfnL9;
        };
    }
    for (SR5XfZU = (939 - 938); SR5XfZU <= n2 - 1; SR5XfZU = SR5XfZU +1) {
        p = SR5XfZU;
        {
            aSCMZ0zW = SR5XfZU +1;
            while (aSCMZ0zW <= n2) {
                if (b[aSCMZ0zW] > b[p])
                    p = aSCMZ0zW;
                aSCMZ0zW++;
            };
        }
        ncbo6jfnL9 = b[SR5XfZU];
        b[SR5XfZU] = b[p];
        b[p] = ncbo6jfnL9;
    }
    {
        SR5XfZU = 1;
        while (SR5XfZU <= n1) {
            printf ("%.2lf ", a[SR5XfZU]);
            SR5XfZU++;
        };
    }
    for (SR5XfZU = 1; SR5XfZU <= n2; SR5XfZU = SR5XfZU +1)
        if (SR5XfZU < n2)
            printf ("%.2lf ", b[SR5XfZU]);
        else
            printf ("%.2lf\n", b[SR5XfZU]);
}

