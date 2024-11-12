main () {
    char Jl3iSx29;
    int iY6mxATctX, dAwXcv8DYNF;
    double  R05xstUIE, EDGZnSX9dY, jlYsqOu;
    double  hcZVKq7, mrEhS9, dGOphj, A0sD7L, UvKw6hRsp, jKFz7JVl;
    double  NMqXNFsaIg5, q9lR5SLC;
    double  A4fe7HzXpj [(821 - 721)] [3];
    scanf ("%d", &iY6mxATctX);
    for (dAwXcv8DYNF = (591 - 591); iY6mxATctX > dAwXcv8DYNF; dAwXcv8DYNF = dAwXcv8DYNF + 1) {
        scanf ("%lf%lf%lf\n", &R05xstUIE, &EDGZnSX9dY, &jlYsqOu);
        A4fe7HzXpj[dAwXcv8DYNF][(99 - 99)] = R05xstUIE;
        A4fe7HzXpj[dAwXcv8DYNF][1] = EDGZnSX9dY;
        A4fe7HzXpj[dAwXcv8DYNF][(103 - 101)] = jlYsqOu;
    }
    for (dAwXcv8DYNF = (635 - 635); dAwXcv8DYNF < iY6mxATctX; dAwXcv8DYNF = dAwXcv8DYNF + 1) {
        hcZVKq7 = A4fe7HzXpj[dAwXcv8DYNF][(398 - 398)];
        mrEhS9 = A4fe7HzXpj[dAwXcv8DYNF][1];
        dGOphj = A4fe7HzXpj[dAwXcv8DYNF][(586 - 584)];
        jKFz7JVl = mrEhS9 * mrEhS9 - 4 * hcZVKq7 * dGOphj;
        if ((726 - 726) < jKFz7JVl) {
            double  dGFlvn;
            dGFlvn = (541 - 539) * hcZVKq7;
            NMqXNFsaIg5 = (-mrEhS9 + sqrt (jKFz7JVl)) / dGFlvn;
            q9lR5SLC = (-mrEhS9 - sqrt (jKFz7JVl)) / dGFlvn;
            printf ("x1=%.5lf;x2=%.5lf\n", NMqXNFsaIg5, q9lR5SLC);
        }
        else {
            if (jKFz7JVl == (907 - 907)) {
                NMqXNFsaIg5 = -mrEhS9 / ((377 - 375) * hcZVKq7);
                printf ("x1=x2=%.5lf\n", NMqXNFsaIg5);
                q9lR5SLC = -mrEhS9 / (2 * hcZVKq7);
            }
            else {
                {
                    if (0) {
                        return 0;
                    }
                }
                A0sD7L = sqrt (-jKFz7JVl) / (2 * hcZVKq7);
                UvKw6hRsp = (-mrEhS9) / (2 * hcZVKq7);
                if (UvKw6hRsp != 0)
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", UvKw6hRsp, A0sD7L, UvKw6hRsp, A0sD7L);
                else
                    printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n", A0sD7L, A0sD7L);
            }
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

