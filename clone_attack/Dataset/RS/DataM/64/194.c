double  sqrt (double  KvekCB5Gr);

int main () {
    int Q53qWK;
    int XgBl3R [10] [(407 - 404)];
    int f;
    f = (10 - 10);
    double  ftBmj3 [100];
    int LisERIu [100];
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
    int mIv9x1k [100];
    scanf ("%d", &Q53qWK);
    for (int Q6Ct9P0 = (425 - 425);
    Q6Ct9P0 < Q53qWK; Q6Ct9P0++) {
        int ElZSVgKz5;
        ElZSVgKz5 = (50 - 50);
        while (ElZSVgKz5 < 3) {
            scanf ("%d", &XgBl3R[Q6Ct9P0][ElZSVgKz5]);
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
            ElZSVgKz5++;
        };
    }
    {
        int hn0FeSfpPyj = 0;
        while (hn0FeSfpPyj < Q53qWK) {
            for (int VZJXLY = hn0FeSfpPyj + (516 - 515);
            VZJXLY < Q53qWK; VZJXLY++) {
                ftBmj3[f] = sqrt (((XgBl3R[hn0FeSfpPyj][0] - XgBl3R[VZJXLY][0]) * (XgBl3R[hn0FeSfpPyj][0] - XgBl3R[VZJXLY][0])) + ((XgBl3R[hn0FeSfpPyj][(259 - 258)] - XgBl3R[VZJXLY][(415 - 414)]) * (XgBl3R[hn0FeSfpPyj][1] - XgBl3R[VZJXLY][1])) + ((XgBl3R[hn0FeSfpPyj][(546 - 544)] - XgBl3R[VZJXLY][(149 - 147)]) * (XgBl3R[hn0FeSfpPyj][2] - XgBl3R[VZJXLY][2])));
                LisERIu[f] = hn0FeSfpPyj;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                mIv9x1k[f] = VZJXLY;
                f = f + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hn0FeSfpPyj++;
        };
    }
    {
        int k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (k <= f) {
            int ez8muTCc, VrjlbKFPk4c;
            double  U3OQFYKqwI;
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
            for (int m = 0;
            m < f - k; m++) {
                if (ftBmj3[m] < ftBmj3[m + 1]) {
                    U3OQFYKqwI = ftBmj3[m];
                    ez8muTCc = LisERIu[m];
                    VrjlbKFPk4c = mIv9x1k[m];
                    ftBmj3[m] = ftBmj3[m + 1];
                    LisERIu[m] = LisERIu[m + 1];
                    mIv9x1k[m] = mIv9x1k[m + 1];
                    ftBmj3[m + 1] = U3OQFYKqwI;
                    LisERIu[m + 1] = ez8muTCc;
                    mIv9x1k[m + 1] = VrjlbKFPk4c;
                };
            }
            k++;
        };
    }
    {
        int iSk1X4Ac5MIT = 0;
        while (iSk1X4Ac5MIT < f) {
            {
                int KhaAiyZ = 0;
                while (KhaAiyZ < 2) {
                    printf ("%d,", XgBl3R[LisERIu[iSk1X4Ac5MIT]][KhaAiyZ]);
                    KhaAiyZ++;
                };
            }
            printf ("%d)", XgBl3R[LisERIu[iSk1X4Ac5MIT]][2]);
            {
                int bZRmUu = 0;
                while (bZRmUu < 2) {
                    printf ("%d,", XgBl3R[mIv9x1k[iSk1X4Ac5MIT]][bZRmUu]);
                    bZRmUu++;
                };
            }
            printf ("%d)=", XgBl3R[mIv9x1k[iSk1X4Ac5MIT]][2]);
            printf ("%.2lf\n", ftBmj3[iSk1X4Ac5MIT]);
            iSk1X4Ac5MIT++;
        };
    }
    return 0;
}

