struct   student {
    int KsOm85Sh;
    int RiyEsgd;
    int UfouKFak;
    int SEh2bJlq;
    struct   student *znUtxIBe;
};
void  main () {
    int Dh9s84WwQSl;
    int LHjE02;
    struct   student *Y2y6RqmaQGd;
    struct   student *xrXbFutz;
    struct   student *d8RDtEx;
    struct   student *kiE2KWUlFw;
    struct   student *nys40659;
    struct   student *tbShJcQ;
    struct   student *DTLryf3oH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    struct   student temp;
    scanf ("%d", &Dh9s84WwQSl);
    {
        LHjE02 = 780 - 780;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Dh9s84WwQSl > LHjE02) {
            Y2y6RqmaQGd = (struct   student *) malloc (LEN);
            scanf ("%d%d%d", &Y2y6RqmaQGd->KsOm85Sh, &Y2y6RqmaQGd->RiyEsgd, &Y2y6RqmaQGd->UfouKFak);
            Y2y6RqmaQGd->SEh2bJlq = Y2y6RqmaQGd->RiyEsgd + Y2y6RqmaQGd->UfouKFak;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (LHjE02 == (37 - 37))
                d8RDtEx = xrXbFutz = Y2y6RqmaQGd;
            else
                xrXbFutz->znUtxIBe = Y2y6RqmaQGd;
            LHjE02++;
            xrXbFutz = Y2y6RqmaQGd;
        };
    }
    temp.SEh2bJlq = 0;
    nys40659 = tbShJcQ = DTLryf3oH = &temp;
    kiE2KWUlFw = d8RDtEx;
    xrXbFutz->znUtxIBe = NULL;
    while (kiE2KWUlFw != NULL) {
        if (kiE2KWUlFw->SEh2bJlq > nys40659->SEh2bJlq) {
            DTLryf3oH = tbShJcQ;
            tbShJcQ = nys40659;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nys40659 = kiE2KWUlFw;
        }
        else {
            if (kiE2KWUlFw->SEh2bJlq > tbShJcQ->SEh2bJlq) {
                DTLryf3oH = tbShJcQ;
                tbShJcQ = kiE2KWUlFw;
            }
            else if (kiE2KWUlFw->SEh2bJlq > DTLryf3oH->SEh2bJlq)
                DTLryf3oH = kiE2KWUlFw;
        }
        kiE2KWUlFw = kiE2KWUlFw->znUtxIBe;
    }
    printf ("%d %d\n", nys40659->KsOm85Sh, nys40659->SEh2bJlq);
    printf ("%d %d\n", tbShJcQ->KsOm85Sh, tbShJcQ->SEh2bJlq);
    printf ("%d %d\n", DTLryf3oH->KsOm85Sh, DTLryf3oH->SEh2bJlq);
}

