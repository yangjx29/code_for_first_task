int main () {
    int i;
    int k;
    int n;
    int t;
    int p;
    float jdh;
    jdh = 0;
    int xfh;
    xfh = 0;
    int KvcdiIXYQG [10];
    int df [10];
    float jd [10];
    float O1CZdnYF7UeQ;
    O1CZdnYF7UeQ = jdh / xfh;
    printf ("%.2f", O1CZdnYF7UeQ);
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &KvcdiIXYQG[i]);
            xfh += KvcdiIXYQG[i];
            i++;
        };
    }
    {
        k = 0;
        while (k < n) {
            scanf ("%d", &df[k]);
            k = k + 1;
        };
    }
    {
        p = 0;
        while (n > p) {
            if (89 < df[p]) {
                jd[p] = 4.0;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (df[p] > 84 && df[p] < 90) {
                    jd[p] = 3.7;
                }
                else if (81 < df[p] && df[p] < 85) {
                    jd[p] = 3.3;
                }
                else if ((786 - 709) < df[p] && df[p] < 82) {
                    jd[p] = 3.0;
                }
                else if (df[p] > 74 && 78 > df[p]) {
                    jd[p] = 2.7;
                }
                else if (df[p] > 71 && df[p] < 75) {
                    jd[p] = 2.3;
                }
                else if (df[p] > 67 && df[p] < 72) {
                    jd[p] = 2.0;
                }
                else if (df[p] > 63 && df[p] < 68) {
                    jd[p] = 1.5;
                }
                else if (df[p] > 59 && df[p] < 64) {
                    jd[p] = 1.0;
                }
                else {
                    jd[p] = 0;
                };
            }
            p++;
        };
    }
    for (t = 0; t < n; t++) {
        jdh = jdh + KvcdiIXYQG[t] * jd[t];
    }
    return 0;
}

