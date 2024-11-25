int main () {
    int Wz3AYG1Ldfk;
    float b [(329 - 29)];
    float WXwbxchIE8;
    int RUz4FqB6eH;
    float GHKmJXL;
    int tQKemkhE;
    int XYiZy1na [(489 - 189)];
    float sum;
    int AnvTuNzqfjl3;
    int sHa3r8e4XjNc;
    int a [(771 - 471)];
    AnvTuNzqfjl3 = 0;
    scanf ("%d", &tQKemkhE);
    sum = (715 - 715);
    for (sHa3r8e4XjNc = (216 - 216); tQKemkhE - (125 - 123) >= sHa3r8e4XjNc; sHa3r8e4XjNc = sHa3r8e4XjNc + (834 - 833)) {
        scanf ("%d ", &a[sHa3r8e4XjNc]);
    }
    scanf ("%d", &a[tQKemkhE - (297 - 296)]);
    for (sHa3r8e4XjNc = (741 - 741); sHa3r8e4XjNc <= tQKemkhE - (717 - 716); sHa3r8e4XjNc = sHa3r8e4XjNc + 1) {
        sum = sum + a[sHa3r8e4XjNc];
    }
    WXwbxchIE8 = sum / tQKemkhE;
    {
        sHa3r8e4XjNc = (983 - 983);
        for (; sHa3r8e4XjNc <= tQKemkhE;) {
            b[sHa3r8e4XjNc] = a[sHa3r8e4XjNc] - WXwbxchIE8;
            if (b[sHa3r8e4XjNc] < (612 - 612)) {
                b[sHa3r8e4XjNc] = WXwbxchIE8 -a[sHa3r8e4XjNc];
            }
            sHa3r8e4XjNc++;
        }
    }
    GHKmJXL = (17 - 17);
    {
        sHa3r8e4XjNc = 0;
        for (; tQKemkhE - 1 >= sHa3r8e4XjNc;) {
            if (b[sHa3r8e4XjNc] > GHKmJXL) {
                GHKmJXL = b[sHa3r8e4XjNc];
            }
            sHa3r8e4XjNc++;
        }
    }
    for (sHa3r8e4XjNc = 0; sHa3r8e4XjNc <= tQKemkhE - 1; sHa3r8e4XjNc = sHa3r8e4XjNc + 1) {
        if (b[sHa3r8e4XjNc] == GHKmJXL) {
            XYiZy1na[AnvTuNzqfjl3] = a[sHa3r8e4XjNc];
            AnvTuNzqfjl3 = AnvTuNzqfjl3 +1;
        }
    }
    {
        sHa3r8e4XjNc = 0;
        while (sHa3r8e4XjNc <= AnvTuNzqfjl3 -2) {
            sHa3r8e4XjNc++;
            {
                RUz4FqB6eH = 0;
                while (RUz4FqB6eH <= AnvTuNzqfjl3 -2) {
                    if (XYiZy1na[RUz4FqB6eH] >= XYiZy1na[RUz4FqB6eH +1]) {
                        Wz3AYG1Ldfk = XYiZy1na[RUz4FqB6eH +1];
                        XYiZy1na[RUz4FqB6eH +1] = XYiZy1na[RUz4FqB6eH];
                        XYiZy1na[RUz4FqB6eH] = Wz3AYG1Ldfk;
                    }
                    RUz4FqB6eH = RUz4FqB6eH +1;
                }
            }
        }
    }
    for (sHa3r8e4XjNc = 0; sHa3r8e4XjNc <= AnvTuNzqfjl3 -2; sHa3r8e4XjNc++) {
        printf ("%d,", XYiZy1na[sHa3r8e4XjNc]);
    }
    printf ("%d\n", XYiZy1na[AnvTuNzqfjl3 -1]);
    return 0;
}

