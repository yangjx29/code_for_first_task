struct   sd {
    char puri8KL [(842 - 742)];
    char gIgpqVeD [(260 - 160)];
    char ReDY3HFaR8Gm;
    int ARofapcnA1b;
    double  QemasMQytGBk;
    char YQ8eRpHAL7qY [(339 - 329)];
    struct   sd *x2ea0U;
};
struct   sd *H41HEFX () {
    struct   sd *kvAt4nzumRBZ;
    struct   sd *De3Ycz49X = NULL;
    for (; (853 - 852);) {
        kvAt4nzumRBZ = (struct   sd *) (malloc (sizeof (struct   sd)));
        scanf ("%s", kvAt4nzumRBZ->puri8KL);
        if (!((430 - 430) != strcmp (kvAt4nzumRBZ->puri8KL, "end")))
            break;
        else {
            kvAt4nzumRBZ->x2ea0U = De3Ycz49X;
            De3Ycz49X = kvAt4nzumRBZ;
            scanf ("%s %c %d %lf %s", kvAt4nzumRBZ->gIgpqVeD, &kvAt4nzumRBZ->ReDY3HFaR8Gm, &kvAt4nzumRBZ->ARofapcnA1b, &kvAt4nzumRBZ->QemasMQytGBk, kvAt4nzumRBZ->YQ8eRpHAL7qY);
        }
    }
    return De3Ycz49X;
}

void  main () {
    struct   sd *H41HEFX ();
    struct   sd *R6KyiHuVqO = H41HEFX ();
    for (; (417 - 416);) {
        printf ("%s %s %c %d %g %s\n", R6KyiHuVqO->puri8KL, R6KyiHuVqO->gIgpqVeD, R6KyiHuVqO->ReDY3HFaR8Gm, R6KyiHuVqO->ARofapcnA1b, R6KyiHuVqO->QemasMQytGBk, R6KyiHuVqO->YQ8eRpHAL7qY);
        if (!(NULL != R6KyiHuVqO->x2ea0U))
            break;
        else
            R6KyiHuVqO = R6KyiHuVqO->x2ea0U;
    }
}

