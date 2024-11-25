struct   v {
    char SI2L1U7OB [10];
    int mNkAiJZ9;
};
int main () {
    int Va1sXGmvz, GGU2ofDpJ36, oy1aA24 = 0, gyNDvi, j5gtcMzYX;
    struct   v *LwigE5nFBm1;
    struct   v WCcEDv4d08 [100], oWDOXNM;
    scanf ("%d", &Va1sXGmvz);
    LwigE5nFBm1 = (struct   v *) malloc (Va1sXGmvz * sizeof (struct   v));
    for (GGU2ofDpJ36 = 0; Va1sXGmvz > GGU2ofDpJ36; GGU2ofDpJ36 = GGU2ofDpJ36 +1) {
        scanf ("%s %d", LwigE5nFBm1[GGU2ofDpJ36].SI2L1U7OB, &LwigE5nFBm1[GGU2ofDpJ36].mNkAiJZ9);
    }
    for (GGU2ofDpJ36 = 0; Va1sXGmvz > GGU2ofDpJ36; GGU2ofDpJ36 = GGU2ofDpJ36 +1) {
        if (60 <= LwigE5nFBm1[GGU2ofDpJ36].mNkAiJZ9) {
            WCcEDv4d08[oy1aA24] = LwigE5nFBm1[GGU2ofDpJ36];
            oy1aA24 = oy1aA24 + 1;
        };
    }
    j5gtcMzYX = oy1aA24;
    {
        gyNDvi = 1;
        while (j5gtcMzYX > gyNDvi) {
            {
                oy1aA24 = 0;
                while (oy1aA24 < j5gtcMzYX - gyNDvi) {
                    if (WCcEDv4d08[oy1aA24 + 1].mNkAiJZ9 > WCcEDv4d08[oy1aA24].mNkAiJZ9) {
                        oWDOXNM = WCcEDv4d08[oy1aA24];
                        WCcEDv4d08[oy1aA24] = WCcEDv4d08[oy1aA24 + 1];
                        WCcEDv4d08[oy1aA24 + 1] = oWDOXNM;
                    }
                    oy1aA24 = oy1aA24 + 1;
                };
            }
            gyNDvi = gyNDvi + 1;
        };
    }
    {
        oy1aA24 = 0;
        while (oy1aA24 < j5gtcMzYX) {
            printf ("%s\n", WCcEDv4d08[oy1aA24].SI2L1U7OB);
            oy1aA24++;
        };
    }
    for (GGU2ofDpJ36 = 0; Va1sXGmvz > GGU2ofDpJ36; GGU2ofDpJ36++) {
        if (LwigE5nFBm1[GGU2ofDpJ36].mNkAiJZ9 < 60) {
            printf ("%s\n", LwigE5nFBm1[GGU2ofDpJ36].SI2L1U7OB);
        };
    }
    return 0;
}

