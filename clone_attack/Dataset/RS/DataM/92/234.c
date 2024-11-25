main () {
    int hzFet8QW6I7P;
    int i;
    int bLizo41hE;
    int UyI2GaxOAtV;
    int CxviJAj;
    int gyIqRl;
    int VaKYIeqP5U6G;
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
    int t [1001];
    int U74anxEGB [1001];
    int temp;
    while (1) {
        scanf ("%d", &hzFet8QW6I7P);
        if (!hzFet8QW6I7P)
            break;
        for (i = 0; hzFet8QW6I7P > i; i = i + 1)
            scanf ("%d", &t[i]);
        for (i = 0; hzFet8QW6I7P > i; i = i + 1)
            scanf ("%d", &U74anxEGB[i]);
        for (i = 0; hzFet8QW6I7P > i; i++) {
            bLizo41hE = 0;
            while (bLizo41hE < hzFet8QW6I7P - i - 1) {
                if (t[bLizo41hE] > t[bLizo41hE + 1]) {
                    temp = t[bLizo41hE];
                    t[bLizo41hE] = t[bLizo41hE + 1];
                    t[bLizo41hE + 1] = temp;
                }
                bLizo41hE = bLizo41hE + 1;
            };
        }
        for (i = 0; hzFet8QW6I7P > i; i++)
            for (bLizo41hE = 0; bLizo41hE < hzFet8QW6I7P - i - 1; bLizo41hE = bLizo41hE + 1)
                if (U74anxEGB[bLizo41hE] > U74anxEGB[bLizo41hE + 1]) {
                    temp = U74anxEGB[bLizo41hE];
                    U74anxEGB[bLizo41hE] = U74anxEGB[bLizo41hE + 1];
                    U74anxEGB[bLizo41hE + 1] = temp;
                }
        VaKYIeqP5U6G = 0;
        for (i = 0; i < hzFet8QW6I7P; i++) {
            gyIqRl = -1;
            CxviJAj = -100;
            UyI2GaxOAtV = 0;
            for (bLizo41hE = 0; hzFet8QW6I7P > bLizo41hE; bLizo41hE++) {
                if (t[i] > U74anxEGB[bLizo41hE] && U74anxEGB[bLizo41hE] > CxviJAj) {
                    UyI2GaxOAtV = 1;
                    CxviJAj = U74anxEGB[bLizo41hE];
                    gyIqRl = bLizo41hE;
                };
            }
            if (UyI2GaxOAtV) {
                VaKYIeqP5U6G += 200;
                t[i] = -100;
                U74anxEGB[gyIqRl] = -100;
            };
        }
        for (i = 0; i < hzFet8QW6I7P; i++) {
            if (!(-100 != t[i]))
                continue;
            for (bLizo41hE = 0; bLizo41hE < hzFet8QW6I7P; bLizo41hE++) {
                if (U74anxEGB[bLizo41hE] == -100)
                    continue;
                if (t[i] == U74anxEGB[bLizo41hE]) {
                    U74anxEGB[bLizo41hE] = -100;
                    t[i] = -100;
                    break;
                };
            };
        }
        for (i = 0; i < hzFet8QW6I7P; i++) {
            if (U74anxEGB[i] != -100) {
                VaKYIeqP5U6G -= 200;
            };
        }
        printf ("%d\n", VaKYIeqP5U6G);
    }
    return 0;
}

