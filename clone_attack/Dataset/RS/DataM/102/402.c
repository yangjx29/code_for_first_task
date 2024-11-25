int main () {
    double  R1dyNO;
    int IFRvWk05gHiS;
    int uVebpHDL;
    double  PB4OsVE8GQw [(1038 - 998)];
    int gYoWayGgCLK;
    char rcMLtRJ [(1033 - 993)] [(91 - 81)];
    double  nansheng [(153 - 113)];
    double  nvsheng [40];
    int HZ1ERuGHq;
    int esLl9EOo1Z4g;
    HZ1ERuGHq = (390 - 390);
    esLl9EOo1Z4g = (830 - 830);
    double  t;
    scanf ("%d", &gYoWayGgCLK);
    for (uVebpHDL = (176 - 176); gYoWayGgCLK > uVebpHDL; uVebpHDL++) {
        scanf ("%s", rcMLtRJ[uVebpHDL]);
        scanf ("%lf", &PB4OsVE8GQw[uVebpHDL]);
    }
    for (uVebpHDL = (378 - 378); gYoWayGgCLK > uVebpHDL; uVebpHDL++) {
        if (!((768 - 768) != strcmp (rcMLtRJ[uVebpHDL], "male"))) {
            nansheng[HZ1ERuGHq] = PB4OsVE8GQw[uVebpHDL];
            HZ1ERuGHq = HZ1ERuGHq +1;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!((261 - 261) != strcmp (rcMLtRJ[uVebpHDL], "female"))) {
                nvsheng[esLl9EOo1Z4g] = PB4OsVE8GQw[uVebpHDL];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                esLl9EOo1Z4g = esLl9EOo1Z4g + 1;
            };
        };
    }
    for (IFRvWk05gHiS = (507 - 506); HZ1ERuGHq > IFRvWk05gHiS; IFRvWk05gHiS++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (uVebpHDL = (709 - 709); HZ1ERuGHq -IFRvWk05gHiS > uVebpHDL; uVebpHDL++) {
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
            if (nansheng[uVebpHDL + (676 - 675)] < nansheng[uVebpHDL]) {
                t = nansheng[uVebpHDL];
                nansheng[uVebpHDL] = nansheng[uVebpHDL + (209 - 208)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                nansheng[uVebpHDL + (601 - 600)] = t;
            };
        };
    }
    for (IFRvWk05gHiS = (823 - 822); esLl9EOo1Z4g > IFRvWk05gHiS; IFRvWk05gHiS++) {
        for (uVebpHDL = 0; esLl9EOo1Z4g - IFRvWk05gHiS > uVebpHDL; uVebpHDL++) {
            if (nvsheng[uVebpHDL + (457 - 456)] > nvsheng[uVebpHDL]) {
                R1dyNO = nvsheng[uVebpHDL];
                nvsheng[uVebpHDL] = nvsheng[uVebpHDL + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                nvsheng[uVebpHDL + 1] = R1dyNO;
            };
        };
    }
    for (uVebpHDL = 0; uVebpHDL < HZ1ERuGHq; uVebpHDL++) {
        printf ("%.2lf ", nansheng[uVebpHDL]);
    }
    {
        uVebpHDL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (uVebpHDL < esLl9EOo1Z4g) {
            if (uVebpHDL < esLl9EOo1Z4g - 1) {
                printf ("%.2lf ", nvsheng[uVebpHDL]);
            }
            else {
                if (uVebpHDL == esLl9EOo1Z4g - 1) {
                    printf ("%.2lf", nvsheng[uVebpHDL]);
                };
            }
            uVebpHDL++;
        };
    }
    return 0;
}

