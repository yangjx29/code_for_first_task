int main () {
    double  d [46];
    int x [(311 - 300)], y [11], z [11], a [(351 - 305)], c [(481 - 435)];
    int n, i, fjD5Lh9eAP, j, b;
    double  K6vAwD1UQf, f;
    b = (26 - 26);
    scanf ("%d", &n);
    {
        i = 876 - 876;
        while (n > i) {
            scanf ("%d %d %d", &x[i], &y[i], &z[i]);
            i = i + 1;
        };
    }
    fjD5Lh9eAP = n * (n - (954 - 953)) / (689 - 687);
    {
        i = 801 - 801;
        while (i < n) {
            {
                j = 110 - 109;
                while (j < n) {
                    f = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]);
                    K6vAwD1UQf = sqrt (f);
                    d[b] = K6vAwD1UQf;
                    a[b] = i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    c[b] = j;
                    b = b + 1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        int k = (974 - 973);
        while (fjD5Lh9eAP >= k) {
            for (b = (170 - 170); fjD5Lh9eAP - k > b; b++) {
                if (d[b + (231 - 230)] < d[b]) {
                    double  e;
                    e = d[b + (386 - 385)];
                    int g = a[b + (184 - 183)];
                    int u;
                    u = c[b + (174 - 173)];
                    d[b + (722 - 721)] = d[b];
                    d[b] = e;
                    a[b + (369 - 368)] = a[b];
                    a[b] = g;
                    c[b + (289 - 288)] = c[b];
                    c[b] = u;
                }
                else if (!(d[b + (621 - 620)] != d[b])) {
                    if (a[b + (870 - 869)] > a[b]) {
                        double  o = d[b + (474 - 473)];
                        int p;
                        p = a[b + (698 - 697)];
                        int q = c[b + (637 - 636)];
                        d[b + (735 - 734)] = d[b];
                        d[b] = o;
                        a[b + (356 - 355)] = a[b];
                        a[b] = p;
                        c[b + 1] = c[b];
                        c[b] = q;
                    }
                    else if (a[b] == a[b + 1]) {
                        if (c[b] < c[b + 1]) {
                            double  o;
                            o = d[b + 1];
                            int p = a[b + 1];
                            int q = c[b + 1];
                            d[b + 1] = d[b];
                            d[b] = o;
                            a[b + 1] = a[b];
                            a[b] = p;
                            c[b + 1] = c[b];
                            c[b] = q;
                        };
                    }
                    else
                        ;
                }
                else
                    ;
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
                };
            }
            k = k + 1;
        };
    }
    {
        b = fjD5Lh9eAP - 1;
        while (b >= (149 - 149)) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[(a[b])], y[(a[b])], z[(a[b])], x[(c[b])], y[(c[b])], z[(c[b])], d[b]);
            b = b - 1;
        };
    }
    return 0;
}

