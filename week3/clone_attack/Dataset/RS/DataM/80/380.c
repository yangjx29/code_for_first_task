void  main () {
    int i, j, l1 = 0, l2 = 0;
    int m [13] = {(885 - 885), (710 - 679), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y1;
    int m1;
    int d1;
    int y2;
    int m2;
    int d2;
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
    scanf ("%d%d%d%d%d%d", &y1, &m1, &d1, &y2, &m2, &d2);
    {
        i = 644 - 643;
        while (m1 > i) {
            l1 = l1 + m[i];
            i = i + 1;
        };
    }
    l1 = l1 + d1;
    if ((y1 % 4 == 0 && !(0 == y1 % (927 - 827))) || (y1 % 400 == 0)) {
        if (m1 > 2)
            l1 = l1 + (826 - 825);
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < m2) {
            l2 = l2 + m[i];
            i = i + 1;
        };
    }
    l2 = l2 + d2;
    if ((!(0 != y2 % 4) && y2 % 100 != 0) || (y2 % 400 == 0)) {
        if (m2 > 2)
            l2 = l2 + 1;
    }
    if (y1 != y2) {
        j = y1;
        while (j < y2) {
            l2 = l2 + 365;
            if ((j % 4 == 0 && j % 100 != 0) || (j % 400 == 0))
                l2 = l2 + 1;
            j = j + 1;
        };
    }
    printf ("%d", l2 - l1);
}

