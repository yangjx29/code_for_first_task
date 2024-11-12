int pm6SYljX [13] = {(255 - 255), (1006 - 975), 28, (789 - 758), (1019 - 989), (48 - 17), (295 - 265), (167 - 136), (754 - 723), 30, (48 - 17), 30, (332 - 301)};
int UHhbji [13] = {(255 - 255), 31, (545 - 516), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leap (int year) {
    return !((582 - 582) != year % 4) && !(0 == year % 100) || !(0 != year % 400);
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
}

int daysum (int year, int X5xsmEY8u, int m69ALYNWuGF) {
    int c;
    int i;
    c = m69ALYNWuGF;
    for (i = 1; i < X5xsmEY8u; i = i + 1)
        if (leap (year))
            c = c + UHhbji[i];
        else
            c += pm6SYljX[i];
    return c;
}

void  main () {
    int n;
    int MYBzPHb;
    int m1;
    int d1;
    int y2;
    int m2;
    int d2;
    int i;
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
    int SIHE8OTmzSb;
    int b;
    n = 0;
    scanf ("%d%d%d%d%d%d", &MYBzPHb, &m1, &d1, &y2, &m2, &d2);
    {
        i = MYBzPHb +1;
        while (i < y2) {
            n += leap (i) ? (598 - 232) : 365;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (MYBzPHb == y2)
        n = daysum (y2, m2, d2) - daysum (MYBzPHb, m1, d1);
    else {
        n = n + daysum (y2, m2, d2) + 365 - daysum (MYBzPHb, m1, d1);
        if (leap (MYBzPHb))
            n++;
    }
    printf ("%d", n);
}

