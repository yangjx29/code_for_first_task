main () {
    int nfktAM;
    int rk2gOI;
    int utY17VDBRd;
    int vw3Adermpuzi;
    int P6WsYpmMOB;
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
    int tYcri20sQMZd;
    scanf ("%d", &vw3Adermpuzi);
    P6WsYpmMOB = vw3Adermpuzi / 2;
    {
        nfktAM = 1;
        while (P6WsYpmMOB >= nfktAM) {
            tYcri20sQMZd = vw3Adermpuzi - nfktAM;
            {
                rk2gOI = 2;
                while (nfktAM >= rk2gOI) {
                    if (nfktAM % rk2gOI == 0)
                        break;
                    rk2gOI++;
                };
            }
            for (utY17VDBRd = 2; utY17VDBRd <= tYcri20sQMZd; utY17VDBRd = utY17VDBRd + 1)
                if (tYcri20sQMZd % utY17VDBRd == 0)
                    break;
            if (rk2gOI == nfktAM && utY17VDBRd == tYcri20sQMZd)
                printf ("%d %d\n", nfktAM, tYcri20sQMZd);
            nfktAM++;
        };
    };
}

