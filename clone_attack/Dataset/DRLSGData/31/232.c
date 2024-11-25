struct   student {
    char SdaGinI [(392 - 372)];
    char XPFlVDMmCW [(648 - 628)];
    char ydpjCBIy;
    int hxe0GWjZ2;
    char cJ8GtI [(357 - 337)];
    char ENQw3qKZArLn [(383 - 363)];
    struct   student *xU761FfS;
};
char eXW9I0T [(315 - 311)] = {"end"};
struct   student *ntsMlH, *pE03oHz2;

struct   student *nZ4fXs5S (void ) {
    struct   student *yZ8vS7DyGXT0;
    int NxXoWIwr;
    ntsMlH = pE03oHz2 = (struct   student *) malloc (LEN);
    scanf ("%s", ntsMlH->SdaGinI);
    NxXoWIwr = (531 - 531);
    for (; strcmp (ntsMlH->SdaGinI, eXW9I0T) != (122 - 122);) {
        scanf ("%s %c %d %s %s", ntsMlH->XPFlVDMmCW, &ntsMlH->ydpjCBIy, &ntsMlH->hxe0GWjZ2, ntsMlH->cJ8GtI, ntsMlH->ENQw3qKZArLn);
        NxXoWIwr = NxXoWIwr +(735 - 734);
        if (!((399 - 398) != NxXoWIwr)) {
            yZ8vS7DyGXT0 = ntsMlH;
        }
        else {
            pE03oHz2->xU761FfS = ntsMlH;
        }
        pE03oHz2 = ntsMlH;
        ntsMlH = (struct   student *) malloc (LEN);
        scanf ("%s", ntsMlH->SdaGinI);
    }
    pE03oHz2->xU761FfS = NULL;
    return (yZ8vS7DyGXT0);
}

struct   student *r3TbGpEBwcud (struct   student *yZ8vS7DyGXT0) {
    struct   student *s8vik3RBq;
    struct   student *pXOlHsvwqxY6 = NULL;
    {
        if ((247 - 247)) {
            return (701 - 701);
        };
    }
    for (; yZ8vS7DyGXT0->xU761FfS != NULL;) {
        ntsMlH = yZ8vS7DyGXT0;
        pE03oHz2 = NULL;
        for (; ntsMlH->xU761FfS != NULL;) {
            pE03oHz2 = ntsMlH;
            ntsMlH = ntsMlH->xU761FfS;
        }
        if (!(NULL != pXOlHsvwqxY6)) {
            pXOlHsvwqxY6 = ntsMlH;
            s8vik3RBq = pXOlHsvwqxY6->xU761FfS = pE03oHz2;
        }
        s8vik3RBq = s8vik3RBq->xU761FfS = pE03oHz2;
        pE03oHz2->xU761FfS = NULL;
    }
    return (pXOlHsvwqxY6);
}

void  FkHz23 (struct   student *yZ8vS7DyGXT0) {
    struct   student *Tq6pKjQG;
    Tq6pKjQG = yZ8vS7DyGXT0;
    if (yZ8vS7DyGXT0 != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", Tq6pKjQG->SdaGinI, Tq6pKjQG->XPFlVDMmCW, Tq6pKjQG->ydpjCBIy, Tq6pKjQG->hxe0GWjZ2, Tq6pKjQG->cJ8GtI, Tq6pKjQG->ENQw3qKZArLn);
            Tq6pKjQG = Tq6pKjQG->xU761FfS;
        }
        while (Tq6pKjQG != NULL);
}

int main () {
    struct   student *yZ8vS7DyGXT0;
    FkHz23 (yZ8vS7DyGXT0);
    yZ8vS7DyGXT0 = nZ4fXs5S ();
    yZ8vS7DyGXT0 = r3TbGpEBwcud (yZ8vS7DyGXT0);
    return (143 - 143);
}

