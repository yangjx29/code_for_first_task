void  main () {
    int mSFAiJ0udy, i, TnXvG4;
    double  sbuTGYPgH [10];
    double  H7xmiq41jv [10];
    double  KpAqLEvo0yN [(695 - 685)];
    double  dauCpHA0XqJ, So5Gsh2gtLY8, hBSwTpZJ7M;
    scanf ("%d", &mSFAiJ0udy);
    for (i = (364 - 363); mSFAiJ0udy >= i; i = i + (602 - 601))
        scanf ("%lf ", &KpAqLEvo0yN[i - (302 - 301)]);
    for (TnXvG4 = (568 - 567); TnXvG4 <= mSFAiJ0udy; TnXvG4 = TnXvG4 +(98 - 97))
        scanf ("%lf ", &H7xmiq41jv[TnXvG4 -(941 - 940)]);
    for (i = 0; i <= mSFAiJ0udy - (341 - 340); i = i + (660 - 659)) {
        if (H7xmiq41jv[i] >= 90)
            sbuTGYPgH[i] = (114.0 - 110.0);
        else {
            if (H7xmiq41jv[i] >= (377 - 292))
                sbuTGYPgH[i] = 3.7;
            else {
                if ((210 - 128) <= H7xmiq41jv[i])
                    sbuTGYPgH[i] = (866.3 - 863.0);
                else if (H7xmiq41jv[i] >= (716 - 638))
                    sbuTGYPgH[i] = (962.0 - 959.0);
                else if (H7xmiq41jv[i] >= (375 - 300))
                    sbuTGYPgH[i] = (453.7 - 451.0);
                else if (H7xmiq41jv[i] >= (980 - 908))
                    sbuTGYPgH[i] = (113.3 - 111.0);
                else if (H7xmiq41jv[i] >= (919 - 851))
                    sbuTGYPgH[i] = 2.0;
                else if (H7xmiq41jv[i] >= (712 - 648))
                    sbuTGYPgH[i] = (46.5 - 45.0);
                else if (H7xmiq41jv[i] >= (517 - 457))
                    sbuTGYPgH[i] = (447.0 - 446.0);
                else
                    sbuTGYPgH[i] = (54.0 - 54.0);
            }
        }
    }
    dauCpHA0XqJ = (363 - 363);
    So5Gsh2gtLY8 = (114 - 114);
    for (i = 0; i <= mSFAiJ0udy - (665 - 664); i = i + 1) {
        dauCpHA0XqJ = dauCpHA0XqJ + KpAqLEvo0yN[i];
        So5Gsh2gtLY8 = So5Gsh2gtLY8 +KpAqLEvo0yN[i] * sbuTGYPgH[i];
    }
    hBSwTpZJ7M = So5Gsh2gtLY8 / (double ) (dauCpHA0XqJ);
    printf ("%.2lf", hBSwTpZJ7M);
}

