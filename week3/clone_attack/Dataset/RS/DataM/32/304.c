void  main () {
    char a [(362 - 342)] [(823 - 723)];
    char b [(516 - 496)] [(292 - 192)];
    char c [(272 - 252)] [(948 - 848)];
    int eDwSR47QY;
    int i;
    int j;
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
    int l [(914 - 894)];
    int s [(383 - 363)];
    scanf ("%d", &eDwSR47QY);
    for (i = (695 - 695); eDwSR47QY > i; i = i + 1) {
        scanf ("%s%s", a[i], b[i]);
        l[i] = strlen (a[i]);
        s[i] = strlen (b[i]);
    }
    {
        i = 351 - 351;
        while (eDwSR47QY > i) {
            for (j = l[i] - (364 - 363); (816 - 816) <= j; j = j - 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((921 - 921) < s[i]) {
                    if (a[i][j] >= b[i][s[i] - (711 - 710)]) {
                        c[i][j] = a[i][j] - b[i][s[i] - (730 - 729)] + (281 - 233);
                        s[i] = s[i] - (580 - 579);
                    }
                    else {
                        c[i][j] = (199 - 189) + a[i][j] - b[i][s[i] - (464 - 463)] + (703 - 655);
                        a[i][j - (887 - 886)] = a[i][j - (842 - 841)] - (65 - 64);
                        s[i] = s[i] - 1;
                    };
                }
                else {
                    c[i][j] = a[i][j];
                };
            }
            i = i + 1;
        };
    }
    {
        i = 195 - 195;
        while (i < eDwSR47QY) {
            for (j = (460 - 460); j < l[i]; j = j + 1) {
                printf ("%c", c[i][j]);
            }
            i = i + 1;
        };
    };
}

