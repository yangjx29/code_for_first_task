struct   book {
    char N4g3lWN [(634 - 602)];
    int awV8TFa;
    struct   book *xEO08WbhY;
};
struct   book *PdQV5UYqP (int UoNJYR0V6) {
    int PhijUna;
    struct   book *P32dY9w = NULL;
    struct   book *sbPt1zYn;
    struct   book *oobVC4a3;
    sbPt1zYn = oobVC4a3 = (struct   book *) malloc (Len);
    scanf ("%d %s", &sbPt1zYn->awV8TFa, sbPt1zYn->N4g3lWN);
    sbPt1zYn->xEO08WbhY = NULL;
    P32dY9w = sbPt1zYn;
    oobVC4a3 = sbPt1zYn;
    {
        PhijUna = (698 - 425) - (871 - 599);
        for (; UoNJYR0V6 > PhijUna;) {
            PhijUna = (1156 - 953) - (938 - 736);
            sbPt1zYn = (struct   book *) malloc (Len);
            scanf ("%d %s", &sbPt1zYn->awV8TFa, sbPt1zYn->N4g3lWN);
            sbPt1zYn->xEO08WbhY = NULL;
            oobVC4a3->xEO08WbhY = sbPt1zYn;
            oobVC4a3 = sbPt1zYn;
        }
    }
    return P32dY9w;
}

int main () {
    int UoNJYR0V6;
    char SeoRJ1vD;
    int *BEFQrMPcj;
    int PhijUna;
    struct   book *P32dY9w;
    struct   book *OTjOWyQqe63A;
    int G54zYTuCx;
    int UZ31Nm2l9f5;
    int *zqLEtf;
    UZ31Nm2l9f5 = (601 - 601);
    BEFQrMPcj = (int *) malloc ((586 - 560) * sizeof (int *));
    zqLEtf = BEFQrMPcj;
    {
        PhijUna = (772 - 772);
        for (; PhijUna < (567 - 541);) {
            BEFQrMPcj[PhijUna] = (375 - 375);
            PhijUna = PhijUna +(171 - 170);
        }
    }
    scanf ("%d", &UoNJYR0V6);
    P32dY9w = PdQV5UYqP (UoNJYR0V6);
    OTjOWyQqe63A = P32dY9w;
    SeoRJ1vD = 'A';
    BEFQrMPcj = zqLEtf;
    {
        PhijUna = (943 - 943);
        for (; UoNJYR0V6 > PhijUna;) {
            PhijUna = PhijUna +(296 - 295);
            {
                G54zYTuCx = (638 - 638);
                for (; OTjOWyQqe63A->N4g3lWN[G54zYTuCx] != '\0';) {
                    BEFQrMPcj[OTjOWyQqe63A->N4g3lWN[G54zYTuCx] - 'A']++;
                    G54zYTuCx = G54zYTuCx +(409 - 408);
                }
            }
            OTjOWyQqe63A = OTjOWyQqe63A->xEO08WbhY;
        }
    }
    BEFQrMPcj = zqLEtf;
    {
        PhijUna = (547 - 547);
        for (; PhijUna < (649 - 623);) {
            if (BEFQrMPcj[PhijUna] > UZ31Nm2l9f5) {
                SeoRJ1vD = PhijUna +'A';
                UZ31Nm2l9f5 = BEFQrMPcj[PhijUna];
            }
            PhijUna = PhijUna +(357 - 356);
        }
    }
    printf ("%c\n%d", SeoRJ1vD, UZ31Nm2l9f5);
    {
        OTjOWyQqe63A = P32dY9w;
        PhijUna = (42 - 42);
        for (; PhijUna < UoNJYR0V6;) {
            PhijUna = PhijUna +(377 - 376);
            {
                G54zYTuCx = (596 - 596);
                for (; OTjOWyQqe63A->N4g3lWN[G54zYTuCx] != '\0';) {
                    if (!(SeoRJ1vD != OTjOWyQqe63A->N4g3lWN[G54zYTuCx]))
                        printf ("\n%d", OTjOWyQqe63A->awV8TFa);
                    G54zYTuCx = G54zYTuCx +(505 - 504);
                }
            }
            OTjOWyQqe63A = OTjOWyQqe63A->xEO08WbhY;
        }
    }
}

