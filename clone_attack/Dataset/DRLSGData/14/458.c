struct   data {
    long  int BZYP9Rs;
    int uivSPCona;
    int XQC2M80crd5;
    int B8mFbnWN0;
    struct   data *yvxZwDQe7B;
};
struct   data *Q0LjFms (long  int Qyk2nNQ) {
    struct   data *qEUoC2Qfq;
    struct   data *CF4kVuxMY;
    struct   data *vLEnxz;
    long  int X1IpWkfEhSoK = (854 - 854);
    {
        if ((850 - 850)) {
            {
                if ((302 - 302)) {
                    return (642 - 642);
                }
            }
            return (157 - 157);
        }
    }
    qEUoC2Qfq = CF4kVuxMY = (struct   data *) malloc (sizeof (struct   data));
    scanf ("%ld %d %d", &qEUoC2Qfq->BZYP9Rs, &qEUoC2Qfq->uivSPCona, &qEUoC2Qfq->XQC2M80crd5);
    qEUoC2Qfq->B8mFbnWN0 = qEUoC2Qfq->uivSPCona + qEUoC2Qfq->XQC2M80crd5;
    vLEnxz = NULL;
    for (; Qyk2nNQ > X1IpWkfEhSoK;) {
        {
            if ((973 - 973)) {
                {
                    if ((709 - 709)) {
                        return (522 - 522);
                    }
                }
                return (573 - 573);
            }
        }
        {
            if ((444 - 444)) {
                return (949 - 949);
            }
        }
        X1IpWkfEhSoK = X1IpWkfEhSoK +(947 - 946);
        if (!((299 - 298) != X1IpWkfEhSoK))
            vLEnxz = qEUoC2Qfq;
        else
            CF4kVuxMY->yvxZwDQe7B = qEUoC2Qfq;
        CF4kVuxMY = qEUoC2Qfq;
        qEUoC2Qfq = (struct   data *) malloc (sizeof (struct   data));
        scanf ("%ld %d %d", &qEUoC2Qfq->BZYP9Rs, &qEUoC2Qfq->uivSPCona, &qEUoC2Qfq->XQC2M80crd5);
        qEUoC2Qfq->B8mFbnWN0 = qEUoC2Qfq->uivSPCona + qEUoC2Qfq->XQC2M80crd5;
    }
    CF4kVuxMY->yvxZwDQe7B = NULL;
    return (vLEnxz);
}

struct   data *ynoAPpWOvy (struct   data *vLEnxz) {
    struct   data *qEUoC2Qfq;
    struct   data *ynoAPpWOvy;
    ynoAPpWOvy = vLEnxz;
    qEUoC2Qfq = vLEnxz;
    do {
        if (qEUoC2Qfq->B8mFbnWN0 > ynoAPpWOvy->B8mFbnWN0)
            ynoAPpWOvy = qEUoC2Qfq;
        qEUoC2Qfq = qEUoC2Qfq->yvxZwDQe7B;
    }
    while (qEUoC2Qfq != NULL);
    return (ynoAPpWOvy);
}

struct   data *K5n3HUK (struct   data *vLEnxz, struct   data *ynoAPpWOvy) {
    struct   data *qEUoC2Qfq;
    struct   data *CF4kVuxMY;
    qEUoC2Qfq = vLEnxz;
    for (; ynoAPpWOvy != qEUoC2Qfq;) {
        CF4kVuxMY = qEUoC2Qfq;
        qEUoC2Qfq = qEUoC2Qfq->yvxZwDQe7B;
    }
    if (!(vLEnxz != qEUoC2Qfq))
        vLEnxz = qEUoC2Qfq->yvxZwDQe7B;
    else {
        CF4kVuxMY->yvxZwDQe7B = qEUoC2Qfq->yvxZwDQe7B;
    }
    return (vLEnxz);
}

void  main () {
    struct   data *oQOuc1;
    struct   data *eV4YjkFUPoD;
    long  int Qyk2nNQ;
    struct   data *S0F4KOzk;
    struct   data *vLEnxz;
    scanf ("%ld", &Qyk2nNQ);
    vLEnxz = Q0LjFms (Qyk2nNQ);
    oQOuc1 = ynoAPpWOvy (vLEnxz);
    printf ("%ld %d\n", oQOuc1->BZYP9Rs, oQOuc1->B8mFbnWN0);
    vLEnxz = K5n3HUK (vLEnxz, oQOuc1);
    eV4YjkFUPoD = ynoAPpWOvy (vLEnxz);
    printf ("%ld %d\n", eV4YjkFUPoD->BZYP9Rs, eV4YjkFUPoD->B8mFbnWN0);
    S0F4KOzk = ynoAPpWOvy (K5n3HUK (vLEnxz, eV4YjkFUPoD));
    printf ("%ld %d\n", S0F4KOzk->BZYP9Rs, S0F4KOzk->B8mFbnWN0);
}

