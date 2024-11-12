struct   stud {
    char uihIBEr6WYKq [(895 - 845)];
    char FK587Rnk [(339 - 289)];
    char D1HruZON3n;
    int nnhZgLMProqI;
    char S6NrkAG [(199 - 169)];
    char CIGdp4kFL1r [(240 - 190)];
    struct   stud *XIdG9NzY7K;
};
struct   stud *VxmECg9cQK () {
    char *lGdoyLQV9s = "end";
    struct   stud *SvqsYaBUo9S;
    struct   stud *brfchK;
    SvqsYaBUo9S = brfchK = (struct   stud *) malloc (LEN);
    SvqsYaBUo9S->XIdG9NzY7K = NULL;
    scanf ("%s", SvqsYaBUo9S->uihIBEr6WYKq);
    for (; strcmp (SvqsYaBUo9S->uihIBEr6WYKq, lGdoyLQV9s);) {
        scanf ("%s %c %d %s %s", SvqsYaBUo9S->FK587Rnk, &SvqsYaBUo9S->D1HruZON3n, &SvqsYaBUo9S->nnhZgLMProqI, SvqsYaBUo9S->S6NrkAG, SvqsYaBUo9S->CIGdp4kFL1r);
        brfchK = SvqsYaBUo9S;
        SvqsYaBUo9S = (struct   stud *) malloc (LEN);
        if (!(NULL != SvqsYaBUo9S))
            return NULL;
        SvqsYaBUo9S->XIdG9NzY7K = brfchK;
        scanf ("%s", SvqsYaBUo9S->uihIBEr6WYKq);
    }
    return (SvqsYaBUo9S->XIdG9NzY7K);
}

void  main () {
    struct   stud *szSTHtYK;
    szSTHtYK = VxmECg9cQK ();
    for (; szSTHtYK != NULL;) {
        printf ("%s %s %c %d %s %s\n", szSTHtYK->uihIBEr6WYKq, szSTHtYK->FK587Rnk, szSTHtYK->D1HruZON3n, szSTHtYK->nnhZgLMProqI, szSTHtYK->S6NrkAG, szSTHtYK->CIGdp4kFL1r);
        szSTHtYK = szSTHtYK->XIdG9NzY7K;
    }
}

