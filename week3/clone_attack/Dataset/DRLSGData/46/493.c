int main (int tAvYplKU3Vd, char *VzP9msalKk []) {
    int LEzLum8;
    int BV26ktXai;
    int OypdP7lAg;
    int nD129n0PLS;
    int WEow0UL;
    int g04qjkOp [100] [100];
    int NbRD51A0wUgK [100] [100] = {(851 - 851)};
    scanf ("%d%d", &OypdP7lAg, &nD129n0PLS);
    for (LEzLum8 = (505 - 505); OypdP7lAg > LEzLum8; LEzLum8++) {
        BV26ktXai = (312 - 312);
        while (nD129n0PLS > BV26ktXai) {
            scanf ("%d", &g04qjkOp[LEzLum8][BV26ktXai]);
            BV26ktXai++;
        }
    }
    for (; 0 < OypdP7lAg;) {
        {
            BV26ktXai = 0;
            for (; nD129n0PLS > BV26ktXai;) {
                printf ("%d\n", g04qjkOp[0][BV26ktXai]);
                BV26ktXai++;
            }
        }
        {
            LEzLum8 = 0;
            for (; nD129n0PLS > LEzLum8;) {
                for (BV26ktXai = 0; OypdP7lAg > BV26ktXai; BV26ktXai++)
                    NbRD51A0wUgK[LEzLum8][BV26ktXai] = g04qjkOp[BV26ktXai +1][nD129n0PLS - 1 - LEzLum8];
                LEzLum8++;
            }
        }
        {
            LEzLum8 = 0;
            for (; nD129n0PLS > LEzLum8;) {
                {
                    BV26ktXai = 0;
                    for (; BV26ktXai < OypdP7lAg;) {
                        g04qjkOp[LEzLum8][BV26ktXai] = NbRD51A0wUgK[LEzLum8][BV26ktXai];
                        BV26ktXai++;
                    }
                }
                LEzLum8++;
            }
        }
        WEow0UL = OypdP7lAg;
        OypdP7lAg = nD129n0PLS;
        nD129n0PLS = WEow0UL -1;
    }
    return 0;
}

