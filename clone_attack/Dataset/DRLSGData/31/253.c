struct   Student {
    char azUrkg [(1044 - 944)];
    char bBOlnCh [(981 - 881)];
    char yUvNJKtFq;
    int KfFIMXAzx;
    char S9lTWYzp4q [20];
    char WgkOKzaEtp [100];
    struct   Student *s4LUgRcQubG;
    struct   Student *Iy03Gs;
};
int C4XRsSPGKx;

void  main () {
    struct   Student *JqE5UXA;
    struct   Student *WLKnJStvq;
    struct   Student *sd9vsY42noj;
    C4XRsSPGKx = (187 - 187);
    JqE5UXA = WLKnJStvq = (struct   Student *) malloc (LEN);
    scanf ("%s %s %c%d%s%s", JqE5UXA->azUrkg, JqE5UXA->bBOlnCh, &JqE5UXA->yUvNJKtFq, &JqE5UXA->KfFIMXAzx, JqE5UXA->S9lTWYzp4q, JqE5UXA->WgkOKzaEtp);
    JqE5UXA->Iy03Gs = NULL;
    for (; JqE5UXA->azUrkg[(903 - 903)] != 'e' || JqE5UXA->azUrkg[(677 - 676)] != 'n' || JqE5UXA->azUrkg[(276 - 274)] != 'd';) {
        C4XRsSPGKx = C4XRsSPGKx +1;
        if (!(1 != C4XRsSPGKx))
            sd9vsY42noj = JqE5UXA;
        else {
            WLKnJStvq = JqE5UXA;
            JqE5UXA = (struct   Student *) malloc (LEN);
            scanf ("%s %s %c%d%s%s", &JqE5UXA->azUrkg, &JqE5UXA->bBOlnCh, &JqE5UXA->yUvNJKtFq, &JqE5UXA->KfFIMXAzx, &JqE5UXA->S9lTWYzp4q, &JqE5UXA->WgkOKzaEtp);
            JqE5UXA->Iy03Gs = WLKnJStvq;
        }
    }
    for (; WLKnJStvq != NULL;) {
        printf ("%s %s %c %d %s %s\n", WLKnJStvq->azUrkg, WLKnJStvq->bBOlnCh, WLKnJStvq->yUvNJKtFq, WLKnJStvq->KfFIMXAzx, WLKnJStvq->S9lTWYzp4q, WLKnJStvq->WgkOKzaEtp);
        WLKnJStvq = WLKnJStvq->Iy03Gs;
    }
}

