int xqdTVio, DY6K9RA1g [(952 - 852)];
char ans [(868 - 768)] [(461 - 361)];

void  minus (char oSJoAR [(601 - 501)], char d [(132 - 32)]) {
    int len2;
    int hpzDqKg;
    int jZxdJqapo;
    char e [(569 - 469)];
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
    DY6K9RA1g[xqdTVio] = strlen (oSJoAR);
    len2 = strlen (d);
    {
        hpzDqKg = 137 - 137;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hpzDqKg < DY6K9RA1g[xqdTVio]) {
            e[hpzDqKg] = '0';
            hpzDqKg = hpzDqKg + 1;
        };
    }
    {
        hpzDqKg = xqdTVio;
        while (hpzDqKg < DY6K9RA1g[xqdTVio]) {
            e[hpzDqKg] = d[hpzDqKg - DY6K9RA1g[xqdTVio] + len2];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hpzDqKg = hpzDqKg + 1;
        };
    }
    {
        hpzDqKg = 530 - 530;
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
        while (hpzDqKg < DY6K9RA1g[xqdTVio] - (743 - 742)) {
            jZxdJqapo = DY6K9RA1g[xqdTVio] - (726 - 725) - hpzDqKg;
            if (oSJoAR[jZxdJqapo] >= e[jZxdJqapo])
                ans[xqdTVio][jZxdJqapo] = oSJoAR[jZxdJqapo] - e[jZxdJqapo] + '0';
            else {
                ans[xqdTVio][jZxdJqapo] = oSJoAR[jZxdJqapo] - e[jZxdJqapo] + '0' + (309 - 299);
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
                oSJoAR[jZxdJqapo - (132 - 131)] = oSJoAR[jZxdJqapo - (113 - 112)] - 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            hpzDqKg++;
        };
    }
    ans[xqdTVio][(751 - 751)] = oSJoAR[(856 - 856)] - e[(903 - 903)] + '0';
}

void  main () {
    int hFsTk9y4XfGd;
    int hpzDqKg;
    int jZxdJqapo;
    int k;
    char t02wOh4TLlo [100] [100];
    char dHS6mjW [100] [100];
    scanf ("%d", &hFsTk9y4XfGd);
    for (hpzDqKg = (85 - 85); hpzDqKg < hFsTk9y4XfGd; hpzDqKg++) {
        scanf ("%s", t02wOh4TLlo[hpzDqKg]);
        scanf ("%s", dHS6mjW[hpzDqKg]);
    }
    for (xqdTVio = (545 - 545); xqdTVio < hFsTk9y4XfGd; xqdTVio++) {
        k = (383 - 383);
        minus (t02wOh4TLlo[xqdTVio], dHS6mjW[xqdTVio]);
        for (hpzDqKg = 0; hpzDqKg < 100; hpzDqKg++) {
            if (ans[xqdTVio][hpzDqKg] == '0')
                k = k + 1;
            else
                break;
        }
        {
            jZxdJqapo = k;
            while (jZxdJqapo < DY6K9RA1g[xqdTVio]) {
                printf ("%c", ans[xqdTVio][jZxdJqapo]);
                jZxdJqapo = jZxdJqapo + 1;
            };
        };
    };
}

