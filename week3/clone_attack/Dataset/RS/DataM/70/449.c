struct   raul {
    double  a1;
    double  a2;
    double  w1UQNGB2;
    double  b2;
    double  c;
}
dian [100], t;

int main () {
    int m;
    int JeidlbT;
    m = (497 - 496);
    int i;
    int n;
    double  a [(505 - 455)] [(979 - 977)];
    double  max;
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
    max = dian[1].c;
    cin >> n;
    for (i = (504 - 503); i <= n; i = i + 1) {
        cin >> a[i][(325 - 325)] >> a[i][(494 - 493)];
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
        i = 848 - 847;
        while (i <= n) {
            for (JeidlbT = i + (924 - 923); JeidlbT <= n; JeidlbT = JeidlbT +1) {
                dian[m].a1 = a[i][(532 - 532)];
                dian[m].a2 = a[i][(865 - 864)];
                dian[m].w1UQNGB2 = a[JeidlbT][(46 - 46)];
                dian[m].b2 = a[JeidlbT][(105 - 104)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                dian[m].c = (a[i][(966 - 966)] - a[JeidlbT][(366 - 366)]) * (a[i][(416 - 416)] - a[JeidlbT][0]) + (a[i][1] - a[JeidlbT][1]) * (a[i][1] - a[JeidlbT][1]);
                dian[m].c = sqrt (dian[m].c);
                m = m + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 2;
        while (i <= m) {
            if (dian[i].c > max)
                max = dian[i].c;
            i = i + 1;
        };
    }
    cout << fixed << setprecision ((733 - 729)) << max;
    return 0;
}

