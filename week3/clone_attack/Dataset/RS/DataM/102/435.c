main () {
    double  c;
    struct   line {
        char ibRsjW [10];
        double  y;
    };
    int n, a, b, poGjCplS;
    struct   line *p = (struct   line *) malloc (n * sizeof (struct   line));
    scanf ("%d", &n);
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
    for (a = 0; a <= n - 1; a++) {
        scanf ("%s", ((p + a)->ibRsjW));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &((p + a)->y));
    }
    {
        a = 0;
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
        while (a <= n - 2) {
            if (*((p + a)->ibRsjW) == 'm') {
                for (b = a + 1; b <= n - 1; b++) {
                    if (*((p + b)->ibRsjW) == 'm') {
                        if (((p + b)->y) < ((p + a)->y)) {
                            c = (p + b)->y;
                            ((p + b)->y) = ((p + a)->y);
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
                            ((p + a)->y) = c;
                        }
                        else
                            ;
                    }
                    else
                        ;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            else {
                b = a + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (b <= n - 1) {
                    if (*((p + b)->ibRsjW) == 'f') {
                        if (((p + b)->y) > ((p + a)->y)) {
                            c = (p + b)->y;
                            ((p + b)->y) = ((p + a)->y);
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            ((p + a)->y) = c;
                        }
                        else
                            ;
                    }
                    else
                        ;
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
            a++;
        };
    }
    {
        a = 0;
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
        while (a <= n - 1) {
            if (*((p + a)->ibRsjW) == 'm')
                printf ("%.2lf ", ((p + a)->y));
            else
                ;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            a++;
        };
    }
    {
        a = 0;
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
        while (a <= n - 1) {
            if (*((p + a)->ibRsjW) == 'f')
                poGjCplS = a;
            else
                ;
            a++;
        };
    }
    {
        a = 0;
        while (a <= n - 1) {
            if (*((p + a)->ibRsjW) == 'f') {
                if (a != poGjCplS)
                    printf ("%.2lf ", ((p + a)->y));
                else
                    printf ("%.2lf", ((p + a)->y));
            }
            else
                ;
            a++;
        };
    };
}

