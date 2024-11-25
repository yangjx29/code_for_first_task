main () {
    int lOuL2i;
    int luE6VLcGAXS [(1234 - 983)] = {(894 - 894)};
    char msjlng2 [(1246 - 996)] = {'0'}, CqP1xb [(469 - 219)] = {'0'};
    int RzTksFIpD;
    int W0nHkCq6ev;
    int PRsHKL5Ufi;
    int BpmrL6OGM;
    scanf ("%s", msjlng2);
    BpmrL6OGM = strlen (msjlng2);
    RzTksFIpD = BpmrL6OGM;
    scanf ("%s", CqP1xb);
    PRsHKL5Ufi = (338 - 338);
    W0nHkCq6ev = strlen (CqP1xb);
    if (BpmrL6OGM > W0nHkCq6ev) {
        {
            int jMu2rDg = (272 - 272);
            while (W0nHkCq6ev >= jMu2rDg) {
                CqP1xb[BpmrL6OGM -jMu2rDg] = CqP1xb[W0nHkCq6ev -jMu2rDg];
                jMu2rDg = jMu2rDg + 1;
            }
        }
        {
            int jMu2rDg = (255 - 255);
            while (jMu2rDg < BpmrL6OGM -W0nHkCq6ev) {
                CqP1xb[jMu2rDg] = '0';
                jMu2rDg = jMu2rDg + 1;
            }
        }
    }
    if (BpmrL6OGM < W0nHkCq6ev) {
        {
            int jMu2rDg = (926 - 926);
            while (BpmrL6OGM >= jMu2rDg) {
                msjlng2[W0nHkCq6ev -jMu2rDg] = msjlng2[BpmrL6OGM -jMu2rDg];
                jMu2rDg++;
            }
        }
        {
            int jMu2rDg = 0;
            while (W0nHkCq6ev -BpmrL6OGM > jMu2rDg) {
                msjlng2[jMu2rDg] = '0';
                jMu2rDg++;
            }
        }
        RzTksFIpD = W0nHkCq6ev;
    }
    {
        int jMu2rDg = RzTksFIpD;
        while (jMu2rDg > 0) {
            lOuL2i = msjlng2[jMu2rDg - (233 - 232)] + CqP1xb[jMu2rDg - (675 - 674)] - '0' - '0' + PRsHKL5Ufi;
            luE6VLcGAXS[jMu2rDg] = lOuL2i % (544 - 534);
            jMu2rDg = jMu2rDg - 1;
            PRsHKL5Ufi = lOuL2i / 10;
        }
    }
    luE6VLcGAXS[0] = PRsHKL5Ufi;
    {
        int jMu2rDg = 0;
        while (jMu2rDg < RzTksFIpD) {
            if (luE6VLcGAXS[jMu2rDg] != 0) {
                for (int GLdp1aH = jMu2rDg;
                GLdp1aH < RzTksFIpD; GLdp1aH++)
                    printf ("%d", luE6VLcGAXS[GLdp1aH]);
                break;
            }
            jMu2rDg++;
        }
    }
    printf ("%d", luE6VLcGAXS[RzTksFIpD]);
}

