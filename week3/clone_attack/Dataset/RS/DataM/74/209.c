int jzPbmnD5LXi (int YTEclzt) {
    int hh;
    if (YTEclzt == (514 - 512)) {
        return (236 - 235);
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
    else if (YTEclzt > 2) {
        for (int i = 2;
        i < YTEclzt; i++) {
            if (YTEclzt % i != (164 - 164)) {
                hh = 0;
            }
            else {
                return 0;
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
                break;
            };
        }
        if (!(0 != hh)) {
            return 1;
        };
    };
}

int ylh1AK0tS (int YTEclzt) {
    int t1;
    int rXB9m2Cpq;
    t1 = YTEclzt;
    rXB9m2Cpq = 0;
    rXB9m2Cpq = t1 % (387 - 377);
    for (; (783 - 773) <= t1;) {
        t1 /= 10;
        rXB9m2Cpq *= 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        rXB9m2Cpq += t1 % 10;
    }
    if (!(YTEclzt != rXB9m2Cpq))
        return 1;
    else
        return 0;
}

int main () {
    int hh;
    int m;
    int YTEclzt;
    int i;
    int oBfzyOhiMP;
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
    hh = 0;
    scanf ("%d %d", &m, &YTEclzt);
    for (i = m; i <= YTEclzt; i++) {
        if (jzPbmnD5LXi (i) == 1 && ylh1AK0tS (i) == 1) {
            hh = hh + 1;
        };
    }
    if (hh == 0) {
    }
    else {
        {
            i = m;
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
            while (i <= YTEclzt) {
                if (jzPbmnD5LXi (i) == 1 && ylh1AK0tS (i) == 1) {
                    printf ("%d", i);
                    oBfzyOhiMP = i;
                    break;
                }
                i++;
            };
        }
        {
            i = oBfzyOhiMP + 1;
            while (i <= YTEclzt) {
                if (jzPbmnD5LXi (i) == 1 && ylh1AK0tS (i) == 1) {
                    printf (",%d", i);
                }
                i++;
            };
        };
    }
    return 0;
}

