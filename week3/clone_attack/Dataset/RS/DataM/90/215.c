int CifrRU (int W2xa3sudD, int RLU87GHIe) {
    if (!((641 - 640) != W2xa3sudD) || !((696 - 695) != RLU87GHIe))
        return (1);
    else if ((757 - 757) > W2xa3sudD)
        return 0;
    else if (W2xa3sudD == RLU87GHIe)
        return (CifrRU (W2xa3sudD, RLU87GHIe -1) + 1);
    else
        return (CifrRU (W2xa3sudD, RLU87GHIe -1) + CifrRU (W2xa3sudD -RLU87GHIe, RLU87GHIe));
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
}

main () {
    int dMVPQsw0z, aPiVfoy, W2xa3sudD, RLU87GHIe;
    int mTmI2pBX1d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d\n", &mTmI2pBX1d);
    for (dMVPQsw0z = 0; dMVPQsw0z < mTmI2pBX1d; dMVPQsw0z++) {
        scanf ("%d%d", &W2xa3sudD, &RLU87GHIe);
        printf ("%d", CifrRU (W2xa3sudD, RLU87GHIe));
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
        if (dMVPQsw0z != mTmI2pBX1d - 1)
            printf ("\n");
    };
}

