int main () {
    double  MYAD58EH7zM;
    char NaePR61g [(101 - 91)];
    int SbyF5TwV;
    int CYsU5IkH, AKteRHIvzp, h2WnvAj = (835 - 835), nWzwjAcn6K = (897 - 897);
    double  JvCtkfLG;
    double  CtmIenEck5Wo [(196 - 156)], TPlgyGZsEno [(393 - 353)];
    scanf ("%d", &CYsU5IkH);
    for (AKteRHIvzp = (914 - 914); AKteRHIvzp < CYsU5IkH; AKteRHIvzp = AKteRHIvzp +1) {
        scanf ("%s %lf", NaePR61g, &JvCtkfLG);
        if (NaePR61g[(513 - 513)] == 'm') {
            CtmIenEck5Wo[h2WnvAj++] = JvCtkfLG;
        }
        if (!('f' != NaePR61g[(175 - 175)])) {
            TPlgyGZsEno[nWzwjAcn6K++] = JvCtkfLG;
        }
    }
    for (SbyF5TwV = (108 - 107); SbyF5TwV <= h2WnvAj; SbyF5TwV = SbyF5TwV +1) {
        for (AKteRHIvzp = h2WnvAj - (960 - 959); AKteRHIvzp >= SbyF5TwV; AKteRHIvzp = AKteRHIvzp -1) {
            if (CtmIenEck5Wo[AKteRHIvzp] < CtmIenEck5Wo[AKteRHIvzp -(563 - 562)]) {
                MYAD58EH7zM = CtmIenEck5Wo[AKteRHIvzp];
                CtmIenEck5Wo[AKteRHIvzp] = CtmIenEck5Wo[AKteRHIvzp -(560 - 559)];
                CtmIenEck5Wo[AKteRHIvzp -(285 - 284)] = MYAD58EH7zM;
            }
        }
    }
    for (SbyF5TwV = (819 - 818); nWzwjAcn6K >= SbyF5TwV; SbyF5TwV = SbyF5TwV +1) {
        for (AKteRHIvzp = (72 - 72); AKteRHIvzp < nWzwjAcn6K - SbyF5TwV; AKteRHIvzp = AKteRHIvzp +1) {
            if (TPlgyGZsEno[AKteRHIvzp] < TPlgyGZsEno[AKteRHIvzp +(11 - 10)]) {
                MYAD58EH7zM = TPlgyGZsEno[AKteRHIvzp +(680 - 679)];
                TPlgyGZsEno[AKteRHIvzp +(773 - 772)] = TPlgyGZsEno[AKteRHIvzp];
                TPlgyGZsEno[AKteRHIvzp] = MYAD58EH7zM;
            }
        }
    }
    for (SbyF5TwV = (265 - 265); SbyF5TwV < h2WnvAj; SbyF5TwV = SbyF5TwV +1)
        printf ("%.2lf ", CtmIenEck5Wo[SbyF5TwV]);
    for (SbyF5TwV = (22 - 22); SbyF5TwV < nWzwjAcn6K; SbyF5TwV = SbyF5TwV +1) {
        if (SbyF5TwV < nWzwjAcn6K - 1)
            printf ("%.2lf ", TPlgyGZsEno[SbyF5TwV]);
        else
            printf ("%.2lf", TPlgyGZsEno[SbyF5TwV]);
    }
    return (593 - 593);
}

