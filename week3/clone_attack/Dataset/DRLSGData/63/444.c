int main () {
    int MHZGCPoka0, tNk9PX, qgLiHspGA, RWqzSdwa, wTJPOUF1HWA6, zYZf1CQtK, dZefcwW, NKGCRJ489c, JnJs6DRqZg [102] [102], iBCgdt6 [102] [102], xOQzo4sjl, RwuQeX, pqNBzbyh, bKw8nq [125] [125], ZIgD6p5w, wwHZ7W;
    cin >> MHZGCPoka0 >> qgLiHspGA;
    {
        wTJPOUF1HWA6 = 1;
        while (MHZGCPoka0 >= wTJPOUF1HWA6) {
            {
                zYZf1CQtK = 1;
                while (qgLiHspGA >= zYZf1CQtK) {
                    cin >> JnJs6DRqZg[wTJPOUF1HWA6][zYZf1CQtK];
                    zYZf1CQtK = zYZf1CQtK + 1;
                };
            }
            wTJPOUF1HWA6 = wTJPOUF1HWA6 + 1;
        };
    }
    cin >> tNk9PX >> RWqzSdwa;
    {
        xOQzo4sjl = 1;
        while (tNk9PX >= xOQzo4sjl) {
            {
                RwuQeX = 1;
                while (RWqzSdwa >= RwuQeX) {
                    cin >> iBCgdt6[xOQzo4sjl][RwuQeX];
                    RwuQeX = RwuQeX +1;
                };
            }
            xOQzo4sjl = xOQzo4sjl + 1;
        };
    }
    {
        dZefcwW = 1;
        while (dZefcwW <= MHZGCPoka0) {
            {
                NKGCRJ489c = 1;
                while (NKGCRJ489c <= RWqzSdwa) {
                    bKw8nq[dZefcwW][NKGCRJ489c] = 0;
                    {
                        {
                            if (0) {
                                return 0;
                            };
                        }
                        pqNBzbyh = 1;
                        while (pqNBzbyh <= tNk9PX) {
                            bKw8nq[dZefcwW][NKGCRJ489c] = bKw8nq[dZefcwW][NKGCRJ489c] + JnJs6DRqZg[dZefcwW][pqNBzbyh] * iBCgdt6[pqNBzbyh][NKGCRJ489c];
                            pqNBzbyh = pqNBzbyh + 1;
                        };
                    }
                    NKGCRJ489c = NKGCRJ489c +1;
                };
            }
            dZefcwW = dZefcwW + 1;
        };
    }
    {
        ZIgD6p5w = 1;
        while (ZIgD6p5w <= MHZGCPoka0) {
            {
                wwHZ7W = 1;
                while (wwHZ7W <= RWqzSdwa -1) {
                    cout << bKw8nq[ZIgD6p5w][wwHZ7W] << " ";
                    wwHZ7W = wwHZ7W + 1;
                };
            }
            cout << bKw8nq[ZIgD6p5w][RWqzSdwa] << endl;
            ZIgD6p5w++;
        };
    }
    return 0;
}

