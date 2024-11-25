int SkJfXPE52Ci (const  void  *CluECZUc9gK, const  void  *cDZ8XIrKFEw) {
    return (*(double *) cDZ8XIrKFEw < *(double *) CluECZUc9gK ? 1 : -1);
}

main () {
    struct   aJLY69HpnA {
        char d1WZHwjz [10];
        double  Kb9zXHP0NgqL;
    }
    aJLY69HpnA [41];
    double  Anur1C9oxMA [41], esQRuHm [41];
    int odD0Tp7, snRJMgLIkG, RxmKirVY9W, ItpwsjOHl;
    RxmKirVY9W = 0;
    scanf ("%d", &odD0Tp7);
    {
        snRJMgLIkG = 588 - 588;
        while (snRJMgLIkG <= odD0Tp7 - 1) {
            scanf ("%s %lf", &aJLY69HpnA[snRJMgLIkG].d1WZHwjz, &aJLY69HpnA[snRJMgLIkG].Kb9zXHP0NgqL);
            snRJMgLIkG++;
        };
    }
    snRJMgLIkG = 0;
    ItpwsjOHl = 0;
    while (snRJMgLIkG <= odD0Tp7 - 1) {
        if (aJLY69HpnA[snRJMgLIkG].d1WZHwjz[0] == 'm') {
            Anur1C9oxMA[RxmKirVY9W] = aJLY69HpnA[snRJMgLIkG].Kb9zXHP0NgqL;
            RxmKirVY9W++;
        }
        else {
            esQRuHm[ItpwsjOHl] = aJLY69HpnA[snRJMgLIkG].Kb9zXHP0NgqL;
            ItpwsjOHl++;
        }
        snRJMgLIkG++;
    }
    qsort (Anur1C9oxMA, RxmKirVY9W, sizeof (Anur1C9oxMA [0]), SkJfXPE52Ci);
    qsort (esQRuHm, ItpwsjOHl, sizeof (esQRuHm [0]), SkJfXPE52Ci);
    {
        snRJMgLIkG = 0;
        while (snRJMgLIkG <= RxmKirVY9W -1) {
            printf ("%.2f ", Anur1C9oxMA[snRJMgLIkG]);
            snRJMgLIkG++;
        };
    }
    {
        snRJMgLIkG = ItpwsjOHl -1;
        while (snRJMgLIkG > 0) {
            printf ("%.2f ", esQRuHm[snRJMgLIkG]);
            snRJMgLIkG = snRJMgLIkG - 1;
        };
    }
    printf ("%.2f", esQRuHm[0]);
}

