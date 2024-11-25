struct   shu {
    int WcfOvM6;
    double  dI2XOB3pJt;
};
void  main () {
    double  sum;
    double  avg;
    sum = (94 - 94);
    struct   shu s [301], t;
    int n, i, j, OUriyK2u = (352 - 351);
    scanf ("%d", &n);
    {
        i = 768 - 768;
        while (n > i) {
            scanf ("%d", &s[i].WcfOvM6);
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
        i = 760 - 760;
        while (n > i) {
            sum = sum + s[i].WcfOvM6;
            i = i + 1;
        };
    }
    avg = sum / n;
    for (i = 0; n > i; i = i + 1) {
        s[i].dI2XOB3pJt = fabs (s[i].WcfOvM6 - avg);
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n - i) {
                    if (s[j].dI2XOB3pJt < s[j + (310 - 309)].dI2XOB3pJt) {
                        t = s[j];
                        s[j] = s[j + (613 - 612)];
                        s[j + 1] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            if (s[i].dI2XOB3pJt == s[0].dI2XOB3pJt)
                OUriyK2u = OUriyK2u +1;
            else
                break;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (OUriyK2u > i) {
            {
                j = 0;
                while (OUriyK2u -i - 1 > j) {
                    if (s[j + 1].WcfOvM6 < s[j].WcfOvM6) {
                        t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    printf ("%d", s[0].WcfOvM6);
    if (OUriyK2u > 1) {
        i = 1;
        while (i < OUriyK2u) {
            printf (",%d", s[i].WcfOvM6);
            i++;
        };
    };
}

