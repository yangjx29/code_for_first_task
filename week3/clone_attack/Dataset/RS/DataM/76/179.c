int main () {
    int rVbG2oD;
    int eLekOGK;
    int WzjYeoPMQDCW;
    int ck4x0tz5jDbL;
    int YpmtEq [(50866 - 866)];
    int uWxGFHzm6 [50000];
    int OK9yuJ;
    int OJX8kC;
    int W5ieOqwdVjR [50000];
    rVbG2oD = 0;
    scanf ("%d", &eLekOGK);
    for (WzjYeoPMQDCW = 0; eLekOGK > WzjYeoPMQDCW; WzjYeoPMQDCW = WzjYeoPMQDCW +1) {
        scanf ("%d %d", &YpmtEq[WzjYeoPMQDCW], &uWxGFHzm6[WzjYeoPMQDCW]);
    }
    OJX8kC = YpmtEq[0];
    OK9yuJ = uWxGFHzm6[0];
    for (WzjYeoPMQDCW = 0; eLekOGK > WzjYeoPMQDCW; WzjYeoPMQDCW = WzjYeoPMQDCW +1) {
        if (OK9yuJ < uWxGFHzm6[WzjYeoPMQDCW]) {
            OK9yuJ = uWxGFHzm6[WzjYeoPMQDCW];
        }
        if (OJX8kC > YpmtEq[WzjYeoPMQDCW]) {
            OJX8kC = YpmtEq[WzjYeoPMQDCW];
        };
    }
    for (WzjYeoPMQDCW = OJX8kC; OK9yuJ > WzjYeoPMQDCW; WzjYeoPMQDCW++) {
        W5ieOqwdVjR[WzjYeoPMQDCW] = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        WzjYeoPMQDCW = OJX8kC;
        while (OK9yuJ > WzjYeoPMQDCW) {
            for (ck4x0tz5jDbL = 0; eLekOGK > ck4x0tz5jDbL; ck4x0tz5jDbL = ck4x0tz5jDbL + 1) {
                if ((WzjYeoPMQDCW +0.5) > YpmtEq[ck4x0tz5jDbL] && (WzjYeoPMQDCW +0.5) < uWxGFHzm6[ck4x0tz5jDbL]) {
                    W5ieOqwdVjR[WzjYeoPMQDCW] = 0;
                };
            }
            WzjYeoPMQDCW = WzjYeoPMQDCW +1;
        };
    }
    for (WzjYeoPMQDCW = OJX8kC; WzjYeoPMQDCW < OK9yuJ; WzjYeoPMQDCW++) {
        rVbG2oD = rVbG2oD + W5ieOqwdVjR[WzjYeoPMQDCW];
    }
    if (rVbG2oD == 0) {
        printf ("%d %d", OJX8kC, OK9yuJ);
    }
    else {
        printf ("no");
    }
    return 0;
}

