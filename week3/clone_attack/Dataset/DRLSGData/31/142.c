struct   student {
    char W6wrzq [10];
    char ZkY1iOTxbtn [20];
    char iYlQgcxsF;
    int kSjpCI390m;
    char Uha9V1sN5 [20];
    char B02axfEOLQ [30];
    struct   student *pr3LzCEG7;
};
int main () {
    struct   student *Vl1E7UyAgQcH;
    struct   student *OG5vgZR;
    Vl1E7UyAgQcH = (struct   student *) malloc (LEN);
    Vl1E7UyAgQcH->pr3LzCEG7 = 0;
    scanf ("%s %s %c %d %s %s", Vl1E7UyAgQcH->W6wrzq, Vl1E7UyAgQcH->ZkY1iOTxbtn, &Vl1E7UyAgQcH->iYlQgcxsF, &Vl1E7UyAgQcH->kSjpCI390m, &Vl1E7UyAgQcH->Uha9V1sN5, Vl1E7UyAgQcH->B02axfEOLQ);
    while (1) {
        OG5vgZR = Vl1E7UyAgQcH;
        Vl1E7UyAgQcH = (struct   student *) malloc (LEN);
        Vl1E7UyAgQcH->pr3LzCEG7 = OG5vgZR;
        scanf ("%s %s %c %d %s %s", Vl1E7UyAgQcH->W6wrzq, Vl1E7UyAgQcH->ZkY1iOTxbtn, &Vl1E7UyAgQcH->iYlQgcxsF, &Vl1E7UyAgQcH->kSjpCI390m, &Vl1E7UyAgQcH->Uha9V1sN5, Vl1E7UyAgQcH->B02axfEOLQ);
        if (!('e' != Vl1E7UyAgQcH->W6wrzq[0]))
            break;
    }
    while (Vl1E7UyAgQcH->pr3LzCEG7 != 0) {
        Vl1E7UyAgQcH = Vl1E7UyAgQcH->pr3LzCEG7;
        printf ("%s %s %c %d %s %s\n", Vl1E7UyAgQcH->W6wrzq, Vl1E7UyAgQcH->ZkY1iOTxbtn, Vl1E7UyAgQcH->iYlQgcxsF, Vl1E7UyAgQcH->kSjpCI390m, Vl1E7UyAgQcH->Uha9V1sN5, Vl1E7UyAgQcH->B02axfEOLQ);
    }
    return 0;
}

