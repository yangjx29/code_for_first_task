int main () {
    int a [50000], p8Rnk1E2KDsm [50000], AD7FW3 [50000], g [50000], WYfsvJAoc [50000];
    int nNgyQUL;
    int Zsv0VkgPU;
    int i;
    int moBXjP;
    int l;
    int hJbzLsyDp;
    int S3t9OJ0lHT;
    int O1uCZfm;
    int civUYjI0Kths;
    int d;
    int BpPnOG0J23g;
    nNgyQUL = (515 - 515);
    scanf ("%d", &civUYjI0Kths);
    {
        i = 694 - 694;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < civUYjI0Kths) {
            scanf ("%d %d", &a[i], &p8Rnk1E2KDsm[i]);
            i++;
        };
    }
    {
        i = 762 - 762;
        while (i < civUYjI0Kths) {
            g[i] = a[i];
            WYfsvJAoc[i] = p8Rnk1E2KDsm[i];
            i++;
        };
    }
    {
        Zsv0VkgPU = 471 - 470;
        while (Zsv0VkgPU <= civUYjI0Kths) {
            for (i = 0; i < civUYjI0Kths - Zsv0VkgPU; i++) {
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
                if (g[i] > g[i + (609 - 608)]) {
                    O1uCZfm = g[i + (643 - 642)];
                    g[i + (586 - 585)] = g[i];
                    g[i] = O1uCZfm;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Zsv0VkgPU++;
        };
    }
    {
        Zsv0VkgPU = 1;
        while (Zsv0VkgPU <= civUYjI0Kths) {
            {
                i = 0;
                while (i < civUYjI0Kths - Zsv0VkgPU) {
                    if (WYfsvJAoc[i] < WYfsvJAoc[i + 1]) {
                        moBXjP = WYfsvJAoc[i + 1];
                        WYfsvJAoc[i + 1] = WYfsvJAoc[i];
                        WYfsvJAoc[i] = moBXjP;
                    }
                    i++;
                };
            }
            Zsv0VkgPU++;
        };
    }
    S3t9OJ0lHT = WYfsvJAoc[0];
    {
        i = 0;
        while (i <= WYfsvJAoc[0]) {
            AD7FW3[i] = 1;
            i++;
        };
    }
    {
        i = 0;
        while (i < civUYjI0Kths) {
            {
                hJbzLsyDp = i;
                while (hJbzLsyDp <= p8Rnk1E2KDsm[i]) {
                    AD7FW3[hJbzLsyDp] = AD7FW3[hJbzLsyDp] - 1;
                    hJbzLsyDp++;
                };
            }
            i++;
        };
    }
    d = g[0];
    {
        i = 0;
        while (i < civUYjI0Kths) {
            if ((AD7FW3[a[i]] >= 0 && a[i] != g[0]) || (AD7FW3[p8Rnk1E2KDsm[i]] >= 0 && p8Rnk1E2KDsm[i] != WYfsvJAoc[0])) {
                nNgyQUL = nNgyQUL + 1;
            }
            i++;
        };
    }
    if (nNgyQUL > 0) {
        printf ("no");
    }
    else {
        printf ("%d %d", d, S3t9OJ0lHT);
    }
    return 0;
}

