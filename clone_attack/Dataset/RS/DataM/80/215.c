int main () {
    int s;
    int ya;
    int ma;
    int da;
    int yb;
    int mb;
    int db;
    int i;
    int mon1 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon2 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    int q;
    s = (782 - 782);
    cin >> ya >> ma >> da >> yb >> mb >> db;
    cin >> q;
    {
        i = ya;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yb > i) {
            if ((!(0 != i % 4) && i % 100 != 0) || (!(0 != i % 400)))
                s = s + 366;
            else
                s = s + 365;
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
            i++;
        };
    }
    if ((!(0 != yb % 4) && !(0 == yb % 100)) || (yb % 400 == 0)) {
        {
            i = ma;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < mb) {
                s = s + mon1[i];
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
                i++;
            };
        }
        {
            i = mb;
            while (i < ma) {
                s = s - mon1[i];
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
                i++;
            };
        };
    }
    else {
        {
            i = ma;
            while (i < mb) {
                s = s + mon2[i];
                i++;
            };
        }
        {
            i = mb;
            while (i < ma) {
                s = s - mon2[i];
                i++;
            };
        };
    }
    s = s + db - da;
    cout << s;
    return 0;
}

