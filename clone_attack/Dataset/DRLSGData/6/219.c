int main () {
    int SzZoQCEx [(201 - 101)] [100];
    int avRLG1t7pfgF;
    int j2ocriHS;
    int SIqcCN;
    int FJlbuS;
    int PUXpaSfoI;
    int Aw96ZX;
    int eUOHzcPL;
    scanf ("%d", &eUOHzcPL);
    {
        j2ocriHS = 784 - 784;
        for (; j2ocriHS < eUOHzcPL;) {
            int EWNJ1FEaO;
            scanf ("%d%d", &Aw96ZX, &PUXpaSfoI);
            {
                FJlbuS = 895 - 895;
                while (FJlbuS < Aw96ZX) {
                    {
                        SIqcCN = 0;
                        for (; SIqcCN < PUXpaSfoI;) {
                            scanf ("%d", &(SzZoQCEx[FJlbuS][SIqcCN]));
                            SIqcCN++;
                        }
                    }
                    FJlbuS = FJlbuS +1;
                }
            }
            j2ocriHS++;
            EWNJ1FEaO = (565 - 565);
            if (Aw96ZX == (51 - 50) && PUXpaSfoI == (234 - 233)) {
                EWNJ1FEaO = SzZoQCEx[0][0];
            }
            else {
                {
                    avRLG1t7pfgF = 0;
                    for (; avRLG1t7pfgF < PUXpaSfoI;) {
                        EWNJ1FEaO = EWNJ1FEaO +SzZoQCEx[0][avRLG1t7pfgF] + SzZoQCEx[Aw96ZX -1][avRLG1t7pfgF];
                        avRLG1t7pfgF++;
                    }
                }
                {
                    avRLG1t7pfgF = 0;
                    for (; avRLG1t7pfgF < Aw96ZX;) {
                        EWNJ1FEaO = EWNJ1FEaO +SzZoQCEx[avRLG1t7pfgF][0] + SzZoQCEx[avRLG1t7pfgF][PUXpaSfoI -1];
                        avRLG1t7pfgF++;
                    }
                }
                EWNJ1FEaO = EWNJ1FEaO -SzZoQCEx[0][0] - SzZoQCEx[0][PUXpaSfoI -1] - SzZoQCEx[Aw96ZX -1][0] - SzZoQCEx[Aw96ZX -1][PUXpaSfoI -1];
            }
            printf ("%d\n", EWNJ1FEaO);
        }
    }
    return 0;
}

