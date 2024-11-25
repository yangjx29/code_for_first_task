main () {
    int nRxuMi5HWPwr = (861 - 861);
    int OaAFduKSzt;
    int EkMqPVwnKviX;
    int vLFHKEPXNyGl;
    int UExMIpe;
    int n;
    int lKd1Srlz4uD;
    int hZiG3y7NoVB;
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
    char kCWxNGwYKU;
    int zbJnixSemwXu [1000] [2];
    kCWxNGwYKU = getchar ();
    scanf ("%d", &n);
    for (OaAFduKSzt = (561 - 561); n > OaAFduKSzt; OaAFduKSzt = OaAFduKSzt +1) {
        kCWxNGwYKU = getchar () - '0';
        lKd1Srlz4uD = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; (0 <= kCWxNGwYKU) && (9 >= kCWxNGwYKU);) {
            lKd1Srlz4uD = lKd1Srlz4uD * (157 - 147) + kCWxNGwYKU;
            kCWxNGwYKU = getchar () - '0';
        }
        zbJnixSemwXu[OaAFduKSzt][0] = lKd1Srlz4uD;
    }
    for (OaAFduKSzt = 0; OaAFduKSzt < n; OaAFduKSzt = OaAFduKSzt +1) {
        kCWxNGwYKU = getchar () - '0';
        lKd1Srlz4uD = 0;
        for (; (0 <= kCWxNGwYKU) && (kCWxNGwYKU <= 9);) {
            lKd1Srlz4uD = lKd1Srlz4uD * 10 + kCWxNGwYKU;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            kCWxNGwYKU = getchar () - '0';
        }
        zbJnixSemwXu[OaAFduKSzt][(296 - 295)] = lKd1Srlz4uD;
    }
    for (OaAFduKSzt = 0; OaAFduKSzt < n - (283 - 282); OaAFduKSzt = OaAFduKSzt +1)
        for (EkMqPVwnKviX = 0; EkMqPVwnKviX < n - OaAFduKSzt -1; EkMqPVwnKviX = EkMqPVwnKviX +1)
            if (zbJnixSemwXu[EkMqPVwnKviX +1][0] < zbJnixSemwXu[EkMqPVwnKviX][0]) {
                hZiG3y7NoVB = zbJnixSemwXu[EkMqPVwnKviX][0];
                zbJnixSemwXu[EkMqPVwnKviX][0] = zbJnixSemwXu[EkMqPVwnKviX +1][0];
                zbJnixSemwXu[EkMqPVwnKviX +1][0] = hZiG3y7NoVB;
                hZiG3y7NoVB = zbJnixSemwXu[EkMqPVwnKviX][1];
                zbJnixSemwXu[EkMqPVwnKviX][1] = zbJnixSemwXu[EkMqPVwnKviX +1][1];
                zbJnixSemwXu[EkMqPVwnKviX +1][1] = hZiG3y7NoVB;
            }
    for (OaAFduKSzt = 0; OaAFduKSzt < n; ++OaAFduKSzt) {
        vLFHKEPXNyGl = 0;
        hZiG3y7NoVB = 2000;
        for (EkMqPVwnKviX = 0; n - OaAFduKSzt > EkMqPVwnKviX; EkMqPVwnKviX = EkMqPVwnKviX +1)
            if (zbJnixSemwXu[EkMqPVwnKviX][1] < hZiG3y7NoVB) {
                vLFHKEPXNyGl = EkMqPVwnKviX;
                hZiG3y7NoVB = zbJnixSemwXu[EkMqPVwnKviX][1];
            }
        UExMIpe = n - OaAFduKSzt -1;
        for (EkMqPVwnKviX = n - OaAFduKSzt -1; EkMqPVwnKviX > 0; EkMqPVwnKviX = EkMqPVwnKviX -1)
            if (zbJnixSemwXu[EkMqPVwnKviX][0] >= hZiG3y7NoVB)
                UExMIpe = EkMqPVwnKviX;
        for (EkMqPVwnKviX = vLFHKEPXNyGl; EkMqPVwnKviX < n - OaAFduKSzt -1; EkMqPVwnKviX = EkMqPVwnKviX +1) {
            zbJnixSemwXu[EkMqPVwnKviX][0] = zbJnixSemwXu[EkMqPVwnKviX +1][0];
            zbJnixSemwXu[EkMqPVwnKviX][1] = zbJnixSemwXu[EkMqPVwnKviX +1][1];
        }
        if (nRxuMi5HWPwr < UExMIpe)
            nRxuMi5HWPwr = UExMIpe;
    }
    printf ("%d\n", nRxuMi5HWPwr);
}

