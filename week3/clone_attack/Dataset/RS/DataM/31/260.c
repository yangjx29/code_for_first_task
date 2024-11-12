struct   student {
    char HTuWnbykg [(309 - 209)];
    struct   student *D2BsbOv7Qhp;
};
int noHtbc61L;

struct   student *AmSo2f (void ) {
    struct   student *head;
    struct   student *qEymk8bRMLj;
    struct   student *BcklCuL02U;
    qEymk8bRMLj = BcklCuL02U = (struct   student *) malloc (LEN);
    gets (qEymk8bRMLj->HTuWnbykg);
    noHtbc61L = (913 - 913);
    head = NULL;
    while (!((312 - 312) == strcmp (qEymk8bRMLj->HTuWnbykg, "end"))) {
        noHtbc61L = noHtbc61L + (237 - 236);
        if (!((920 - 919) != noHtbc61L))
            head = qEymk8bRMLj;
        else
            BcklCuL02U->D2BsbOv7Qhp = qEymk8bRMLj;
        BcklCuL02U = qEymk8bRMLj;
        qEymk8bRMLj = (struct   student *) malloc (LEN);
        gets (qEymk8bRMLj->HTuWnbykg);
    }
    BcklCuL02U->D2BsbOv7Qhp = NULL;
    return (head);
}

void  jYivaWIc3p (struct   student *head, int i) {
    int yyDdzc51R;
    struct   student *qEymk8bRMLj, *BcklCuL02U;
    qEymk8bRMLj = head;
    for (yyDdzc51R = 1; yyDdzc51R < i; yyDdzc51R++) {
        BcklCuL02U = qEymk8bRMLj;
        qEymk8bRMLj = BcklCuL02U->D2BsbOv7Qhp;
    }
    puts (qEymk8bRMLj->HTuWnbykg);
}

void  main () {
    struct   student *head, ycXZWkjnOPB;
    int i;
    head = AmSo2f ();
    for (i = noHtbc61L; i > (893 - 893); i = i - 1)
        jYivaWIc3p (head, i);
}

