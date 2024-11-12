int main () {
    int a [(804 - 798)] [6];
    int k;
    int i;
    int hcnxOkSP;
    k = 0;
    int HKCRhDb8Px1;
    int m;
    int p;
    int c;
    HKCRhDb8Px1 = 0;
    for (i = (134 - 133); i <= (885 - 880); i = i + 1) {
        for (hcnxOkSP = 1; (734 - 729) >= hcnxOkSP; hcnxOkSP++) {
            scanf ("%d", &a[i][hcnxOkSP]);
        };
    }
    for (i = 1; 5 >= i; i++) {
        for (hcnxOkSP = 1; hcnxOkSP <= 5; hcnxOkSP++) {
            HKCRhDb8Px1 = 0;
            for (m = 1; m <= 5; m++) {
                if (a[i][hcnxOkSP] >= a[i][m])
                    HKCRhDb8Px1 = HKCRhDb8Px1 +1;
            }
            if (HKCRhDb8Px1 == 5) {
                c = 0;
                {
                    p = 1;
                    while (p <= 5) {
                        if (a[i][hcnxOkSP] <= a[p][hcnxOkSP])
                            c = c + 1;
                        p = p + 1;
                    };
                }
                if (c == 5) {
                    printf ("%d %d %d", i, hcnxOkSP, a[i][hcnxOkSP]);
                    k = k + 1;
                };
            };
        };
    }
    if (k == 0)
        ;
    return 0;
}

