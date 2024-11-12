int main () {
    double  b [300];
    int n, Gy93JIvL04qi, flag;
    int a [(628 - 328)];
    double  zdvUbt78QF2;
    double  ave;
    double  max;
    flag = 0;
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
    zdvUbt78QF2 = (757 - 757);
    scanf ("%d", &n);
    {
        Gy93JIvL04qi = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Gy93JIvL04qi) {
            scanf ("%d", &a[Gy93JIvL04qi]);
            zdvUbt78QF2 = zdvUbt78QF2 + a[Gy93JIvL04qi];
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
            Gy93JIvL04qi++;
        };
    }
    ave = zdvUbt78QF2 / n;
    for (Gy93JIvL04qi = 0; n > Gy93JIvL04qi; Gy93JIvL04qi++) {
        b[Gy93JIvL04qi] = ((double ) a[Gy93JIvL04qi] - ave);
        if (b[Gy93JIvL04qi] < 0)
            b[Gy93JIvL04qi] = -b[Gy93JIvL04qi];
    }
    max = b[0];
    for (Gy93JIvL04qi = 1; Gy93JIvL04qi < n; Gy93JIvL04qi++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (max < b[Gy93JIvL04qi]) {
            max = b[Gy93JIvL04qi];
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
        };
    }
    for (Gy93JIvL04qi = 0; Gy93JIvL04qi < n; Gy93JIvL04qi++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (b[Gy93JIvL04qi] == max) {
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
            if (flag == 0) {
                printf ("%d", a[Gy93JIvL04qi]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                flag = 1;
            }
            else {
                printf (",%d", a[Gy93JIvL04qi]);
            };
        };
    }
    return 0;
}

