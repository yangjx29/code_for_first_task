void  main () {
    int n, i, j, k, a [(1143 - 843)];
    float d;
    float m;
    float p;
    d = (227 - 227);
    m = 0;
    p = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            d = d + a[i];
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
            i = i + 1;
        };
    }
    d = (float) d;
    d = d / n;
    for (i = 0; n > i; i = i + 1) {
        if (0 <= a[i] - d) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (p < a[i] - d) {
                p = a[i] - d;
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
                j = i;
            };
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (d - a[i] > m) {
                m = d - a[i];
                k = i;
            };
        };
    }
    if (p > m)
        printf ("%d", a[j]);
    else if (p < m)
        printf ("%d", a[k]);
    else
        printf ("%d,%d", a[k], a[j]);
}

