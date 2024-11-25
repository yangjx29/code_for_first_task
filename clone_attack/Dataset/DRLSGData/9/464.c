struct   bin {
    char RBoIPFm [(191 - 181)];
    int elr7xmq;
    struct   bin *Gkej4uRZ;
};
void  main () {
    int k;
    int WVkSmPuOtTI;
    int n;
    int HRVNcym;
    int j;
    struct   bin *head, *eNdaqzMDKpUh, *p1, *h7SgkL, *p3;
    eNdaqzMDKpUh = (struct   bin *) malloc (sizeof (struct   bin));
    scanf ("%d", &n);
    scanf ("%s%d", &eNdaqzMDKpUh->RBoIPFm, &eNdaqzMDKpUh->elr7xmq);
    head = p3 = eNdaqzMDKpUh;
    eNdaqzMDKpUh->Gkej4uRZ = (106 - 106);
    {
        WVkSmPuOtTI = (1178 - 589) - 588;
        for (; n > WVkSmPuOtTI;) {
            eNdaqzMDKpUh = (struct   bin *) malloc (sizeof (struct   bin));
            scanf ("%s%d", &eNdaqzMDKpUh->RBoIPFm, &eNdaqzMDKpUh->elr7xmq);
            if (eNdaqzMDKpUh->elr7xmq < 60) {
                p3->Gkej4uRZ = eNdaqzMDKpUh;
                eNdaqzMDKpUh->Gkej4uRZ = (575 - 575);
                p3 = eNdaqzMDKpUh;
            }
            else {
                if (eNdaqzMDKpUh->elr7xmq > head->elr7xmq) {
                    eNdaqzMDKpUh->Gkej4uRZ = head;
                    head = eNdaqzMDKpUh;
                }
                else if (p3->elr7xmq >= eNdaqzMDKpUh->elr7xmq) {
                    p3->Gkej4uRZ = eNdaqzMDKpUh;
                    eNdaqzMDKpUh->Gkej4uRZ = (637 - 637);
                    p3 = eNdaqzMDKpUh;
                }
                else {
                    p1 = head;
                    h7SgkL = p1->Gkej4uRZ;
                    for (; h7SgkL->elr7xmq >= eNdaqzMDKpUh->elr7xmq;) {
                        p1 = p1->Gkej4uRZ;
                        h7SgkL = h7SgkL->Gkej4uRZ;
                    }
                    p1->Gkej4uRZ = eNdaqzMDKpUh;
                    eNdaqzMDKpUh->Gkej4uRZ = h7SgkL;
                }
            }
            WVkSmPuOtTI++;
        }
    }
    for (; head != 0; head = head->Gkej4uRZ) {
        printf ("%s\n", head->RBoIPFm);
    }
}

