int wqezL80 [252];

main () {
    char wVQUjxRaDuLs [251];
    char BcLP4Xat1 [251];
    int i13oDh5TQfk;
    int fIqACS;
    int cEejTD;
    int ZXRjzk;
    int ixvtEHpKTD;
    int T2u7Mj3BTIY;
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
    scanf ("%s %s", wVQUjxRaDuLs, BcLP4Xat1);
    i13oDh5TQfk = strlen (wVQUjxRaDuLs);
    fIqACS = strlen (BcLP4Xat1);
    if (i13oDh5TQfk < fIqACS) {
        {
            cEejTD = 207 - 206;
            while (cEejTD > -1) {
                wVQUjxRaDuLs[cEejTD + fIqACS - i13oDh5TQfk] = wVQUjxRaDuLs[cEejTD];
                cEejTD = cEejTD - 1;
            };
        }
        {
            cEejTD = 950 - 950;
            while (fIqACS - i13oDh5TQfk > cEejTD) {
                wVQUjxRaDuLs[cEejTD] = '0';
                cEejTD++;
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
        T2u7Mj3BTIY = i13oDh5TQfk;
        ZXRjzk = fIqACS;
    }
    else if (i13oDh5TQfk > fIqACS) {
        {
            cEejTD = fIqACS - 1;
            while (cEejTD > -1) {
                BcLP4Xat1[cEejTD + i13oDh5TQfk - fIqACS] = BcLP4Xat1[cEejTD];
                cEejTD--;
            };
        }
        {
            cEejTD = 0;
            while (cEejTD < i13oDh5TQfk - fIqACS) {
                BcLP4Xat1[cEejTD] = '0';
                cEejTD++;
            };
        }
        T2u7Mj3BTIY = fIqACS;
        ZXRjzk = i13oDh5TQfk;
    }
    else {
        ZXRjzk = i13oDh5TQfk;
        T2u7Mj3BTIY = i13oDh5TQfk;
    }
    for (cEejTD = ZXRjzk -1; cEejTD >= 0; cEejTD--) {
        ixvtEHpKTD = wqezL80[ZXRjzk -1 - cEejTD] + wVQUjxRaDuLs[cEejTD] + BcLP4Xat1[cEejTD] - '0' - '0';
        if (ixvtEHpKTD < 10) {
            wqezL80[ZXRjzk -1 - cEejTD] = ixvtEHpKTD;
        }
        else {
            ixvtEHpKTD = ixvtEHpKTD % 10;
            wqezL80[ZXRjzk -1 - cEejTD] = ixvtEHpKTD;
            wqezL80[ZXRjzk -cEejTD]++;
            if (cEejTD == 0)
                ZXRjzk++;
        };
    }
    {
        cEejTD = ZXRjzk -1;
        while (cEejTD >= 0) {
            if (wqezL80[cEejTD] == 0)
                ZXRjzk--;
            else
                break;
            cEejTD--;
        };
    }
    if (ZXRjzk == 0)
        printf ("0");
    else
        for (cEejTD = ZXRjzk -1; cEejTD >= 0; cEejTD--)
            printf ("%d", wqezL80[cEejTD]);
}

