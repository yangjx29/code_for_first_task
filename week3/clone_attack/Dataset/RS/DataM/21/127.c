void  main () {
    float nOCAxys0;
    float RFCrRY4PK;
    float UCugdpJj [(1186 - 886)];
    float DmBLc4aY;
    nOCAxys0 = 0;
    int yZl98SDj4, lNmWcL64X9, lqJzB8, koRFCwL = (883 - 883);
    scanf ("%d", &yZl98SDj4);
    {
        lNmWcL64X9 = 0;
        while (yZl98SDj4 > lNmWcL64X9) {
            scanf ("%f", &UCugdpJj[lNmWcL64X9]);
            nOCAxys0 = nOCAxys0 + UCugdpJj[lNmWcL64X9];
            lNmWcL64X9 = lNmWcL64X9 + 1;
        };
    }
    RFCrRY4PK = nOCAxys0 / yZl98SDj4;
    {
        lNmWcL64X9 = 0;
        while (lNmWcL64X9 < (yZl98SDj4 - (756 - 755))) {
            {
                lqJzB8 = 998 - 997;
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
                while (lqJzB8 < yZl98SDj4) {
                    if (fabs (UCugdpJj[lNmWcL64X9] - RFCrRY4PK) < fabs (UCugdpJj[lqJzB8] - RFCrRY4PK)) {
                        DmBLc4aY = UCugdpJj[lNmWcL64X9];
                        UCugdpJj[lNmWcL64X9] = UCugdpJj[lqJzB8];
                        UCugdpJj[lqJzB8] = DmBLc4aY;
                    }
                    lqJzB8++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            lNmWcL64X9 = lNmWcL64X9 + 1;
        };
    }
    {
        lNmWcL64X9 = 0;
        while (lNmWcL64X9 < yZl98SDj4) {
            if (fabs (UCugdpJj[lNmWcL64X9] - RFCrRY4PK) == fabs (UCugdpJj[0] - RFCrRY4PK))
                koRFCwL = koRFCwL + (664 - 663);
            lNmWcL64X9 = lNmWcL64X9 + 1;
        };
    }
    {
        lNmWcL64X9 = 0;
        while (lNmWcL64X9 < (koRFCwL - (725 - 724))) {
            {
                lqJzB8 = 565 - 564;
                while (lqJzB8 < koRFCwL) {
                    if (UCugdpJj[lNmWcL64X9] > UCugdpJj[lqJzB8]) {
                        DmBLc4aY = UCugdpJj[lNmWcL64X9];
                        UCugdpJj[lNmWcL64X9] = UCugdpJj[lqJzB8];
                        UCugdpJj[lqJzB8] = DmBLc4aY;
                    }
                    lqJzB8++;
                };
            }
            lNmWcL64X9++;
        };
    }
    printf ("%.0f", UCugdpJj[0]);
    {
        lNmWcL64X9 = 1;
        while (lNmWcL64X9 < koRFCwL) {
            printf (",%.0f", UCugdpJj[lNmWcL64X9]);
            lNmWcL64X9++;
        };
    };
}

