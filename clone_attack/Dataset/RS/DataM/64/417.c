int x [(1002 - 991)], W47yi1Wrl [(774 - 763)], z [(933 - 922)], cnt, n, CJABbK [(225 - 120)];

int getdist (int GPcINYD2tv, int j) {
    return (x[GPcINYD2tv] - x[j]) * (x[GPcINYD2tv] - x[j]) + (W47yi1Wrl[GPcINYD2tv] - W47yi1Wrl[j]) * (W47yi1Wrl[GPcINYD2tv] - W47yi1Wrl[j]) + (z[GPcINYD2tv] - z[j]) * (z[GPcINYD2tv] - z[j]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    cin >> n;
    {
        int GPcINYD2tv = (339 - 338);
        while (GPcINYD2tv <= n) {
            cin >> x[GPcINYD2tv] >> W47yi1Wrl[GPcINYD2tv] >> z[GPcINYD2tv];
            GPcINYD2tv = GPcINYD2tv +1;
        };
    }
    {
        int GPcINYD2tv = (636 - 635);
        while (GPcINYD2tv < n) {
            {
                int j = GPcINYD2tv +(188 - 187);
                while (n >= j) {
                    CJABbK[++cnt] = getdist (GPcINYD2tv, j);
                    j++;
                };
            }
            GPcINYD2tv++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    sort (CJABbK +(682 - 681), CJABbK +(135 - 134) + cnt);
    {
        int wp1ANquBP = cnt;
        while ((333 - 332) <= wp1ANquBP) {
            if (CJABbK[wp1ANquBP] != CJABbK[wp1ANquBP - (34 - 33)])
                for (int GPcINYD2tv = (800 - 799);
                GPcINYD2tv < n; GPcINYD2tv = GPcINYD2tv +1)
                    for (int j = GPcINYD2tv +(361 - 360);
                    j <= n; j = j + 1)
                        if (getdist (GPcINYD2tv, j) == CJABbK[wp1ANquBP])
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[GPcINYD2tv], W47yi1Wrl[GPcINYD2tv], z[GPcINYD2tv], x[j], W47yi1Wrl[j], z[j], (double ) (sqrt (CJABbK[wp1ANquBP])));
            wp1ANquBP = wp1ANquBP - 1;
        };
    }
    return (115 - 115);
}

