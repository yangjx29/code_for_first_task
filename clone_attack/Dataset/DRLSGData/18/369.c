int main () {
    int cXBef7W60yi, KBMFu5sQU, vCY4HN, gdP9uywo, bFqvzjlfoXmE, z6mzHdU;
    int dpNbIF [100] [100] [100] = {0};
    int nNZKMg [100] = {0};
    int XDPIurmxSB;
    cin >> XDPIurmxSB;
    {
        vCY4HN = 0;
        while (XDPIurmxSB > vCY4HN) {
            bFqvzjlfoXmE = 0;
            {
                cXBef7W60yi = 0;
                while (cXBef7W60yi < XDPIurmxSB) {
                    {
                        KBMFu5sQU = 0;
                        while (XDPIurmxSB > KBMFu5sQU) {
                            cin >> dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU];
                            KBMFu5sQU = KBMFu5sQU +1;
                        }
                    }
                    cXBef7W60yi = cXBef7W60yi + 1;
                }
            }
            {
                z6mzHdU = 0;
                for (; XDPIurmxSB -1 > z6mzHdU;) {
                    z6mzHdU++;
                    {
                        cXBef7W60yi = 0;
                        for (; XDPIurmxSB -bFqvzjlfoXmE > cXBef7W60yi;) {
                            gdP9uywo = dpNbIF[vCY4HN][cXBef7W60yi][0];
                            {
                                KBMFu5sQU = 0;
                                for (; XDPIurmxSB -bFqvzjlfoXmE > KBMFu5sQU;) {
                                    if (gdP9uywo > dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU])
                                        gdP9uywo = dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU];
                                    KBMFu5sQU = KBMFu5sQU +1;
                                }
                            }
                            {
                                KBMFu5sQU = 0;
                                for (; XDPIurmxSB -bFqvzjlfoXmE > KBMFu5sQU;) {
                                    dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU] = dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU] - gdP9uywo;
                                    KBMFu5sQU++;
                                }
                            }
                            cXBef7W60yi++;
                        }
                    }
                    {
                        KBMFu5sQU = 0;
                        for (; XDPIurmxSB -bFqvzjlfoXmE > KBMFu5sQU;) {
                            gdP9uywo = dpNbIF[vCY4HN][0][KBMFu5sQU];
                            for (cXBef7W60yi = 0; XDPIurmxSB -bFqvzjlfoXmE > cXBef7W60yi; cXBef7W60yi++) {
                                if (gdP9uywo > dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU])
                                    gdP9uywo = dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU];
                            }
                            {
                                cXBef7W60yi = 0;
                                for (; XDPIurmxSB -bFqvzjlfoXmE > cXBef7W60yi;) {
                                    dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU] = dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU] - gdP9uywo;
                                    cXBef7W60yi++;
                                }
                            }
                            KBMFu5sQU++;
                        }
                    }
                    nNZKMg[vCY4HN] = nNZKMg[vCY4HN] + dpNbIF[vCY4HN][1][1];
                    for (cXBef7W60yi = 0; cXBef7W60yi < XDPIurmxSB -bFqvzjlfoXmE; cXBef7W60yi++) {
                        KBMFu5sQU = 1;
                        while (XDPIurmxSB -1 - bFqvzjlfoXmE > KBMFu5sQU) {
                            dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU] = dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU +1];
                            KBMFu5sQU++;
                        }
                    }
                    for (KBMFu5sQU = 0; XDPIurmxSB -1 - bFqvzjlfoXmE > KBMFu5sQU; KBMFu5sQU++) {
                        cXBef7W60yi = 1;
                        while (cXBef7W60yi < XDPIurmxSB -1) {
                            dpNbIF[vCY4HN][cXBef7W60yi][KBMFu5sQU] = dpNbIF[vCY4HN][cXBef7W60yi + 1][KBMFu5sQU];
                            cXBef7W60yi++;
                        }
                    }
                    bFqvzjlfoXmE = bFqvzjlfoXmE + 1;
                }
            }
            cout << nNZKMg[vCY4HN] << endl;
            vCY4HN = vCY4HN + 1;
        }
    }
    return 0;
}

