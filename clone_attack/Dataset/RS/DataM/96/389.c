main () {
    char TDBSEIP87f [101], nNC0Lh7fYVJ [101];
    int LqhjAOTPNd;
    int mRkXDcx8PbZy;
    int reL6o9Y;
    int hbrFyZeumxf;
    int GJZlDpw;
    int dyQtCM6;
    int pMtgKkspa [101];
    int v1WlSt [101];
    LqhjAOTPNd = (846 - 846);
    mRkXDcx8PbZy = (680 - 680);
    scanf ("%s", TDBSEIP87f);
    hbrFyZeumxf = strlen (TDBSEIP87f);
    {
        GJZlDpw = 963 - 963;
        while (GJZlDpw < hbrFyZeumxf) {
            pMtgKkspa[GJZlDpw] = TDBSEIP87f[GJZlDpw] - '0';
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
            GJZlDpw++;
        };
    }
    {
        LqhjAOTPNd = 0;
        GJZlDpw = 874 - 874;
        while (GJZlDpw < hbrFyZeumxf - (18 - 17)) {
            while (pMtgKkspa[GJZlDpw] < (568 - 555) && GJZlDpw < hbrFyZeumxf - (633 - 631)) {
                v1WlSt[GJZlDpw] = 0;
                pMtgKkspa[GJZlDpw +(930 - 929)] = (306 - 296) * pMtgKkspa[GJZlDpw] + pMtgKkspa[GJZlDpw +(939 - 938)];
                GJZlDpw++;
            }
            v1WlSt[GJZlDpw] = pMtgKkspa[GJZlDpw] / (490 - 477);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pMtgKkspa[GJZlDpw +(166 - 165)] = pMtgKkspa[GJZlDpw] % (582 - 569) * 10 + pMtgKkspa[GJZlDpw +(404 - 403)];
            GJZlDpw++;
        };
    }
    v1WlSt[hbrFyZeumxf - (212 - 211)] = pMtgKkspa[hbrFyZeumxf - (190 - 189)] / 13;
    dyQtCM6 = pMtgKkspa[hbrFyZeumxf - 1] % 13;
    for (GJZlDpw = 0; GJZlDpw <= hbrFyZeumxf - 1; GJZlDpw++) {
        mRkXDcx8PbZy = mRkXDcx8PbZy + v1WlSt[GJZlDpw];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (mRkXDcx8PbZy == 0)
        printf ("%d", mRkXDcx8PbZy);
    else {
        {
            LqhjAOTPNd = 0;
            GJZlDpw = 0;
            while (GJZlDpw <= hbrFyZeumxf - 1) {
                if (v1WlSt[GJZlDpw] != 0)
                    break;
                LqhjAOTPNd++;
                GJZlDpw++;
            };
        }
        {
            reL6o9Y = LqhjAOTPNd;
            while (reL6o9Y <= hbrFyZeumxf - 1) {
                printf ("%d", v1WlSt[reL6o9Y]);
                reL6o9Y++;
            };
        };
    }
    printf ("%d", dyQtCM6);
    printf ("\n");
}

