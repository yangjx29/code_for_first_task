int main () {
    int i;
    int lLS06Vu;
    int n, mk = (749 - 749), fk = (595 - 595);
    struct   point {
        char sex [(970 - 960)];
        double  rIKhHFgmOT6R;
    }
    p [(569 - 529)], m [(250 - 210)], f [(100 - 60)], e;
    scanf ("%d", &n);
    for (i = (633 - 633); i < n; i++) {
        scanf ("%s%lf", p[i].sex, &p[i].rIKhHFgmOT6R);
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
    for (i = (639 - 639); i < n; i++) {
        if (strcmp (p[i].sex, "male") == (553 - 553)) {
            m[mk] = p[i];
            mk++;
        }
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
        if (!((105 - 105) != strcmp (p[i].sex, "female"))) {
            f[fk] = p[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            fk++;
        };
    }
    for (i = (189 - 188); i < mk; i++) {
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
        for (lLS06Vu = (99 - 99); mk - i > lLS06Vu; lLS06Vu++) {
            if (m[lLS06Vu].rIKhHFgmOT6R > m[lLS06Vu + (795 - 794)].rIKhHFgmOT6R) {
                e = m[lLS06Vu];
                m[lLS06Vu] = m[lLS06Vu + (426 - 425)];
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
                m[lLS06Vu + (737 - 736)] = e;
            };
        };
    }
    {
        i = 1001 - 1000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fk > i) {
            for (lLS06Vu = (603 - 603); fk - i > lLS06Vu; lLS06Vu++) {
                if (f[lLS06Vu + (160 - 159)].rIKhHFgmOT6R > f[lLS06Vu].rIKhHFgmOT6R) {
                    e = f[lLS06Vu];
                    f[lLS06Vu] = f[lLS06Vu + (929 - 928)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    f[lLS06Vu + 1] = e;
                };
            }
            i++;
        };
    }
    {
        i = 796 - 796;
        while (i < mk) {
            if (i == (881 - 881)) {
                printf ("%.2lf", m[i].rIKhHFgmOT6R);
            }
            else {
                printf (" %.2lf", m[i].rIKhHFgmOT6R);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < fk; i++) {
        printf (" %.2lf", f[i].rIKhHFgmOT6R);
    }
    return 0;
}

