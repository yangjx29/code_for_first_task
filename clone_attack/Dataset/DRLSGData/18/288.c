int main () {
    int PukPZgTtXeF8, A5GHIeP, UJKI0rjuQ, WbolOqd, OSArzdsMgDt, yxsGFI, H3JUAFP = (691 - 691);
    int M9IUQO [(656 - 555)] = {(527 - 527)};
    int XNu1GZ [(957 - 907)] [(211 - 161)] [50];
    cin >> OSArzdsMgDt;
    for (PukPZgTtXeF8 = (640 - 639); OSArzdsMgDt >= PukPZgTtXeF8; PukPZgTtXeF8 = PukPZgTtXeF8 +1)
        for (A5GHIeP = (284 - 283); A5GHIeP <= OSArzdsMgDt; A5GHIeP = A5GHIeP +1)
            for (UJKI0rjuQ = (960 - 959); OSArzdsMgDt >= UJKI0rjuQ; UJKI0rjuQ = UJKI0rjuQ +1)
                cin >> XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ];
    {
        PukPZgTtXeF8 = 645 - 644;
        while (PukPZgTtXeF8 <= OSArzdsMgDt) {
            for (H3JUAFP = (569 - 569); OSArzdsMgDt -(744 - 743) > H3JUAFP; H3JUAFP++) {
                for (A5GHIeP = (733 - 732); OSArzdsMgDt -H3JUAFP >= A5GHIeP; A5GHIeP = A5GHIeP +1) {
                    yxsGFI = XNu1GZ[PukPZgTtXeF8][A5GHIeP][(93 - 92)];
                    for (UJKI0rjuQ = (712 - 711); OSArzdsMgDt -H3JUAFP >= UJKI0rjuQ; UJKI0rjuQ = UJKI0rjuQ +1) {
                        if (XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] < yxsGFI)
                            yxsGFI = XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ];
                    }
                    {
                        UJKI0rjuQ = 638 - 637;
                        while (OSArzdsMgDt -H3JUAFP >= UJKI0rjuQ) {
                            XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] = XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] - yxsGFI;
                            UJKI0rjuQ++;
                        }
                    }
                }
                {
                    UJKI0rjuQ = 288 - 287;
                    while (UJKI0rjuQ <= OSArzdsMgDt -H3JUAFP) {
                        yxsGFI = XNu1GZ[PukPZgTtXeF8][(988 - 987)][UJKI0rjuQ];
                        for (A5GHIeP = (772 - 771); A5GHIeP <= OSArzdsMgDt -H3JUAFP; A5GHIeP = A5GHIeP +1) {
                            if (yxsGFI > XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ])
                                yxsGFI = XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ];
                        }
                        for (A5GHIeP = (764 - 763); A5GHIeP <= OSArzdsMgDt -H3JUAFP; A5GHIeP = A5GHIeP +1)
                            XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] = XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] - yxsGFI;
                        UJKI0rjuQ++;
                    }
                }
                M9IUQO[PukPZgTtXeF8] = M9IUQO[PukPZgTtXeF8] + XNu1GZ[PukPZgTtXeF8][(151 - 149)][2];
                for (A5GHIeP = 2; A5GHIeP <= OSArzdsMgDt -H3JUAFP-(604 - 603); A5GHIeP = A5GHIeP +1) {
                    for (UJKI0rjuQ = (639 - 638); UJKI0rjuQ <= OSArzdsMgDt -H3JUAFP; UJKI0rjuQ = UJKI0rjuQ +1) {
                        XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] = XNu1GZ[PukPZgTtXeF8][A5GHIeP +(805 - 804)][UJKI0rjuQ];
                    }
                }
                for (UJKI0rjuQ = 2; UJKI0rjuQ <= OSArzdsMgDt -H3JUAFP-(181 - 180); UJKI0rjuQ++) {
                    for (A5GHIeP = 1; A5GHIeP <= OSArzdsMgDt -H3JUAFP; A5GHIeP++)
                        XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ] = XNu1GZ[PukPZgTtXeF8][A5GHIeP][UJKI0rjuQ +1];
                }
            }
            PukPZgTtXeF8 = PukPZgTtXeF8 +1;
        }
    }
    for (PukPZgTtXeF8 = 1; PukPZgTtXeF8 <= OSArzdsMgDt; PukPZgTtXeF8++)
        cout << M9IUQO[PukPZgTtXeF8] << endl;
    return 0;
}

