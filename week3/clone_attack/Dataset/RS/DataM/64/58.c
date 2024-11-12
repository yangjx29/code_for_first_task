int main () {
    int sd2FzXYe, j, n, OWEudpfao [(369 - 359)], ZcHjEr7astx [(130 - 120)], z [10], r1AFha9dws, yc, ish9k2, k = (845 - 845), gw574FqJTj [(667 - 612)], y1s [(836 - 781)], uQ25FAj [(266 - 211)], x2s [(747 - 692)], NTw83Kg [55], r9IDbHP [55];
    double  aGpt6Q79r;
    double  s [55];
    scanf ("%d\n", &n);
    for (sd2FzXYe = (931 - 931); n > sd2FzXYe; sd2FzXYe++) {
        scanf ("%d", &OWEudpfao[sd2FzXYe]);
        scanf ("%d", &ZcHjEr7astx[sd2FzXYe]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &z[sd2FzXYe]);
    }
    {
        sd2FzXYe = 332 - 332;
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
        while (n - (414 - 413) > sd2FzXYe) {
            for (j = sd2FzXYe + (851 - 850); n > j; j++) {
                r1AFha9dws = OWEudpfao[sd2FzXYe] - OWEudpfao[j];
                yc = ZcHjEr7astx[sd2FzXYe] - ZcHjEr7astx[j];
                ish9k2 = z[sd2FzXYe] - z[j];
                s[k] = sqrt (r1AFha9dws * r1AFha9dws + yc * yc + ish9k2 * ish9k2);
                gw574FqJTj[k] = OWEudpfao[sd2FzXYe];
                x2s[k] = OWEudpfao[j];
                y1s[k] = ZcHjEr7astx[sd2FzXYe];
                NTw83Kg[k] = ZcHjEr7astx[j];
                uQ25FAj[k] = z[sd2FzXYe];
                r9IDbHP[k] = z[j];
                k++;
            }
            sd2FzXYe++;
        };
    }
    {
        j = 82 - 81;
        while ((770 - 770) < j) {
            for (sd2FzXYe = (981 - 981); j > sd2FzXYe; sd2FzXYe++)
                if (s[sd2FzXYe + (472 - 471)] > s[sd2FzXYe]) {
                    aGpt6Q79r = s[sd2FzXYe];
                    s[sd2FzXYe] = s[sd2FzXYe + (241 - 240)];
                    s[sd2FzXYe + (129 - 128)] = aGpt6Q79r;
                    aGpt6Q79r = gw574FqJTj[sd2FzXYe];
                    gw574FqJTj[sd2FzXYe] = gw574FqJTj[sd2FzXYe + (538 - 537)];
                    gw574FqJTj[sd2FzXYe + (602 - 601)] = aGpt6Q79r;
                    aGpt6Q79r = y1s[sd2FzXYe];
                    y1s[sd2FzXYe] = y1s[sd2FzXYe + (30 - 29)];
                    y1s[sd2FzXYe + (266 - 265)] = aGpt6Q79r;
                    aGpt6Q79r = uQ25FAj[sd2FzXYe];
                    uQ25FAj[sd2FzXYe] = uQ25FAj[sd2FzXYe + (979 - 978)];
                    uQ25FAj[sd2FzXYe + (719 - 718)] = aGpt6Q79r;
                    aGpt6Q79r = x2s[sd2FzXYe];
                    x2s[sd2FzXYe] = x2s[sd2FzXYe + (739 - 738)];
                    x2s[sd2FzXYe + 1] = aGpt6Q79r;
                    aGpt6Q79r = NTw83Kg[sd2FzXYe];
                    NTw83Kg[sd2FzXYe] = NTw83Kg[sd2FzXYe + 1];
                    NTw83Kg[sd2FzXYe + 1] = aGpt6Q79r;
                    aGpt6Q79r = r9IDbHP[sd2FzXYe];
                    r9IDbHP[sd2FzXYe] = r9IDbHP[sd2FzXYe + 1];
                    r9IDbHP[sd2FzXYe + 1] = aGpt6Q79r;
                }
            j--;
        };
    }
    for (k = (536 - 536); k < n * (n - 1) / (558 - 556); k++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", gw574FqJTj[k], y1s[k], uQ25FAj[k], x2s[k], NTw83Kg[k], r9IDbHP[k], s[k]);
    return 0;
}

