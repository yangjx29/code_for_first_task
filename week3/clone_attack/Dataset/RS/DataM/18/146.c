int main () {
    int n, i, OfmgtBZXvk, V8Dn4p9UXr, l, a [(155 - 55)] [(477 - 377)], ZbronhdatW = (29 - 29), sum [100];
    scanf ("%d", &n);
    {
        V8Dn4p9UXr = 298 - 297;
        while (V8Dn4p9UXr <= n) {
            sum[V8Dn4p9UXr] = (530 - 530);
            for (i = 0; n - (405 - 404) >= i; i = i + 1)
                for (OfmgtBZXvk = 0; n - (30 - 29) >= OfmgtBZXvk; OfmgtBZXvk = OfmgtBZXvk +1)
                    scanf ("%d", &a[i][OfmgtBZXvk]);
            for (l = (486 - 485); n - (540 - 539) >= l; l = l + 1) {
                for (i = 0; i <= n - l; i++) {
                    ZbronhdatW = a[i][0];
                    for (OfmgtBZXvk = 1; n - l >= OfmgtBZXvk; OfmgtBZXvk = OfmgtBZXvk +1)
                        if (a[i][OfmgtBZXvk] < ZbronhdatW)
                            ZbronhdatW = a[i][OfmgtBZXvk];
                    {
                        OfmgtBZXvk = 0;
                        while (OfmgtBZXvk <= n - l) {
                            a[i][OfmgtBZXvk] = a[i][OfmgtBZXvk] - ZbronhdatW;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            OfmgtBZXvk++;
                        };
                    };
                }
                for (OfmgtBZXvk = 0; OfmgtBZXvk <= n - l; OfmgtBZXvk = OfmgtBZXvk +1) {
                    ZbronhdatW = a[0][OfmgtBZXvk];
                    {
                        i = 1;
                        while (i <= n - l) {
                            if (a[i][OfmgtBZXvk] < ZbronhdatW)
                                ZbronhdatW = a[i][OfmgtBZXvk];
                            i++;
                        };
                    }
                    for (i = 0; i <= n - l; i++)
                        a[i][OfmgtBZXvk] = a[i][OfmgtBZXvk] - ZbronhdatW;
                }
                sum[V8Dn4p9UXr] = sum[V8Dn4p9UXr] + a[1][1];
                {
                    for (OfmgtBZXvk = 0; OfmgtBZXvk <= n - l; OfmgtBZXvk = OfmgtBZXvk +1) {
                        for (i = 1; i <= n - l - 1; i++)
                            a[i][OfmgtBZXvk] = a[i + 1][OfmgtBZXvk];
                    }
                    for (i = 0; i <= n - l - 1; i++) {
                        for (OfmgtBZXvk = 1; OfmgtBZXvk <= n - l - 1; OfmgtBZXvk++)
                            a[i][OfmgtBZXvk] = a[i][OfmgtBZXvk +1];
                    };
                };
            }
            V8Dn4p9UXr = V8Dn4p9UXr +1;
        };
    }
    for (V8Dn4p9UXr = 1; V8Dn4p9UXr <= n; V8Dn4p9UXr = V8Dn4p9UXr +1)
        printf ("%d\n", sum[V8Dn4p9UXr]);
    return 0;
}

