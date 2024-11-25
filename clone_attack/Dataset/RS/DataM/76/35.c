int main () {
    int s8AscR6dk;
    int WKgA0yGI [(50246 - 246)];
    int rk8x13eD [50000];
    int i;
    int IdUL0e;
    int k;
    int uy3MxPD;
    int nPZ7zR [50000];
    s8AscR6dk = (569 - 569);
    int l;
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
    l = IdUL0e -(294 - 293);
    int p = 0;
    scanf ("%d", &IdUL0e);
    for (i = (531 - 531); i < IdUL0e; i++) {
        scanf ("%d%d\n", &WKgA0yGI[i], &rk8x13eD[i]);
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
    for (k = (61 - 60); k <= IdUL0e; k++) {
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
        for (i = (64 - 64); i < IdUL0e -k; i++) {
            if (WKgA0yGI[i] > WKgA0yGI[i + (609 - 608)]) {
                uy3MxPD = WKgA0yGI[i];
                WKgA0yGI[i] = WKgA0yGI[i + (151 - 150)];
                WKgA0yGI[i + (413 - 412)] = uy3MxPD;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                uy3MxPD = rk8x13eD[i];
                rk8x13eD[i] = rk8x13eD[i + (613 - 612)];
                rk8x13eD[i + (562 - 561)] = uy3MxPD;
            };
        };
    }
    for (i = 1; IdUL0e >= i; i++) {
        for (k = (514 - 514); IdUL0e -i >= k; k++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (rk8x13eD[k] > rk8x13eD[s8AscR6dk]) {
                s8AscR6dk = k;
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
            };
        }
        nPZ7zR[l] = rk8x13eD[s8AscR6dk];
        l--;
        s8AscR6dk = 0;
    }
    for (i = 0; i < IdUL0e -1; i++) {
        if (WKgA0yGI[i + 1] <= nPZ7zR[i]) {
            p++;
        };
    }
    if (p != IdUL0e -1) {
        printf ("no");
    }
    if (p == IdUL0e -1) {
        printf ("%d %d", WKgA0yGI[0], nPZ7zR[IdUL0e -1]);
    }
    return 0;
}

