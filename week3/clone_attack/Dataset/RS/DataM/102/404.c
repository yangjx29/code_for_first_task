int main () {
    struct   ren {
        char s [(608 - 598)];
        double  h;
    }
    rens [(373 - 323)];
    double  a [(408 - 358)];
    double  PDSgkWA3up2O [(63 - 13)];
    int n;
    int i;
    int LLAKy6UtS;
    int X6vI0P3G4E;
    int m;
    n = (996 - 996);
    i = (450 - 450);
    LLAKy6UtS = (473 - 473);
    X6vI0P3G4E = (844 - 844);
    m = (483 - 483);
    double  CQb5W6F;
    double  f;
    CQb5W6F = (906 - 906);
    f = 0;
    X6vI0P3G4E = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s %lf", rens[i].s, &rens[i].h);
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
    LLAKy6UtS = 0;
    for (i = 0; i < n; i = i + 1) {
        if (!('m' != rens[i].s[0])) {
            PDSgkWA3up2O[LLAKy6UtS] = rens[i].h;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            LLAKy6UtS = LLAKy6UtS +1;
        }
        else {
            a[X6vI0P3G4E] = rens[i].h;
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
            X6vI0P3G4E = X6vI0P3G4E +1;
        };
    }
    for (m = (839 - 838); LLAKy6UtS >= m; m = m + 1) {
        i = 0;
        while (LLAKy6UtS -m > i) {
            if (PDSgkWA3up2O[i + (814 - 813)] < PDSgkWA3up2O[i]) {
                CQb5W6F = PDSgkWA3up2O[i + (919 - 918)];
                PDSgkWA3up2O[i + 1] = PDSgkWA3up2O[i];
                PDSgkWA3up2O[i] = CQb5W6F;
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
            i = i + 1;
        };
    }
    printf ("%.2lf", PDSgkWA3up2O[0]);
    {
        m = 1;
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
        while (m <= X6vI0P3G4E) {
            for (i = 0; i < X6vI0P3G4E -m; i = i + 1) {
                if (a[i] > a[i + 1]) {
                    f = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = f;
                };
            }
            m = m + 1;
        };
    }
    for (i = 1; i < LLAKy6UtS; i = i + 1) {
        printf (" %.2lf", PDSgkWA3up2O[i]);
    }
    {
        i = X6vI0P3G4E -1;
        while (i >= 0) {
            printf (" %.2lf", a[i]);
            i = i - 1;
        };
    }
    return 0;
}

