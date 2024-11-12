void  main () {
    int Sj9ni07goupv [5] [5], GfMsYG9yr, m, drILPexf, vZVr3O28qLub (int m, int drILPexf), IfevX6Qo9N, fPKZoErnJk6c;
    for (IfevX6Qo9N = (993 - 993); 5 > IfevX6Qo9N; IfevX6Qo9N = IfevX6Qo9N +1)
        for (fPKZoErnJk6c = 0; 5 > fPKZoErnJk6c; fPKZoErnJk6c = fPKZoErnJk6c + 1)
            scanf ("%d", &Sj9ni07goupv[IfevX6Qo9N][fPKZoErnJk6c]);
    scanf ("%d %d", &m, &drILPexf);
    if (!(0 != vZVr3O28qLub (m, drILPexf)))
        ;
    if (!(1 != vZVr3O28qLub (m, drILPexf))) {
        {
            IfevX6Qo9N = 0;
            while (5 > IfevX6Qo9N) {
                GfMsYG9yr = Sj9ni07goupv[m][IfevX6Qo9N];
                Sj9ni07goupv[m][IfevX6Qo9N] = Sj9ni07goupv[drILPexf][IfevX6Qo9N];
                Sj9ni07goupv[drILPexf][IfevX6Qo9N] = GfMsYG9yr;
                IfevX6Qo9N = IfevX6Qo9N +1;
            };
        }
        {
            IfevX6Qo9N = 0;
            while (IfevX6Qo9N < 5) {
                for (fPKZoErnJk6c = 0; 5 > fPKZoErnJk6c; fPKZoErnJk6c = fPKZoErnJk6c + 1) {
                    printf ("%d%c", Sj9ni07goupv[IfevX6Qo9N][fPKZoErnJk6c], (!(4 == fPKZoErnJk6c)) ? ' ' : '\n');
                }
                IfevX6Qo9N = IfevX6Qo9N +1;
            };
        };
    };
}

int vZVr3O28qLub (int m, int drILPexf) {
    int frlBD6U;
    if (4 < m || drILPexf > 4)
        frlBD6U = 0;
    if (m >= 0 && m <= 4 && drILPexf >= 0 && drILPexf <= 4)
        frlBD6U = 1;
    return (frlBD6U);
}

