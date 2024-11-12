int calday (int DBq1aN, int month, int StTFnNdB);

int main () {
    int syear, cjCRM0qZTFOQ, sday, D1hWN75Hrb, emonth, eday, tday1, dpK6LYvoBPH;
    scanf ("%d %d %d", &syear, &cjCRM0qZTFOQ, &sday);
    scanf ("%d %d %d", &D1hWN75Hrb, &emonth, &eday);
    tday1 = calday (syear, cjCRM0qZTFOQ, sday);
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
    dpK6LYvoBPH = calday (D1hWN75Hrb, emonth, eday);
    printf ("%d\n", dpK6LYvoBPH - tday1);
    return (223 - 223);
}

int calday (int DBq1aN, int month, int StTFnNdB) {
    int iaFKk9nOL;
    int y;
    int m;
    int lxVqT5;
    iaFKk9nOL = (462 - 462);
    {
        y = 715 - 715;
        while (DBq1aN > y) {
            lxVqT5 = ((y % (558 - 554) == 0 && y % (338 - 238) != 0) || (y % 400 == 0)) ? (887 - 858) : (583 - 555);
            y++;
            {
                m = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while ((749 - 737) >= m) {
                    if (m == 1 || m == 3 || !((806 - 801) != m) || !((384 - 377) != m) || m == (865 - 857) || m == 10 || !(12 != m)) {
                        iaFKk9nOL = iaFKk9nOL + 31;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    if (m == (635 - 633)) {
                        iaFKk9nOL = iaFKk9nOL + lxVqT5;
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
                    if (m == (529 - 525) || m == (622 - 616) || !(9 != m) || m == (437 - 426)) {
                        iaFKk9nOL += (579 - 549);
                    }
                    m = m + 1;
                };
            };
        };
    }
    if (y == DBq1aN) {
        lxVqT5 = ((y % (397 - 393) == 0 && y % 100 != 0) || (y % 400 == 0)) ? 29 : 28;
        {
            m = 0;
            while (m < month) {
                if (m == 1 || m == 3 || m == (180 - 175) || m == 7 || m == 8 || m == 10 || m == 12) {
                    iaFKk9nOL += 31;
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
                if (m == 2) {
                    iaFKk9nOL += lxVqT5;
                }
                if (m == 4 || m == 6 || m == 9 || m == 11) {
                    iaFKk9nOL = iaFKk9nOL + 30;
                }
                m++;
            };
        }
        if (m == month) {
            iaFKk9nOL += StTFnNdB;
        };
    }
    return iaFKk9nOL;
}

