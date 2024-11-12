int main () {
    int SUNJhuP, nKLutv, mKNH3byg, GcolDpea = 1;
    double  yASGh53VmzQK [20], lN7KokTw [20], vtUlSkCuQG [20], IQ5kwcH;
    cin >> SUNJhuP;
    {
        nKLutv = 1;
        while (SUNJhuP >= nKLutv) {
            cin >> yASGh53VmzQK[nKLutv] >> lN7KokTw[nKLutv] >> vtUlSkCuQG[nKLutv];
            nKLutv = nKLutv + 1;
        }
    }
    struct   position {
        double  yASGh53VmzQK;
        double  gDGQYlXmdLMi;
        double  lN7KokTw;
        double  SdAbyo;
        double  vtUlSkCuQG;
        double  ZhbNLcQwo3J;
        double  d2s4Ki0V;
    }
    bF6ZlUP [100];
    {
        nKLutv = 1;
        while (SUNJhuP >= nKLutv) {
            {
                mKNH3byg = nKLutv + 1;
                while (SUNJhuP >= mKNH3byg) {
                    bF6ZlUP[GcolDpea].yASGh53VmzQK = yASGh53VmzQK[nKLutv];
                    bF6ZlUP[GcolDpea].gDGQYlXmdLMi = yASGh53VmzQK[mKNH3byg];
                    bF6ZlUP[GcolDpea].lN7KokTw = lN7KokTw[nKLutv];
                    bF6ZlUP[GcolDpea].SdAbyo = lN7KokTw[mKNH3byg];
                    bF6ZlUP[GcolDpea].vtUlSkCuQG = vtUlSkCuQG[nKLutv];
                    bF6ZlUP[GcolDpea].ZhbNLcQwo3J = vtUlSkCuQG[mKNH3byg];
                    bF6ZlUP[GcolDpea].d2s4Ki0V = sqrt ((yASGh53VmzQK[nKLutv] - yASGh53VmzQK[mKNH3byg]) * (yASGh53VmzQK[nKLutv] - yASGh53VmzQK[mKNH3byg]) + (lN7KokTw[nKLutv] - lN7KokTw[mKNH3byg]) * (lN7KokTw[nKLutv] - lN7KokTw[mKNH3byg]) + (vtUlSkCuQG[nKLutv] - vtUlSkCuQG[mKNH3byg]) * (vtUlSkCuQG[nKLutv] - vtUlSkCuQG[mKNH3byg]));
                    GcolDpea = GcolDpea +1;
                    mKNH3byg = mKNH3byg + 1;
                }
            }
            nKLutv = nKLutv + 1;
        }
    }
    {
        nKLutv = GcolDpea -1;
        while (nKLutv > 0) {
            {
                mKNH3byg = 1;
                while (mKNH3byg < nKLutv) {
                    if (bF6ZlUP[mKNH3byg].d2s4Ki0V < bF6ZlUP[mKNH3byg + 1].d2s4Ki0V) {
                        swap (bF6ZlUP[mKNH3byg].yASGh53VmzQK, bF6ZlUP[mKNH3byg + 1].yASGh53VmzQK);
                        swap (bF6ZlUP[mKNH3byg].lN7KokTw, bF6ZlUP[mKNH3byg + 1].lN7KokTw);
                        swap (bF6ZlUP[mKNH3byg].vtUlSkCuQG, bF6ZlUP[mKNH3byg + 1].vtUlSkCuQG);
                        swap (bF6ZlUP[mKNH3byg].gDGQYlXmdLMi, bF6ZlUP[mKNH3byg + 1].gDGQYlXmdLMi);
                        swap (bF6ZlUP[mKNH3byg].SdAbyo, bF6ZlUP[mKNH3byg + 1].SdAbyo);
                        swap (bF6ZlUP[mKNH3byg].ZhbNLcQwo3J, bF6ZlUP[mKNH3byg + 1].ZhbNLcQwo3J);
                        swap (bF6ZlUP[mKNH3byg].d2s4Ki0V, bF6ZlUP[mKNH3byg + 1].d2s4Ki0V);
                    }
                    mKNH3byg = mKNH3byg + 1;
                }
            }
            nKLutv = nKLutv - 1;
        }
    }
    {
        nKLutv = 1;
        while (nKLutv <= GcolDpea -1) {
            cout << '(' << (int) bF6ZlUP[nKLutv].yASGh53VmzQK << ',' << (int) bF6ZlUP[nKLutv].lN7KokTw << ',' << (int) bF6ZlUP[nKLutv].vtUlSkCuQG << ')' << '-' << '(' << (int) bF6ZlUP[nKLutv].gDGQYlXmdLMi << ',' << (int) bF6ZlUP[nKLutv].SdAbyo << ',' << (int) bF6ZlUP[nKLutv].ZhbNLcQwo3J << ')' << '=' << fixed << setprecision (2) << bF6ZlUP[nKLutv].d2s4Ki0V << endl;
            nKLutv = nKLutv + 1;
        }
    }
    return 0;
}

