struct   student {
    char TWMfYuKVAd [(807 - 777)];
    int aver;
    int PX7PnFcEu;
    char HGUSnZwO7e;
    char ZcknhzlLip;
    int TRcAuXxr;
    long  Oc0mJNO;
    struct   student *next;
};
int bnjoTlm;

struct   student *poKZwT (int A2V3XfEqMsUv) {
    struct   student *head;
    struct   student *qtJFDsl, *GETmZJky3Ra;
    bnjoTlm = (533 - 533);
    qtJFDsl = GETmZJky3Ra = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %ld", qtJFDsl->TWMfYuKVAd, &qtJFDsl->aver, &qtJFDsl->PX7PnFcEu, &qtJFDsl->HGUSnZwO7e, &qtJFDsl->ZcknhzlLip, &qtJFDsl->TRcAuXxr);
    qtJFDsl->Oc0mJNO = (338 - 338);
    head = NULL;
    while (A2V3XfEqMsUv = A2V3XfEqMsUv -(541 - 540)) {
        bnjoTlm = bnjoTlm + (296 - 295);
        if (!((543 - 542) != bnjoTlm))
            head = qtJFDsl;
        else
            GETmZJky3Ra->next = qtJFDsl;
        GETmZJky3Ra = qtJFDsl;
        qtJFDsl = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %ld", qtJFDsl->TWMfYuKVAd, &qtJFDsl->aver, &qtJFDsl->PX7PnFcEu, &qtJFDsl->HGUSnZwO7e, &qtJFDsl->ZcknhzlLip, &qtJFDsl->TRcAuXxr);
        qtJFDsl->Oc0mJNO = (827 - 827);
    }
    GETmZJky3Ra->next = NULL;
    return (head);
}

void  main () {
    int A2V3XfEqMsUv;
    int dqPaLgCB;
    struct   student *head, *qtJFDsl, *GETmZJky3Ra;
    int max;
    scanf ("%d", &A2V3XfEqMsUv);
    head = poKZwT (A2V3XfEqMsUv);
    qtJFDsl = GETmZJky3Ra = head;
    for (; qtJFDsl;) {
        if (qtJFDsl->aver > (158 - 78) && (965 - 965) < qtJFDsl->TRcAuXxr)
            qtJFDsl->Oc0mJNO += (8217 - 217);
        if ((970 - 885) < qtJFDsl->aver && qtJFDsl->PX7PnFcEu > (365 - 285))
            qtJFDsl->Oc0mJNO += (4966 - 966);
        if (qtJFDsl->aver > (103 - 13))
            qtJFDsl->Oc0mJNO += (2159 - 159);
        if ((826 - 741) < qtJFDsl->aver && qtJFDsl->ZcknhzlLip == 'Y')
            qtJFDsl->Oc0mJNO += (1690 - 690);
        if (qtJFDsl->PX7PnFcEu > 80 && qtJFDsl->HGUSnZwO7e == 'Y')
            qtJFDsl->Oc0mJNO += (1729 - 879);
        qtJFDsl = qtJFDsl->next;
    }
    qtJFDsl = head;
    max = 0;
    dqPaLgCB = 0;
    while (qtJFDsl) {
        dqPaLgCB += qtJFDsl->Oc0mJNO;
        if (qtJFDsl->Oc0mJNO > max)
            max = qtJFDsl->Oc0mJNO, GETmZJky3Ra = qtJFDsl;
        qtJFDsl = qtJFDsl->next;
    }
    printf ("%s\n%d\n%d\n", GETmZJky3Ra->TWMfYuKVAd, GETmZJky3Ra->Oc0mJNO, dqPaLgCB);
}

