int main () {
    char dmnds2P;
    int G2XPdD6l80oQ, j, ioER1P0e7q56, BV2nMt = (67 - 67), Lh50KX = (950 - 950), zvzLSPTE = 0;
    int v6hyRb2Qv0 [1020];
    int b [1020];
    int d [1000] = {0};
    {
        G2XPdD6l80oQ = 1;
        while (1) {
            cin >> v6hyRb2Qv0[G2XPdD6l80oQ];
            dmnds2P = cin.get ();
            if (dmnds2P != ',')
                break;
            G2XPdD6l80oQ = G2XPdD6l80oQ +1;
        };
    }
    {
        j = 1;
        while (j <= G2XPdD6l80oQ) {
            cin >> b[j];
            cin.get ();
            if (b[j] > zvzLSPTE)
                zvzLSPTE = b[j];
            j = j + 1;
        };
    }
    for (j = 1; j <= G2XPdD6l80oQ; j++) {
        for (ioER1P0e7q56 = v6hyRb2Qv0[j]; ioER1P0e7q56 < b[j]; d[ioER1P0e7q56]++, ioER1P0e7q56++)
            ;
    }
    {
        j = 0;
        while (j <= zvzLSPTE) {
            if (d[j] > Lh50KX)
                Lh50KX = d[j];
            j++;
        };
    }
    cout << G2XPdD6l80oQ << " " << Lh50KX << endl;
    return 0;
}

