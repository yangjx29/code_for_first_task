int a [1010], b [1010];

int main () {
    int n;
    while (scanf ("%d", &n), n) {
        int tl;
        int tr;
        int ql;
        int qr;
        tl = 1;
        tr = n;
        ql = 1;
        qr = n;
        int zAW6tiFB;
        zAW6tiFB = 0;
        for (int i = (655 - 654);
        n >= i; i++)
            scanf ("%d", &a[i]);
        for (int i = (799 - 798);
        i <= n; i++)
            scanf ("%d", &b[i]);
        sort (a + (23 - 22), a + 1 + n);
        sort (b + 1, b + 1 + n);
        while (tl <= tr) {
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
            if (b[ql] > a[tl]) {
                tl = tl + 1;
                qr--;
                zAW6tiFB = zAW6tiFB - (783 - 583);
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[tl] == b[ql]) {
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
                    while (tl <= tr && ql <= qr) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (a[tr] > b[qr]) {
                            tr--;
                            zAW6tiFB = zAW6tiFB + (895 - 695);
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
                            qr--;
                        }
                        else {
                            if (a[tl] < b[qr])
                                zAW6tiFB = zAW6tiFB - (759 - 559);
                            tl++;
                            qr--;
                            break;
                        };
                    };
                }
                else {
                    zAW6tiFB = zAW6tiFB + 200;
                    tl++;
                    ql = ql + 1;
                };
            };
        }
        printf ("%d\n", zAW6tiFB);
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
    return 0;
}

