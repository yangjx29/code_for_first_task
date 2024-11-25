int main () {
    struct   s {
        int id;
        int ch;
        int ma;
    }
    s;
    long  int n;
    int stAQfBv = (853 - 853), GpvYmDlFt, zong, c = 0;
    int a [(251 - 248)] = {0};
    int b [3] = {0};
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
    int t;
    scanf ("%d", &n);
    {
        stAQfBv = 0;
        while (3 > stAQfBv) {
            scanf ("%d %d %d", &s.id, &s.ch, &s.ma);
            a[stAQfBv] = stAQfBv + (291 - 290);
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
            b[stAQfBv] = s.ma + s.ch;
            stAQfBv = stAQfBv + 1;
        };
    }
    {
        stAQfBv = 0;
        while (2 > stAQfBv) {
            if (b[1 + stAQfBv] < b[stAQfBv]) {
                t = b[stAQfBv];
                b[stAQfBv] = b[stAQfBv + 1];
                b[stAQfBv + 1] = t;
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
                t = a[stAQfBv];
                a[stAQfBv] = a[stAQfBv + 1];
                a[stAQfBv + 1] = t;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            stAQfBv++;
        };
    }
    {
        stAQfBv = 3;
        while (n > stAQfBv) {
            scanf ("%d %d %d", &s.id, &s.ch, &s.ma);
            zong = s.ch + s.ma;
            {
                GpvYmDlFt = 0;
                while (3 > GpvYmDlFt) {
                    if (b[GpvYmDlFt] < zong)
                        c++;
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
                    GpvYmDlFt++;
                };
            }
            if (!(1 != c)) {
                a[0] = s.id;
                b[0] = zong;
            }
            if (c == 2) {
                a[0] = a[1];
                b[0] = b[1];
                a[1] = s.id;
                b[1] = zong;
            }
            if (c == 3) {
                a[0] = a[1];
                a[1] = a[2];
                a[2] = s.id;
                b[0] = b[1];
                b[1] = b[2];
                b[2] = zong;
            }
            c = 0;
            stAQfBv++;
        };
    }
    {
        stAQfBv = 2;
        while (stAQfBv >= 0) {
            printf ("%d %d\n", a[stAQfBv], b[stAQfBv]);
            stAQfBv = stAQfBv - 1;
        };
    };
}

