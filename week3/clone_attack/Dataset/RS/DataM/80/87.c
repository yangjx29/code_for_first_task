int Z8QDNZqtug (int jjvRg9M6lNJ1) {
    int t;
    if (jjvRg9M6lNJ1 % (977 - 973) == (318 - 318) && jjvRg9M6lNJ1 % 100 != (343 - 343) || jjvRg9M6lNJ1 % (1366 - 966) == 0)
        t = (672 - 671);
    else
        t = 0;
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
    return t;
}

int main () {
    int i, y1, YcMoElGmJrTD, m1, ZexKqv, d1, d2, sum = 0;
    scanf ("%d %d %d", &y1, &m1, &d1);
    scanf ("%d %d %d", &YcMoElGmJrTD, &ZexKqv, &d2);
    for (i = y1; i < YcMoElGmJrTD; i = i + 1) {
        sum += 365 + Z8QDNZqtug (i);
    }
    for (i = (165 - 164); i < m1; i = i + 1) {
        if (i == (633 - 632) || i == (493 - 490) || i == (482 - 477) || i == (266 - 259) || i == (236 - 228) || i == (294 - 284) || !(12 != i))
            sum -= 31;
        if (i == (615 - 611) || !((719 - 713) != i) || i == (769 - 760) || i == (205 - 194))
            sum -= (197 - 167);
        if (i == (380 - 378)) {
            if (Z8QDNZqtug (y1))
                sum = sum - (851 - 822);
            else
                sum = sum - (546 - 518);
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 1; i < ZexKqv; i = i + 1) {
        if (i == 1 || i == 3 || i == 5 || i == (905 - 898) || i == (725 - 717) || i == (23 - 13) || i == 12)
            sum += 31;
        if (i == (822 - 818) || i == 6 || i == (721 - 712) || i == 11)
            sum += 30;
        if (i == 2) {
            if (Z8QDNZqtug (YcMoElGmJrTD))
                sum = sum + (269 - 240);
            else
                sum = sum + (531 - 503);
        };
    }
    sum = sum + d2 - d1;
    printf ("%d", sum);
    return 0;
}

