int main () {
    double  uJ2fPO1FnA;
    uJ2fPO1FnA = 0;
    int CFrHVKM4, jFmcCW, LXCp3Zq, L41b52V;
    double  GMrlAVNSI2X [1000];
    double  fi6eBct [1000];
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
    cin >> CFrHVKM4;
    {
        jFmcCW = 0;
        while (CFrHVKM4 > jFmcCW) {
            cin >> GMrlAVNSI2X[jFmcCW] >> fi6eBct[jFmcCW];
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
            jFmcCW++;
        };
    }
    for (jFmcCW = 0; jFmcCW < CFrHVKM4 -1; jFmcCW++) {
        for (LXCp3Zq = jFmcCW + 1; LXCp3Zq < CFrHVKM4; LXCp3Zq++) {
            if ((GMrlAVNSI2X[jFmcCW] - GMrlAVNSI2X[LXCp3Zq]) * (GMrlAVNSI2X[jFmcCW] - GMrlAVNSI2X[LXCp3Zq]) + (fi6eBct[jFmcCW] - fi6eBct[LXCp3Zq]) * (fi6eBct[jFmcCW] - fi6eBct[LXCp3Zq]) > uJ2fPO1FnA * uJ2fPO1FnA) {
                uJ2fPO1FnA = sqrt ((GMrlAVNSI2X[jFmcCW] - GMrlAVNSI2X[LXCp3Zq]) * (GMrlAVNSI2X[jFmcCW] - GMrlAVNSI2X[LXCp3Zq]) + (fi6eBct[jFmcCW] - fi6eBct[LXCp3Zq]) * (fi6eBct[jFmcCW] - fi6eBct[LXCp3Zq]));
            };
        };
    }
    printf ("%.4f\n", uJ2fPO1FnA);
}

