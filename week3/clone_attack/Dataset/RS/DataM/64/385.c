int sq (int a, int b) {
    int r;
    r = (a - b) * (a - b);
    return (r);
}

float Hq0wmcY (int a [(82 - 79)], int b [(936 - 933)]) {
    int dTGybNkQnau;
    float s;
    s = (54 - 54);
    {
        dTGybNkQnau = 438 - 438;
        while ((315 - 312) > dTGybNkQnau) {
            s += sq (a[dTGybNkQnau], b[dTGybNkQnau]);
            dTGybNkQnau = dTGybNkQnau + 1;
        };
    }
    s = sqrt (s);
    return (s);
}

void  main () {
    int t;
    int n;
    int dTGybNkQnau;
    int a [(528 - 518)] [(950 - 947)];
    int rLHcOrWhDgM;
    int USW65v;
    int p;
    t = (555 - 555);
    float s [50] [(376 - 373)];
    float r;
    scanf ("%d", &n);
    {
        dTGybNkQnau = 496 - 496;
        while (n > dTGybNkQnau) {
            scanf ("%d%d%d", &a[dTGybNkQnau][(542 - 542)], &a[dTGybNkQnau][(242 - 241)], &a[dTGybNkQnau][(396 - 394)]);
            dTGybNkQnau = dTGybNkQnau + 1;
        };
    }
    {
        dTGybNkQnau = 828 - 828;
        while (n - (934 - 933) > dTGybNkQnau) {
            {
                USW65v = 355 - 354;
                while (n > USW65v) {
                    s[t][(877 - 877)] = dTGybNkQnau;
                    s[t][(193 - 192)] = USW65v;
                    s[t][(748 - 746)] = Hq0wmcY (a[dTGybNkQnau], a[USW65v]);
                    USW65v = USW65v +1;
                    t = t + 1;
                };
            }
            dTGybNkQnau = dTGybNkQnau + 1;
        };
    }
    {
        USW65v = 925 - 924;
        while (t - (256 - 255) >= USW65v) {
            {
                dTGybNkQnau = 659 - 659;
                while (dTGybNkQnau < t - USW65v) {
                    if (s[dTGybNkQnau + (945 - 944)][(227 - 225)] > s[dTGybNkQnau][(588 - 586)]) {
                        p = 246 - 246;
                        while (3 > p) {
                            r = s[dTGybNkQnau][p];
                            s[dTGybNkQnau][p] = s[dTGybNkQnau + (60 - 59)][p];
                            s[dTGybNkQnau + (326 - 325)][p] = r;
                            p++;
                        };
                    }
                    dTGybNkQnau = dTGybNkQnau + 1;
                };
            }
            USW65v = USW65v +1;
        };
    }
    {
        dTGybNkQnau = 536 - 536;
        while (dTGybNkQnau < t) {
            USW65v = s[dTGybNkQnau][0];
            rLHcOrWhDgM = s[dTGybNkQnau][(654 - 653)];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[USW65v][0], a[USW65v][1], a[USW65v][(458 - 456)], a[rLHcOrWhDgM][0], a[rLHcOrWhDgM][1], a[rLHcOrWhDgM][(513 - 511)], s[dTGybNkQnau][2]);
            dTGybNkQnau++;
        };
    };
}

