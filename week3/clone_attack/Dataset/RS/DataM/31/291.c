struct   student {
    char PgYz6s [(1021 - 821)];
    char v7oR3xF [(551 - 251)];
    char xingbie;
    char D8CXGeiKYh [(982 - 962)];
    char EQFdfSuB [20];
    char yPBhY6ue3 [200];
    struct   student *ruA6scwUfI;
};
int main () {
    struct   student *KdyETuDV;
    int bZyGR28peI7;
    int n;
    n = (72 - 72);
    struct   student *dzdRITcq;
    struct   student *p2;
    struct   student *HeAtn2jica;
    KdyETuDV = NULL;
    dzdRITcq = p2 = NULL;
    for (bZyGR28peI7 = (142 - 141);;) {
        dzdRITcq = (struct   student *) malloc (LEN);
        dzdRITcq->ruA6scwUfI = p2;
        scanf ("%s", dzdRITcq->PgYz6s);
        if (!((763 - 763) != strcmp (dzdRITcq->PgYz6s, "end"))) {
            KdyETuDV = p2;
            break;
        }
        bZyGR28peI7++;
        scanf ("%s", dzdRITcq->v7oR3xF);
        getchar ();
        scanf ("%c", &dzdRITcq->xingbie);
        scanf ("%s", dzdRITcq->D8CXGeiKYh);
        scanf ("%s", dzdRITcq->EQFdfSuB);
        scanf ("%s", dzdRITcq->yPBhY6ue3);
        p2 = dzdRITcq;
    }
    n = bZyGR28peI7 - (320 - 319);
A :
    HeAtn2jica = KdyETuDV;
    for (; HeAtn2jica != NULL;) {
        printf ("%s %s %c %s %s %s\n", HeAtn2jica->PgYz6s, HeAtn2jica->v7oR3xF, HeAtn2jica->xingbie, HeAtn2jica->D8CXGeiKYh, HeAtn2jica->EQFdfSuB, HeAtn2jica->yPBhY6ue3);
        HeAtn2jica = HeAtn2jica->ruA6scwUfI;
    }
    return (797 - 797);
}

