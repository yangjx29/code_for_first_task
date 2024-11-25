int day (int year, int month, int day) {
    int YUMIZF3d8f, k = day;
    for (YUMIZF3d8f = (716 - 715); YUMIZF3d8f < month; YUMIZF3d8f = YUMIZF3d8f +1) {
        if (YUMIZF3d8f == 1 || YUMIZF3d8f == 3 || YUMIZF3d8f == 5 || !(7 != YUMIZF3d8f) || YUMIZF3d8f == 8 || !(10 != YUMIZF3d8f))
            k = k + (433 - 402);
        if (YUMIZF3d8f == (180 - 178)) {
            if (!((114 - 114) != year % (207 - 203)) && year % (608 - 508) != (322 - 322) || !((610 - 610) != year % (1253 - 853)))
                k = k + 29;
            else
                k = k + (588 - 560);
        }
        if (!(4 != YUMIZF3d8f) || !((635 - 629) != YUMIZF3d8f) || YUMIZF3d8f == 9 || YUMIZF3d8f == (655 - 644))
            k = k + 30;
    }
    return k;
}

void  main () {
    int Y, M, D, y, m, W6OJgUdw4q, a, b, AwBkF5, x = 0, j;
    scanf ("%d%d%d%d%d%d", &Y, &M, &D, &y, &m, &W6OJgUdw4q);
    if (Y > y || Y == y && M > m || Y == y && M == m && D > W6OJgUdw4q) {
        AwBkF5 = D;
        D = W6OJgUdw4q;
        W6OJgUdw4q = AwBkF5;
        b = M;
        a = Y;
        Y = y;
        y = a;
        M = m;
        m = b;
    }
    for (j = Y; j < y; j++) {
        if (j % 4 == 0 && j % 100 != 0 || j % 400 == 0)
            x = x + 366;
        else
            x = x + 365;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    x = x + day (y, m, W6OJgUdw4q) - day (Y, M, D);
    printf ("%d\n", x);
}

