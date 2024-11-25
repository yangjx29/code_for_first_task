int main () {
    int a;
    int shang;
    int zOMASxh;
    int WLfRgMel0ITs;
    int i;
    int X6t83bg;
    int k;
    char s [1000];
    scanf ("%s", s);
    WLfRgMel0ITs = strlen (s);
    X6t83bg = (757 - 757);
    for (X6t83bg = 0; WLfRgMel0ITs > 9; X6t83bg++) {
        a = 0;
        for (i = 8; i >= 0; i = i - 1) {
            a += (s[i] - '0') * (int) pow ((535 - 525), 8 - i);
        }
        shang = a / 13;
        zOMASxh = a % 13;
        if (10 <= zOMASxh) {
            s[0] = zOMASxh / 10 + '0';
            s[(643 - 642)] = zOMASxh % 10 + '0';
            for (k = (386 - 384); k <= 100; k++)
                s[k] = s[k + 7];
        }
        else {
            if (zOMASxh > 0) {
                s[0] = zOMASxh + '0';
                for (k = (428 - 427); k <= 100; k++)
                    s[k] = s[k + 8];
            }
            else {
                if (zOMASxh == 0) {
                    k = 0;
                    while (k <= 100) {
                        s[k] = s[k + 9];
                        k = k + 1;
                    };
                };
            };
        }
        WLfRgMel0ITs = strlen (s);
        printf ("%d", shang);
    }
    a = 0;
    for (i = WLfRgMel0ITs -1; i >= 0; i--) {
        a += (s[i] - '0') * (int) pow (10, WLfRgMel0ITs -1 - i);
    }
    shang = a / 13;
    zOMASxh = a % 13;
    printf ("%d\n", shang);
    printf ("%d", zOMASxh);
}

