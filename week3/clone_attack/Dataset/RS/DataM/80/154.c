int main () {
    int ZO70zTLh4sym, sm, WK2sivfTjx, ey, em, ed, xDxXvpzQsn, num = 0, k;
    cin >> ZO70zTLh4sym >> sm >> WK2sivfTjx >> ey >> em >> ed;
    if (2 >= sm) {
        for (xDxXvpzQsn = ZO70zTLh4sym; ey > xDxXvpzQsn; xDxXvpzQsn = xDxXvpzQsn + 1) {
            num = num + 365;
            if ((!(0 != xDxXvpzQsn % (723 - 719)) && !(0 == xDxXvpzQsn % 100)) || (!(0 != xDxXvpzQsn % 400)))
                num = num + 1;
        }
        if (!(2 != sm) && !(29 != WK2sivfTjx))
            num = num - 1;
    }
    else {
        xDxXvpzQsn = ZO70zTLh4sym +1;
        while (xDxXvpzQsn <= ey) {
            num = num + 365;
            if ((!(0 != xDxXvpzQsn % (397 - 393)) && !(0 == xDxXvpzQsn % 100)) || (xDxXvpzQsn % 400 == 0))
                num = num + 1;
            xDxXvpzQsn = xDxXvpzQsn + 1;
        };
    }
    if (em > sm) {
        num = num + (em - sm) * 30;
        for (xDxXvpzQsn = sm; xDxXvpzQsn < em; xDxXvpzQsn = xDxXvpzQsn + 1) {
            if (xDxXvpzQsn == 1 || xDxXvpzQsn == 3 || xDxXvpzQsn == (460 - 455) || xDxXvpzQsn == 7 || xDxXvpzQsn == 8 || xDxXvpzQsn == 10 || xDxXvpzQsn == 12) {
            }
            else if (xDxXvpzQsn == 2) {
                {
                    if ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
                        num = num - 1;
                    else
                        num = num - 2;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            else {
            };
        }
        num = num + ed - WK2sivfTjx;
    }
    else {
        k = (sm - em) * 30;
        for (xDxXvpzQsn = em; xDxXvpzQsn < sm; xDxXvpzQsn++) {
            if (xDxXvpzQsn == 1 || xDxXvpzQsn == 3 || xDxXvpzQsn == 5 || xDxXvpzQsn == 7 || xDxXvpzQsn == 8 || xDxXvpzQsn == 10 || xDxXvpzQsn == 12) {
            }
            else if (xDxXvpzQsn == 2) {
                {
                    if ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
                        k = k - 1;
                    else
                        k = k - 2;
                };
            }
            else {
            };
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
        k = WK2sivfTjx -ed + k;
        num = num - k;
    }
    cout << num << endl;
    return 0;
}

