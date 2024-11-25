main () {
    char uL09JV7U28O [1000];
    int EdTx3C82W;
    int W3Koi7hg;
    int mxo1UHVj;
    int oheitzXVu;
    int g;
    int qxtHLEQ8qoOJ [1000];
    scanf ("%s", uL09JV7U28O);
    W3Koi7hg = strlen (uL09JV7U28O);
    for (g = 0; 1000 > g; g++)
        qxtHLEQ8qoOJ[g] = 0;
    for (EdTx3C82W = 0; EdTx3C82W < W3Koi7hg; EdTx3C82W = EdTx3C82W +qxtHLEQ8qoOJ[EdTx3C82W]) {
        for (mxo1UHVj = EdTx3C82W; W3Koi7hg >= mxo1UHVj; mxo1UHVj++) {
            if (!(uL09JV7U28O[EdTx3C82W] != uL09JV7U28O[mxo1UHVj]) || uL09JV7U28O[mxo1UHVj] == (uL09JV7U28O[EdTx3C82W] + 32) || uL09JV7U28O[EdTx3C82W] == (uL09JV7U28O[mxo1UHVj] + 32))
                qxtHLEQ8qoOJ[EdTx3C82W]++;
            else
                break;
        };
    }
    for (oheitzXVu = 0; oheitzXVu <= W3Koi7hg; oheitzXVu++) {
        if (qxtHLEQ8qoOJ[oheitzXVu] != 0) {
            if (uL09JV7U28O[oheitzXVu] > 'Z')
                printf ("(%c,%d)", uL09JV7U28O[oheitzXVu] - 32, qxtHLEQ8qoOJ[oheitzXVu]);
            else
                printf ("(%c,%d)", uL09JV7U28O[oheitzXVu], qxtHLEQ8qoOJ[oheitzXVu]);
        };
    };
}

