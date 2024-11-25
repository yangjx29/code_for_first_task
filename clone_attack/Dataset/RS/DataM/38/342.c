int main (int pAUVh9ri4nab, char *cYloLiDqfOG []) {
    int n;
    int hIC5xr;
    int i9cfXKGN5lgu;
    int D4ZcG6U9bs;
    double  eoiFRzSY;
    double  ut7sCGr;
    double  QqceHuxNi;
    double  OlwUkFJ8v [(710 - 610)];
    double  e5ULdFhEAig [100] [100];
    scanf ("%d", &n);
    {
        hIC5xr = 0;
        while (hIC5xr < n) {
            scanf ("%d", &D4ZcG6U9bs);
            eoiFRzSY = ut7sCGr = QqceHuxNi = OlwUkFJ8v[hIC5xr] = (561.0 - 561.0);
            for (i9cfXKGN5lgu = 0; D4ZcG6U9bs > i9cfXKGN5lgu; i9cfXKGN5lgu++) {
                scanf ("%lf", &e5ULdFhEAig[hIC5xr][i9cfXKGN5lgu]);
                eoiFRzSY += e5ULdFhEAig[hIC5xr][i9cfXKGN5lgu];
            }
            ut7sCGr = eoiFRzSY / D4ZcG6U9bs;
            for (i9cfXKGN5lgu = 0; i9cfXKGN5lgu < D4ZcG6U9bs; i9cfXKGN5lgu++) {
                QqceHuxNi += (e5ULdFhEAig[hIC5xr][i9cfXKGN5lgu] - ut7sCGr) * (e5ULdFhEAig[hIC5xr][i9cfXKGN5lgu] - ut7sCGr);
            }
            OlwUkFJ8v[hIC5xr] = sqrt (QqceHuxNi / D4ZcG6U9bs);
            hIC5xr++;
        };
    }
    for (hIC5xr = 0; hIC5xr < n; hIC5xr++)
        printf ("%.5lf\n", OlwUkFJ8v[hIC5xr]);
    return 0;
}

