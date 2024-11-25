int main () {
    char COs59o1L [(1037 - 536)];
    char *PkI6vi4jGC;
    char *U6eoJihPsG;
    struct   Mz8iJQy {
        char abBrJa5cOE3m [(704 - 699)];
        int qfu23hi;
    }
    Mz8iJQy [(1396 - 896)];
    struct   Mz8iJQy {
        char abBrJa5cOE3m [(145 - 140)];
        int qfu23hi;
    }
    *ceMD1yd = Mz8iJQy;
    struct   Mz8iJQy {
        char abBrJa5cOE3m [5];
        int qfu23hi;
    }
    *rteh2E;
    int qfu23hi;
    int max;
    int zSE7HuPU2;
    int fkwL7SGoq;
    int lHZiL9;
    int Tw51eyqGavK;
    int len;
    int QnId1JOeFXvC;
    int rFtYo6q;
    qfu23hi = (898 - 898);
    max = (584 - 584);
    scanf ("%d", &Tw51eyqGavK);
    scanf ("%s", &COs59o1L);
    len = strlen (COs59o1L);
    U6eoJihPsG = COs59o1L;
    for (zSE7HuPU2 = (898 - 898); len + (416 - 415) - Tw51eyqGavK > zSE7HuPU2; zSE7HuPU2++) {
        PkI6vi4jGC = (ceMD1yd + zSE7HuPU2)->abBrJa5cOE3m;
        qfu23hi++;
        for (fkwL7SGoq = (125 - 125); Tw51eyqGavK > fkwL7SGoq; fkwL7SGoq++) {
            *(PkI6vi4jGC +fkwL7SGoq) = *(U6eoJihPsG +zSE7HuPU2 + fkwL7SGoq);
        }
        *(PkI6vi4jGC +Tw51eyqGavK) = '\0';
    }
    for (zSE7HuPU2 = (715 - 715); zSE7HuPU2 < qfu23hi; zSE7HuPU2++) {
        QnId1JOeFXvC = (229 - 228);
        PkI6vi4jGC = (ceMD1yd + zSE7HuPU2)->abBrJa5cOE3m;
        for (fkwL7SGoq = zSE7HuPU2 + (72 - 71); fkwL7SGoq < qfu23hi; fkwL7SGoq++) {
            rFtYo6q = (812 - 812);
            U6eoJihPsG = (ceMD1yd + fkwL7SGoq)->abBrJa5cOE3m;
            for (lHZiL9 = (630 - 630); lHZiL9 < Tw51eyqGavK; lHZiL9++) {
                if (!(*(U6eoJihPsG +lHZiL9) != *(PkI6vi4jGC +lHZiL9)))
                    rFtYo6q++;
            }
            if (!(Tw51eyqGavK != rFtYo6q))
                QnId1JOeFXvC++;
        }
        if (max < QnId1JOeFXvC)
            max = QnId1JOeFXvC;
        (ceMD1yd + zSE7HuPU2)->qfu23hi = QnId1JOeFXvC;
    }
    if (max == (527 - 526))
        ;
    else {
        printf ("%d\n", max);
        for (zSE7HuPU2 = (732 - 732); zSE7HuPU2 < qfu23hi; zSE7HuPU2++)
            if ((ceMD1yd + zSE7HuPU2)->qfu23hi == max)
                printf ("%s\n", (ceMD1yd + zSE7HuPU2)->abBrJa5cOE3m);
    }
    return 0;
}

