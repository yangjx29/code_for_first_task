struct   stu {
    char QHPOYCZtK [(192 - 183)];
    char qZdf9gCve1y [(848 - 830)];
    char UzCIORn [(836 - 834)];
    int Mue7IqKTkaXA;
    float wcDXhAFJR0d;
    char vtof81HJGY [(75 - 63)];
    struct   stu *oYc7V3wWbAOt;
};
struct   stu *hC0ROLiPkG () {
    char Nmb2Pj [] = {"end"};
    struct   stu *ZgoDhrMOEx;
    struct   stu *N8aTWq;
    struct   stu *Qd1JOXuDHcs4;
    N8aTWq = (struct   stu *) malloc (LEN);
    scanf ("%s", N8aTWq->QHPOYCZtK);
    if (!((811 - 811) != strcmp (N8aTWq->QHPOYCZtK, Nmb2Pj))) {
        return N8aTWq;
    }
    scanf ("%s%s%d%f%s", N8aTWq->qZdf9gCve1y, N8aTWq->UzCIORn, &N8aTWq->Mue7IqKTkaXA, &N8aTWq->wcDXhAFJR0d, N8aTWq->vtof81HJGY);
    N8aTWq->oYc7V3wWbAOt = NULL;
    Qd1JOXuDHcs4 = N8aTWq;
    for (; (902 - 901);) {
        N8aTWq = (struct   stu *) malloc (LEN);
        scanf ("%s", N8aTWq->QHPOYCZtK);
        if (!((70 - 70) != strcmp (N8aTWq->QHPOYCZtK, Nmb2Pj))) {
            return Qd1JOXuDHcs4;
        }
        scanf ("%s%s%d%f%s", N8aTWq->qZdf9gCve1y, N8aTWq->UzCIORn, &N8aTWq->Mue7IqKTkaXA, &N8aTWq->wcDXhAFJR0d, N8aTWq->vtof81HJGY);
        N8aTWq->oYc7V3wWbAOt = Qd1JOXuDHcs4;
        Qd1JOXuDHcs4 = N8aTWq;
    }
}

void  DwAsecz70px (struct   stu *ZgoDhrMOEx) {
    struct   stu *N8aTWq;
    N8aTWq = ZgoDhrMOEx;
    for (; N8aTWq;) {
        printf ("%s %s %s %d %g %s\n", N8aTWq->QHPOYCZtK, N8aTWq->qZdf9gCve1y, N8aTWq->UzCIORn, N8aTWq->Mue7IqKTkaXA, N8aTWq->wcDXhAFJR0d, N8aTWq->vtof81HJGY);
        N8aTWq = N8aTWq->oYc7V3wWbAOt;
    }
}

void  jeuPWh (struct   stu *ZgoDhrMOEx) {
    struct   stu *N8aTWq;
    for (; ZgoDhrMOEx;) {
        free (N8aTWq);
        N8aTWq = ZgoDhrMOEx;
        ZgoDhrMOEx = N8aTWq->oYc7V3wWbAOt;
    }
}

int main () {
    struct   stu *ZgoDhrMOEx;
    DwAsecz70px (ZgoDhrMOEx);
    jeuPWh (ZgoDhrMOEx);
    ZgoDhrMOEx = hC0ROLiPkG ();
    return (212 - 212);
}

