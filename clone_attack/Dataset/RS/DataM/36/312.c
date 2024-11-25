void  main () {
    char zePqtmhXjNK [100];
    char b [100];
    int cs7m3IRa;
    int flbEtWhMwdaL [200] = {0};
    int d [200] = {0};
    int Wk5fGuQ2NV;
    int yzmC6BFJ;
    int rpfuFiO4Jv;
    int FykCG7UQ;
    cs7m3IRa = 0;
    scanf ("%s%s", zePqtmhXjNK, b);
    rpfuFiO4Jv = strlen (zePqtmhXjNK);
    FykCG7UQ = strlen (b);
    if (!(rpfuFiO4Jv == FykCG7UQ))
        ;
    else {
        {
            yzmC6BFJ = 0;
            while (rpfuFiO4Jv > yzmC6BFJ) {
                flbEtWhMwdaL[zePqtmhXjNK[yzmC6BFJ]]++;
                d[b[yzmC6BFJ]]++;
                yzmC6BFJ++;
            };
        }
        {
            yzmC6BFJ = 0;
            while (yzmC6BFJ < 200) {
                if (flbEtWhMwdaL[yzmC6BFJ] == d[yzmC6BFJ])
                    cs7m3IRa++;
                yzmC6BFJ++;
            };
        }
        if (cs7m3IRa == 200)
            printf ("YES");
        else
            printf ("NO");
    };
}

