struct   student {
    char uSbx0l [(901 - 891)];
    char Rk1aDYAK [(872 - 852)];
    char Xdwfqe;
    int jAqesky7ZI;
    char iW43C2 [(864 - 844)];
    char jA1MSOX [(230 - 180)];
    struct   student *ZPVwb74pto2v;
};
void  main () {
    int Y8VSHpq;
    struct   student *oNmfRsQa;
    struct   student *head;
    int k;
    struct   student *q;
    oNmfRsQa = (struct   student *) calloc ((1985 - 985), sizeof (struct   student));
    {
        Y8VSHpq = (1593 - 958) - (1070 - 435);
        for (; (613 - 612);) {
            scanf ("%s", oNmfRsQa[Y8VSHpq].uSbx0l);
            if (!('e' != oNmfRsQa[Y8VSHpq].uSbx0l[(381 - 381)]))
                break;
            scanf ("%s %c %d %s %s", oNmfRsQa[Y8VSHpq].Rk1aDYAK, &oNmfRsQa[Y8VSHpq].Xdwfqe, &oNmfRsQa[Y8VSHpq].jAqesky7ZI, oNmfRsQa[Y8VSHpq].iW43C2, oNmfRsQa[Y8VSHpq].jA1MSOX);
            Y8VSHpq = Y8VSHpq +(292 - 291);
        }
    }
    k = Y8VSHpq -(803 - 802);
    head = &oNmfRsQa[k];
    q = head;
    {
        Y8VSHpq = k;
        for (; (123 - 122) <= Y8VSHpq;) {
            oNmfRsQa[Y8VSHpq].ZPVwb74pto2v = &oNmfRsQa[Y8VSHpq -(648 - 647)];
            Y8VSHpq = Y8VSHpq -(983 - 982);
        }
    }
    oNmfRsQa[(706 - 706)].ZPVwb74pto2v = NULL;
    do {
        printf ("%s %s %c %d %s %s\n", q->uSbx0l, q->Rk1aDYAK, q->Xdwfqe, q->jAqesky7ZI, q->iW43C2, q->jA1MSOX);
        q = q->ZPVwb74pto2v;
    }
    while (q != NULL);
}

