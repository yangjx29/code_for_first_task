void  main () {
    int TGIBrbpwns;
    int q3jafXt1e;
    int D347YGBVoCb;
    int rNqhTsmtoLUx;
    int VivtKnl;
    char ucwYld9f [(158 - 108)], diSwDe5y3 [50], Z3oFsfikSl [50] = {(619 - 619)};
    int dYAQkxGbp;
    D347YGBVoCb = (692 - 692);
    rNqhTsmtoLUx = (693 - 693);
    dYAQkxGbp = strlen (ucwYld9f);
    scanf ("%s", ucwYld9f);
    TGIBrbpwns = strlen (diSwDe5y3);
    scanf ("%s", diSwDe5y3);
    for (q3jafXt1e = (272 - 272); q3jafXt1e < TGIBrbpwns; q3jafXt1e++) {
        for (VivtKnl = 0; VivtKnl < dYAQkxGbp; VivtKnl++) {
            if (!(ucwYld9f[VivtKnl] != diSwDe5y3[VivtKnl +q3jafXt1e]))
                Z3oFsfikSl[q3jafXt1e] = Z3oFsfikSl[q3jafXt1e] + 1;
        }
    }
    {
        q3jafXt1e = 0;
        for (; q3jafXt1e < TGIBrbpwns;) {
            if (Z3oFsfikSl[q3jafXt1e] == dYAQkxGbp) {
                printf ("%d\n", q3jafXt1e);
                break;
            }
            q3jafXt1e++;
        }
    }
}

