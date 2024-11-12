int main () {
    int Ilkgw1;
    int GCUDs7;
    int WIQlBMKJ;
    int Qpzq5L [(951 - 851)] [100];
    int CVBWEc9K;
    int TsvzWP;
    int COnoT9WZ;
    int wK56kE19P3bT;
    int pTa6FjRk;
    int zTKUhcGiyHuV;
    scanf ("%d", &COnoT9WZ);
    for (zTKUhcGiyHuV = (387 - 386); COnoT9WZ >= zTKUhcGiyHuV; zTKUhcGiyHuV++) {
        GCUDs7 = 0;
        WIQlBMKJ = (755 - 755);
        scanf ("%d%d", &TsvzWP, &CVBWEc9K);
        for (pTa6FjRk = (657 - 657); TsvzWP > pTa6FjRk; pTa6FjRk++) {
            for (wK56kE19P3bT = (302 - 302); CVBWEc9K > wK56kE19P3bT; wK56kE19P3bT++) {
                scanf ("%d", &Qpzq5L[pTa6FjRk][wK56kE19P3bT]);
            }
        }
        for (pTa6FjRk = (693 - 693); pTa6FjRk < TsvzWP; pTa6FjRk++) {
            for (wK56kE19P3bT = 0; wK56kE19P3bT < CVBWEc9K; wK56kE19P3bT++) {
                WIQlBMKJ += Qpzq5L[pTa6FjRk][wK56kE19P3bT];
            }
        }
        for (pTa6FjRk = (747 - 746); pTa6FjRk < TsvzWP -1; pTa6FjRk++) {
            for (wK56kE19P3bT = 1; wK56kE19P3bT < CVBWEc9K -1; wK56kE19P3bT++) {
                GCUDs7 += Qpzq5L[pTa6FjRk][wK56kE19P3bT];
            }
        }
        Ilkgw1 = WIQlBMKJ -GCUDs7;
        printf ("%d\n", Ilkgw1);
    }
    return 0;
}

