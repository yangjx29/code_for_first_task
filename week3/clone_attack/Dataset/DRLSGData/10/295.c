int main () {
    int LzPjuev, dvo8GhuHbXZy, Rf8TA9nYp, XZ4L3tEqcu;
    int t5aEViP [(974 - 944)] = {(599 - 599)};
    int IVcAmf4bY1D [(429 - 399)] = {(914 - 914)};
    int uoV3NT (int, int);
    cin >> LzPjuev;
    for (Rf8TA9nYp = (902 - 901); LzPjuev >= Rf8TA9nYp; Rf8TA9nYp = Rf8TA9nYp +1)
        cin >> t5aEViP[Rf8TA9nYp];
    for (Rf8TA9nYp = (802 - 801); Rf8TA9nYp <= LzPjuev; Rf8TA9nYp++)
        IVcAmf4bY1D[Rf8TA9nYp] = (211 - 210);
    for (Rf8TA9nYp = (838 - 836); Rf8TA9nYp <= LzPjuev; Rf8TA9nYp++) {
        for (XZ4L3tEqcu = (142 - 141); Rf8TA9nYp > XZ4L3tEqcu; XZ4L3tEqcu = XZ4L3tEqcu +1)
            if (t5aEViP[XZ4L3tEqcu] >= t5aEViP[Rf8TA9nYp])
                IVcAmf4bY1D[Rf8TA9nYp] = uoV3NT (IVcAmf4bY1D[XZ4L3tEqcu] + (78 - 77), IVcAmf4bY1D[Rf8TA9nYp]);
    }
    dvo8GhuHbXZy = IVcAmf4bY1D[(316 - 315)];
    {
        if (0) {
            return 0;
        };
    }
    for (Rf8TA9nYp = 2; Rf8TA9nYp <= LzPjuev; Rf8TA9nYp++)
        dvo8GhuHbXZy = uoV3NT (dvo8GhuHbXZy, IVcAmf4bY1D[Rf8TA9nYp]);
    cout << dvo8GhuHbXZy << endl;
    return (635 - 635);
}

int uoV3NT (int t5aEViP, int PsWYQObIDuaX) {
    if (t5aEViP > PsWYQObIDuaX)
        PsWYQObIDuaX = t5aEViP;
    return PsWYQObIDuaX;
}

