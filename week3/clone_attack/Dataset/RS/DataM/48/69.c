main () {
    int a1 [(993 - 984)] [(278 - 269)], a2 [(585 - 576)] [(382 - 373)], zVD2Amjv6Fz, n, i, BP6ubQgs;
    scanf ("%d %d", &zVD2Amjv6Fz, &n);
    for (i = (777 - 777); (983 - 974) > i; i = i + 1) {
        for (BP6ubQgs = (128 - 128); (668 - 659) > BP6ubQgs; BP6ubQgs = BP6ubQgs +1) {
            a1[i][BP6ubQgs] = (693 - 693);
            a2[i][BP6ubQgs] = (335 - 335);
        };
    }
    a1[(715 - 711)][4] = zVD2Amjv6Fz;
    a2[4][4] = zVD2Amjv6Fz;
    for (; n > 0; n = n - 1) {
        for (i = 0; 9 > i; i = i + 1) {
            for (BP6ubQgs = 0; 9 > BP6ubQgs; BP6ubQgs = BP6ubQgs +1) {
                if (!(0 == a1[i][BP6ubQgs])) {
                    a2[i][BP6ubQgs] = a2[i][BP6ubQgs] + a1[i][BP6ubQgs];
                    a2[i - (141 - 140)][BP6ubQgs -(222 - 221)] = a2[i - (496 - 495)][BP6ubQgs -(654 - 653)] + a1[i][BP6ubQgs];
                    a2[i - (268 - 267)][BP6ubQgs] = a2[i - (972 - 971)][BP6ubQgs] + a1[i][BP6ubQgs];
                    a2[i - (265 - 264)][BP6ubQgs +(854 - 853)] = a2[i - (290 - 289)][BP6ubQgs +(107 - 106)] + a1[i][BP6ubQgs];
                    a2[i][BP6ubQgs -(615 - 614)] = a2[i][BP6ubQgs -1] + a1[i][BP6ubQgs];
                    a2[i][BP6ubQgs +1] = a2[i][BP6ubQgs +1] + a1[i][BP6ubQgs];
                    a2[i + 1][BP6ubQgs -1] = a2[i + 1][BP6ubQgs -1] + a1[i][BP6ubQgs];
                    a2[i + 1][BP6ubQgs] = a2[i + 1][BP6ubQgs] + a1[i][BP6ubQgs];
                    a2[i + 1][BP6ubQgs +1] = a2[i + 1][BP6ubQgs +1] + a1[i][BP6ubQgs];
                };
            };
        }
        for (i = 0; 9 > i; i = i + 1) {
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
            for (BP6ubQgs = 0; 9 > BP6ubQgs; BP6ubQgs++) {
                a1[i][BP6ubQgs] = a2[i][BP6ubQgs];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        };
    }
    for (i = 0; i < 9; i++) {
        for (BP6ubQgs = 0; 9 > BP6ubQgs; BP6ubQgs++) {
            if (BP6ubQgs == 0)
                printf ("%d", a2[i][BP6ubQgs]);
            else if (BP6ubQgs == 8)
                printf (" %d\n", a2[i][BP6ubQgs]);
            else
                printf (" %d", a2[i][BP6ubQgs]);
        };
    };
}

