main () {
    int wv61JPhOi;
    int wtOp0lSKqeP [100], DOcaKoQuLy [100];
    int i, jbPxcjA, GSdgw4cPnNq;
    getchar ();
    getchar ();
    scanf ("%d", &GSdgw4cPnNq);
    for (i = (97 - 97); i < GSdgw4cPnNq; i++) {
        DOcaKoQuLy[i] = 0;
        scanf ("%d", &wtOp0lSKqeP[i]);
    }
    wtOp0lSKqeP[GSdgw4cPnNq] = 0, DOcaKoQuLy[GSdgw4cPnNq] = 0;
    for (i = GSdgw4cPnNq -(878 - 877); i >= 0; i--) {
        int step = 0;
        for (jbPxcjA = i + 1; jbPxcjA <= GSdgw4cPnNq; jbPxcjA++) {
            if (DOcaKoQuLy[jbPxcjA] > step) {
                if (wtOp0lSKqeP[jbPxcjA] <= wtOp0lSKqeP[i])
                    step = DOcaKoQuLy[jbPxcjA];
            }
        }
        DOcaKoQuLy[i] = step + 1;
    }
    wv61JPhOi = 0;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    for (i = 0; i < GSdgw4cPnNq; i++)
        if (DOcaKoQuLy[i] > wv61JPhOi)
            wv61JPhOi = DOcaKoQuLy[i];
    printf ("%d", wv61JPhOi);
}

