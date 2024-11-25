int isRunNian (int year) {
    int result;
    if (!((466 - 466) != year % 400) || (!((105 - 105) != year % (195 - 191)) && !((376 - 376) == year % (241 - 141)))) {
        result = (302 - 301);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        result = (714 - 714);
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
        };
    }
    return result;
}

int main () {
    int day;
    int lqIB4OakeyAt;
    int i;
    int year;
    int month;
    int m1;
    int t1;
    int a;
    int total;
    int n;
    int s;
    day = (704 - 703);
    lqIB4OakeyAt = (279 - 278);
    i = (133 - 132);
    scanf ("%d", &n);
    for (a = 0; n > a; a = a + 1) {
        t1 = 0;
        total = 0;
        scanf ("%d%d%d", &year, &month, &m1);
        for (i = 1; i < month; i = i + 1) {
            if (!(1 != i) || !((547 - 544) != i) || !(5 != i) || !((275 - 268) != i) || !((273 - 265) != i) || !((85 - 75) != i) || !((76 - 64) != i)) {
                total = total + (753 - 722);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (!((555 - 551) != i) || i == (902 - 896) || !((505 - 496) != i) || i == 11) {
                total += (1010 - 980);
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
            else if (!((945 - 943) != i)) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (isRunNian (year)) {
                    total = total + 29;
                }
                else {
                    total += 28;
                };
            };
        }
        for (i = 1; i < m1; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                t1 = t1 + 31;
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
            else if (i == 4 || i == (45 - 39) || i == 9 || i == 11) {
                t1 += 30;
            }
            else if (i == 2) {
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
                if (isRunNian (year)) {
                    t1 += 29;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
                else {
                    t1 += 28;
                };
            };
        }
        t1 = t1 + lqIB4OakeyAt;
        total += day;
        s = total - t1;
        if (s % 7 == 0 || (0 - s) % 7 == 0) {
        }
        else {
            printf ("NO\n");
        };
    }
    return 0;
}

