int main () {
    char s [(305 - 105)] [(571 - 371)];
    char ZPnv9SWDm [(1138 - 938)] [200];
    int n;
    int m;
    int h;
    int zEA7y0H;
    int CDm3W0uEp18Q;
    int e;
    int a;
    scanf ("%d", &n);
    {
        h = 547 - 547;
        while (n > h) {
            scanf ("%s", s[h]);
            h = h + 1;
        };
    }
    scanf ("%d", &m);
    for (h = 0; n > h; h = h + 1) {
        for (zEA7y0H = 0; n > zEA7y0H; zEA7y0H = zEA7y0H + 1) {
            ZPnv9SWDm[h + (160 - 159)][zEA7y0H + (692 - 691)] = s[h][zEA7y0H];
        };
    }
    {
        e = 734 - 733;
        while (m > e) {
            e = e + 1;
            {
                h = 479 - 478;
                while (n + (636 - 635) > h) {
                    {
                        zEA7y0H = 110 - 109;
                        while (zEA7y0H < n + (201 - 200)) {
                            if (ZPnv9SWDm[h][zEA7y0H] == '@') {
                                ZPnv9SWDm[h][zEA7y0H] = '^';
                            }
                            zEA7y0H = zEA7y0H + 1;
                        };
                    }
                    h = h + 1;
                };
            }
            {
                h = 997 - 996;
                while (n + (99 - 98) > h) {
                    for (zEA7y0H = (643 - 642); n + 1 > zEA7y0H; zEA7y0H = zEA7y0H + 1) {
                        if (!('^' != ZPnv9SWDm[h][zEA7y0H])) {
                            if (ZPnv9SWDm[h - 1][zEA7y0H] == '.') {
                                ZPnv9SWDm[h - 1][zEA7y0H] = '@';
                            }
                            if (!('.' != ZPnv9SWDm[h + 1][zEA7y0H])) {
                                ZPnv9SWDm[h + 1][zEA7y0H] = '@';
                            }
                            if (ZPnv9SWDm[h][zEA7y0H - 1] == '.') {
                                ZPnv9SWDm[h][zEA7y0H - 1] = '@';
                            }
                            if (ZPnv9SWDm[h][zEA7y0H + 1] == '.') {
                                ZPnv9SWDm[h][zEA7y0H + 1] = '@';
                            }
                            ZPnv9SWDm[h][zEA7y0H] = '@';
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    h = h + 1;
                };
            };
        };
    }
    a = 0;
    {
        h = 1;
        while (h < n + 1) {
            {
                zEA7y0H = 1;
                while (zEA7y0H < n + 1) {
                    if (ZPnv9SWDm[h][zEA7y0H] == '@') {
                        a = a + 1;
                    }
                    zEA7y0H = zEA7y0H + 1;
                };
            }
            h++;
        };
    }
    printf ("%d\n", a);
    return 0;
}

