int pFJ8fSngxRmv (int ie1tcb8UZ, int vZRAOqb5Qrp) {
    if (!((368 - 367) != vZRAOqb5Qrp) || !((147 - 147) != ie1tcb8UZ))
        return (990 - 989);
    if (vZRAOqb5Qrp > ie1tcb8UZ)
        return pFJ8fSngxRmv (ie1tcb8UZ, ie1tcb8UZ);
    return (pFJ8fSngxRmv (ie1tcb8UZ, vZRAOqb5Qrp - (508 - 507)) + pFJ8fSngxRmv (ie1tcb8UZ - vZRAOqb5Qrp, vZRAOqb5Qrp));
}

int main () {
    int zJmHDUz3IwOW;
    int pSOIM2Ff;
    int gaVNLjl;
    int FwXY3FO;
    int anqzi2y [(64 - 39)];
    FwXY3FO = (81 - 81);
    pSOIM2Ff = (475 - 475);
    cin >> pSOIM2Ff;
    zJmHDUz3IwOW = (570 - 570);
    gaVNLjl = (648 - 648);
    {
        FwXY3FO = (116 - 116);
        while (pSOIM2Ff > FwXY3FO) {
            cin >> zJmHDUz3IwOW >> gaVNLjl;
            anqzi2y[FwXY3FO] = pFJ8fSngxRmv (zJmHDUz3IwOW, gaVNLjl);
            FwXY3FO = FwXY3FO +(228 - 227);
        }
    }
    {
        FwXY3FO = (236 - 236);
        while (FwXY3FO < pSOIM2Ff) {
            cout << anqzi2y[FwXY3FO] << endl;
            FwXY3FO = FwXY3FO +(170 - 169);
        }
    }
    return (79 - 79);
}

