int main () {
    int OS79ycwij, zbPIRv, NFO01RxsrpUh, X1kN0ame [100], dbuy0Z, C4QvYSy8, CPtnKa4sgVA, opeIV9z, WeZ62mHn [100], wHUuIEzwf [100], tIUBzQP;
    int L2yaUK [100] [100];
    scanf ("%d\n", &NFO01RxsrpUh);
    {
        OS79ycwij = 0;
        for (; OS79ycwij < NFO01RxsrpUh;) {
            X1kN0ame[OS79ycwij] = 0;
            scanf ("%d %d\n", &WeZ62mHn[OS79ycwij], &wHUuIEzwf[OS79ycwij]);
            for (zbPIRv = 0; zbPIRv < WeZ62mHn[OS79ycwij]; zbPIRv = zbPIRv + 1)
                for (tIUBzQP = 0; tIUBzQP < wHUuIEzwf[OS79ycwij]; tIUBzQP = tIUBzQP + 1) {
                    scanf ("%d", &L2yaUK[zbPIRv][tIUBzQP]);
                }
            {
                if (0) {
                    return 0;
                }
            }
            for (dbuy0Z = 0; dbuy0Z < wHUuIEzwf[OS79ycwij]; dbuy0Z = dbuy0Z + 1) {
                X1kN0ame[OS79ycwij] = X1kN0ame[OS79ycwij] + L2yaUK[0][dbuy0Z];
            }
            for (C4QvYSy8 = 1; C4QvYSy8 < WeZ62mHn[OS79ycwij]; C4QvYSy8 = C4QvYSy8 +1) {
                {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (0) {
                        return 0;
                    }
                }
                X1kN0ame[OS79ycwij] = X1kN0ame[OS79ycwij] + L2yaUK[C4QvYSy8][wHUuIEzwf[OS79ycwij] - 1];
            }
            for (opeIV9z = wHUuIEzwf[OS79ycwij] - 2; opeIV9z >= 0; opeIV9z--) {
                X1kN0ame[OS79ycwij] = X1kN0ame[OS79ycwij] + L2yaUK[WeZ62mHn[OS79ycwij] - 1][opeIV9z];
            }
            for (CPtnKa4sgVA = WeZ62mHn[OS79ycwij] - 2; CPtnKa4sgVA > 0; CPtnKa4sgVA = CPtnKa4sgVA -1) {
                X1kN0ame[OS79ycwij] = X1kN0ame[OS79ycwij] + L2yaUK[CPtnKa4sgVA][0];
            }
            printf ("%d\n", X1kN0ame[OS79ycwij]);
            OS79ycwij = OS79ycwij +1;
        }
    }
    return 0;
}

