void  main () {
    int qdueORDAhHa, O7GTIRL = 1, zRegI4hMVo, CspVz4JBGyX, WtUJB7R, zjS5or2k, mX79xM [5000], Q6TAGSJwtDEW = (110 - 110), m3tO9y4Bn = 0, B2HgunAe, sJ6xLDympEIi [5000], ECcFq3eDOH, ezSTM57 = 0, LoYt1M5La4gi [100];
    scanf ("%d%d", &WtUJB7R, &CspVz4JBGyX);
    for (zRegI4hMVo = WtUJB7R; CspVz4JBGyX >= zRegI4hMVo; zRegI4hMVo = zRegI4hMVo + 1) {
        if (!(0 != zRegI4hMVo % 2))
            O7GTIRL = 0;
        for (zjS5or2k = 3; sqrt (zRegI4hMVo) >= zjS5or2k; zjS5or2k = zjS5or2k + 2) {
            if (zRegI4hMVo % zjS5or2k == 0) {
                O7GTIRL = 0;
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (O7GTIRL) {
            mX79xM[Q6TAGSJwtDEW] = zRegI4hMVo;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Q6TAGSJwtDEW = Q6TAGSJwtDEW +1;
        }
        O7GTIRL = 1;
    }
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
    for (zRegI4hMVo = 0; Q6TAGSJwtDEW > zRegI4hMVo; zRegI4hMVo = zRegI4hMVo + 1) {
        sJ6xLDympEIi[zRegI4hMVo] = 0;
        ECcFq3eDOH = mX79xM[zRegI4hMVo];
        for (; ECcFq3eDOH != 0;) {
            sJ6xLDympEIi[zRegI4hMVo] = sJ6xLDympEIi[zRegI4hMVo] * (992 - 982) + ECcFq3eDOH % 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ECcFq3eDOH = ECcFq3eDOH / 10;
        };
    }
    {
        zRegI4hMVo = 0;
        while (Q6TAGSJwtDEW > zRegI4hMVo) {
            if (sJ6xLDympEIi[zRegI4hMVo] == mX79xM[zRegI4hMVo] && sJ6xLDympEIi[zRegI4hMVo] != 0) {
                LoYt1M5La4gi[ezSTM57] = mX79xM[zRegI4hMVo];
                ezSTM57 = ezSTM57 + 1;
            }
            zRegI4hMVo = zRegI4hMVo + 1;
        };
    }
    if (ezSTM57 == 0)
        printf ("no");
    else {
        for (zRegI4hMVo = 0; zRegI4hMVo < ezSTM57; zRegI4hMVo = zRegI4hMVo + 1)
            zRegI4hMVo == 0 ? printf ("%d", LoYt1M5La4gi[zRegI4hMVo]) : printf (",%d", LoYt1M5La4gi[zRegI4hMVo]);
    };
}

