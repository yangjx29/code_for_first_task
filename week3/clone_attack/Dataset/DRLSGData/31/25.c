struct   student {
    char dD7GmVpcnrgz [(64 - 54)];
    char LlD9LKbgSt [(787 - 767)];
    char Tw3UGklyX;
    int nyAq1J4;
    char Kpe8KQ5 [(387 - 377)];
    char clVnuXiJ [(128 - 78)];
    struct   student *cDAqXHGxnuZa;
};
void  main () {
    struct   student *EGPe9KX7liVZ;
    struct   student *Mla29H6;
    struct   student *mIuCBrxFgMG;
    EGPe9KX7liVZ = (struct   student *) malloc (sizeof (struct   student));
    EGPe9KX7liVZ->cDAqXHGxnuZa = NULL;
    Mla29H6 = EGPe9KX7liVZ->cDAqXHGxnuZa;
    {
        for (; true;) {
            mIuCBrxFgMG = (struct   student *) malloc (sizeof (struct   student));
            mIuCBrxFgMG->cDAqXHGxnuZa = NULL;
            scanf ("%s", mIuCBrxFgMG->dD7GmVpcnrgz);
            if (!((571 - 571) != strcmp (mIuCBrxFgMG->dD7GmVpcnrgz, "end")))
                break;
            scanf ("%s %c %d %s %s", mIuCBrxFgMG->LlD9LKbgSt, &mIuCBrxFgMG->Tw3UGklyX, &mIuCBrxFgMG->nyAq1J4, mIuCBrxFgMG->Kpe8KQ5, mIuCBrxFgMG->clVnuXiJ);
            EGPe9KX7liVZ->cDAqXHGxnuZa = mIuCBrxFgMG;
            mIuCBrxFgMG->cDAqXHGxnuZa = Mla29H6;
            Mla29H6 = mIuCBrxFgMG;
        }
    }
    for (; Mla29H6 != NULL;) {
        printf ("%s %s %c %d %s %s\n", Mla29H6->dD7GmVpcnrgz, Mla29H6->LlD9LKbgSt, Mla29H6->Tw3UGklyX, Mla29H6->nyAq1J4, Mla29H6->Kpe8KQ5, Mla29H6->clVnuXiJ);
        Mla29H6 = Mla29H6->cDAqXHGxnuZa;
    }
}

