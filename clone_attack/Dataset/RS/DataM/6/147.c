int main () {
    int TlxuHLw;
    int Gc495UY;
    int m;
    int CUPCDKFQ2B;
    int sz [100] [100];
    int WS5wRUGC2s;
    int oJlyZXAzU;
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
    int We2Mxs;
    TlxuHLw = (868 - 868);
    scanf ("%d", &Gc495UY);
    {
        We2Mxs = 0;
        while (Gc495UY > We2Mxs) {
            We2Mxs = We2Mxs +1;
            scanf ("%d%d", &m, &CUPCDKFQ2B);
            {
                WS5wRUGC2s = 0;
                while (WS5wRUGC2s < m) {
                    {
                        oJlyZXAzU = 0;
                        while (oJlyZXAzU < CUPCDKFQ2B) {
                            scanf ("%d", &sz[WS5wRUGC2s][oJlyZXAzU]);
                            oJlyZXAzU = oJlyZXAzU + 1;
                        };
                    }
                    WS5wRUGC2s = WS5wRUGC2s +1;
                };
            }
            {
                oJlyZXAzU = 0;
                while (oJlyZXAzU < CUPCDKFQ2B) {
                    TlxuHLw = TlxuHLw +sz[0][oJlyZXAzU];
                    oJlyZXAzU = oJlyZXAzU + 1;
                };
            }
            {
                WS5wRUGC2s = 1;
                while (WS5wRUGC2s < m) {
                    TlxuHLw = TlxuHLw +sz[WS5wRUGC2s][CUPCDKFQ2B -1];
                    WS5wRUGC2s = WS5wRUGC2s +1;
                };
            }
            for (oJlyZXAzU = 0; CUPCDKFQ2B -1 > oJlyZXAzU; oJlyZXAzU = oJlyZXAzU + 1) {
                TlxuHLw = TlxuHLw +sz[m - 1][oJlyZXAzU];
            }
            {
                WS5wRUGC2s = 1;
                while (m - 1 > WS5wRUGC2s) {
                    TlxuHLw = TlxuHLw +sz[WS5wRUGC2s][0];
                    WS5wRUGC2s = WS5wRUGC2s +1;
                };
            }
            printf ("%d\n", TlxuHLw);
            TlxuHLw = 0;
        };
    }
    return 0;
}

