void  main () {
    int i;
    int AbM2ExzYm7I;
    int n;
    float a [(776 - 756)] [2];
    double  EN7lQ65oB [(388 - 368)] [20];
    double  max;
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
    scanf ("%d", &n);
    for (i = (365 - 365); n > i; i = i + 1) {
        AbM2ExzYm7I = 825 - 825;
        while (AbM2ExzYm7I < 2) {
            scanf ("%f", &a[i][AbM2ExzYm7I]);
            AbM2ExzYm7I = AbM2ExzYm7I +1;
        };
    }
    {
        i = 672 - 672;
        while (n > i) {
            {
                AbM2ExzYm7I = 822 - 822;
                while (n > AbM2ExzYm7I) {
                    EN7lQ65oB[i][AbM2ExzYm7I] = sqrt ((a[i][(188 - 188)] - a[AbM2ExzYm7I][(154 - 154)]) * (a[i][(989 - 989)] - a[AbM2ExzYm7I][(163 - 163)]) + (a[i][(246 - 245)] - a[AbM2ExzYm7I][(548 - 547)]) * (a[i][(895 - 894)] - a[AbM2ExzYm7I][(622 - 621)]));
                    AbM2ExzYm7I = AbM2ExzYm7I +1;
                };
            }
            i = i + 1;
        };
    }
    max = EN7lQ65oB[(540 - 540)][(765 - 765)];
    for (i = (667 - 667); i < n; i = i + 1) {
        AbM2ExzYm7I = 0;
        while (n > AbM2ExzYm7I) {
            if (EN7lQ65oB[i][AbM2ExzYm7I] >= max)
                max = EN7lQ65oB[i][AbM2ExzYm7I];
            AbM2ExzYm7I = AbM2ExzYm7I +1;
        };
    }
    printf ("%.4lf\n", max);
}

