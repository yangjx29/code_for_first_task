int main () {
    int lXBSI851LUe, gxGsqobBQ, M4xzGWXU, pNG3DmwhV2r, L1vCFpDnLi, Rxy4fUrwk5n6 [(875 - 775)] [100], uirduhHnFecw, TdlJ6Bpsyzt;
    cin >> lXBSI851LUe;
    {
        pNG3DmwhV2r = 273 - 272;
        while (pNG3DmwhV2r <= lXBSI851LUe) {
            for (gxGsqobBQ = (646 - 646); lXBSI851LUe > gxGsqobBQ; gxGsqobBQ = gxGsqobBQ + (810 - 809))
                for (M4xzGWXU = 0; M4xzGWXU < lXBSI851LUe; M4xzGWXU = M4xzGWXU +(830 - 829))
                    cin >> Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU];
            L1vCFpDnLi = lXBSI851LUe;
            uirduhHnFecw = 0;
            while (L1vCFpDnLi > (487 - 486)) {
                for (gxGsqobBQ = 0; L1vCFpDnLi > gxGsqobBQ; gxGsqobBQ = gxGsqobBQ + (312 - 311)) {
                    TdlJ6Bpsyzt = Rxy4fUrwk5n6[gxGsqobBQ][0];
                    for (M4xzGWXU = 0; M4xzGWXU < L1vCFpDnLi; M4xzGWXU = M4xzGWXU +1)
                        if (TdlJ6Bpsyzt > Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU])
                            TdlJ6Bpsyzt = Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU];
                    for (M4xzGWXU = 0; L1vCFpDnLi > M4xzGWXU; M4xzGWXU = M4xzGWXU +1)
                        Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU] = Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU] - TdlJ6Bpsyzt;
                }
                {
                    M4xzGWXU = 0;
                    for (; L1vCFpDnLi > M4xzGWXU;) {
                        TdlJ6Bpsyzt = Rxy4fUrwk5n6[0][M4xzGWXU];
                        for (gxGsqobBQ = 0; L1vCFpDnLi > gxGsqobBQ; gxGsqobBQ = gxGsqobBQ + 1)
                            if (TdlJ6Bpsyzt > Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU])
                                TdlJ6Bpsyzt = Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU];
                        for (gxGsqobBQ = 0; L1vCFpDnLi > gxGsqobBQ; gxGsqobBQ++)
                            Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU] = Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU] - TdlJ6Bpsyzt;
                        M4xzGWXU = M4xzGWXU +1;
                    }
                }
                uirduhHnFecw = uirduhHnFecw + Rxy4fUrwk5n6[1][1];
                {
                    gxGsqobBQ = 1;
                    for (; gxGsqobBQ < L1vCFpDnLi -1;) {
                        Rxy4fUrwk5n6[gxGsqobBQ][0] = Rxy4fUrwk5n6[gxGsqobBQ + 1][0];
                        gxGsqobBQ++;
                    }
                }
                for (M4xzGWXU = 1; L1vCFpDnLi -1 > M4xzGWXU; M4xzGWXU = M4xzGWXU +1)
                    Rxy4fUrwk5n6[0][M4xzGWXU] = Rxy4fUrwk5n6[0][M4xzGWXU +1];
                for (gxGsqobBQ = 1; gxGsqobBQ < L1vCFpDnLi -1; gxGsqobBQ++) {
                    M4xzGWXU = 1;
                    for (; M4xzGWXU < L1vCFpDnLi -1;) {
                        Rxy4fUrwk5n6[gxGsqobBQ][M4xzGWXU] = Rxy4fUrwk5n6[gxGsqobBQ + 1][M4xzGWXU +1];
                        M4xzGWXU++;
                    }
                }
                L1vCFpDnLi = L1vCFpDnLi -1;
            }
            if (pNG3DmwhV2r == 1)
                cout << uirduhHnFecw;
            else
                cout << endl << uirduhHnFecw;
            pNG3DmwhV2r++;
        }
    }
    return 0;
}

