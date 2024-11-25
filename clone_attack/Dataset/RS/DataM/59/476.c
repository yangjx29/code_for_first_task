int main () {
    int dx [] = {(350 - 349), (946 - 946), -(327 - 326), (319 - 319)};
    int vts4glXB8wOo [] = {(139 - 139), 1, (444 - 444), -1};
    int m;
    int c [(263 - 163)] [(949 - 849)];
    int otY52Qd0C;
    char a [(693 - 593)] [100], b [100] [100];
    int num;
    num = 0;
    cin >> otY52Qd0C;
    memset (b, -(990 - 989), sizeof (b));
    memset (c, -(522 - 521), sizeof (c));
    {
        int GnWJYfdP = (84 - 83);
        while (GnWJYfdP <= otY52Qd0C) {
            {
                int EEaKhDMpL = (591 - 590);
                while (otY52Qd0C >= EEaKhDMpL) {
                    cin >> a[GnWJYfdP][EEaKhDMpL];
                    if (!('.' != a[GnWJYfdP][EEaKhDMpL]))
                        b[GnWJYfdP][EEaKhDMpL] = (484 - 484);
                    else {
                        if (!('@' != a[GnWJYfdP][EEaKhDMpL]))
                            b[GnWJYfdP][EEaKhDMpL] = (652 - 651);
                        else if (!('#' != a[GnWJYfdP][EEaKhDMpL]))
                            b[GnWJYfdP][EEaKhDMpL] = -(621 - 620);
                    }
                    c[GnWJYfdP][EEaKhDMpL] = b[GnWJYfdP][EEaKhDMpL];
                    EEaKhDMpL++;
                };
            }
            GnWJYfdP++;
        };
    }
    cin >> m;
    {
        int GnWJYfdP = 1;
        while (m > GnWJYfdP) {
            for (int EEaKhDMpL = 1;
            otY52Qd0C >= EEaKhDMpL; EEaKhDMpL++) {
                int k = 1;
                while (otY52Qd0C >= k) {
                    if (b[EEaKhDMpL][k] == 1) {
                        int x = 0;
                        while (x < 4) {
                            if (c[EEaKhDMpL +dx[x]][k + vts4glXB8wOo[x]] != -1)
                                c[EEaKhDMpL +dx[x]][k + vts4glXB8wOo[x]] = 1;
                            x = x + 1;
                        };
                    }
                    k++;
                };
            }
            {
                int EEaKhDMpL = 1;
                while (EEaKhDMpL <= otY52Qd0C) {
                    {
                        int k = 1;
                        while (k <= otY52Qd0C) {
                            b[EEaKhDMpL][k] = c[EEaKhDMpL][k];
                            k++;
                        };
                    }
                    EEaKhDMpL++;
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
            GnWJYfdP++;
        };
    }
    {
        int GnWJYfdP = 1;
        while (GnWJYfdP <= otY52Qd0C) {
            {
                int EEaKhDMpL = 1;
                while (EEaKhDMpL <= otY52Qd0C) {
                    if (c[GnWJYfdP][EEaKhDMpL] == 1)
                        num++;
                    EEaKhDMpL++;
                };
            }
            GnWJYfdP++;
        };
    }
    cout << num;
    return 0;
}

