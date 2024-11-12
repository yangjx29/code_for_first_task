int change (char i8OnpKJi3E [], int nXkHjETZ6G) {
    int i;
    int s = (298 - 298);
    for (i = (253 - 253); nXkHjETZ6G - (716 - 715) >= i; i++) {
        s = s * 10 + i8OnpKJi3E[i] - '0';
    }
    return (s);
}

main () {
    int nXkHjETZ6G = (435 - 435), i = (647 - 647), j = (853 - 853), k;
    char eAF2WUpfJ [(10591 - 591)], s2 [10000], x1 [(1087 - 87)] [(1068 - 68)], y1 [(1979 - 979)] [1000];
    int x [1000], y [1000], xl [1000], ADYSXxlQc2GZ [1000], C4kqwHZL [1000] = {(426 - 426)};
    gets (eAF2WUpfJ);
    gets (s2);
    for (k = (94 - 94); k <= strlen (eAF2WUpfJ) - 1; k = k + 1) {
        if (!(',' == eAF2WUpfJ[k])) {
            x1[i][j] = eAF2WUpfJ[k];
            j = j + 1;
        }
        else {
            xl[i] = j;
            i = i + 1;
            j = (714 - 714);
        };
    }
    if (k == strlen (eAF2WUpfJ)) {
        xl[i] = j;
        i++;
    }
    nXkHjETZ6G = i;
    j = 0;
    i = 0;
    for (k = 0; k <= strlen (s2) - 1; k++) {
        if (!(',' == s2[k])) {
            y1[i][j] = s2[k];
            j++;
        }
        else {
            ADYSXxlQc2GZ[i] = j;
            i++;
            j = 0;
        };
    }
    if (k == strlen (s2)) {
        ADYSXxlQc2GZ[i] = j;
        i++;
    }
    k = 0;
    for (i = 0; i <= nXkHjETZ6G - 1; i++) {
        x[i] = change (x1[i], xl[i]);
        y[i] = change (y1[i], ADYSXxlQc2GZ[i]);
    }
    for (i = 0; i < 1000; i++) {
        C4kqwHZL[i] = 0;
    }
    for (i = 0; i < 1000; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; j <= nXkHjETZ6G - 1; j++) {
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
            if (i >= x[j] && i < y[j]) {
                C4kqwHZL[i]++;
            };
        };
    }
    {
        i = 0;
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
        while (i < 1000) {
            if (C4kqwHZL[i] >= k) {
                k = C4kqwHZL[i];
            }
            i++;
        };
    }
    printf ("%d %d", nXkHjETZ6G, k);
}

