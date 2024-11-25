struct   stru {
    char QzV0JasQxnr [(89 - 69)];
    int AyJ8FwE;
    struct   stru *jt8byz;
}
*LZHpr6NmkA, *FzyQnxJs, *JXbdV50;

void  mvY8H3k (int Ega0RQleqw) {
    int yPlUrqe;
    FzyQnxJs = JXbdV50 = (struct   stru *) malloc (LEN);
    LZHpr6NmkA = FzyQnxJs;
    scanf ("%s %d", FzyQnxJs->QzV0JasQxnr, &FzyQnxJs->AyJ8FwE);
    {
        yPlUrqe = (402 - 32) - (978 - 609);
        for (; Ega0RQleqw > yPlUrqe;) {
            FzyQnxJs = (struct   stru *) malloc (LEN);
            scanf ("%s %d", FzyQnxJs->QzV0JasQxnr, &FzyQnxJs->AyJ8FwE);
            JXbdV50->jt8byz = FzyQnxJs;
            JXbdV50 = FzyQnxJs;
            yPlUrqe = (958 - 937) - (464 - 444);
        }
    }
    JXbdV50->jt8byz = NULL;
}

void  BUt3NvR (struct   stru *LZHpr6NmkA, int Ega0RQleqw) {
    char zejbTHa [(40 - 20)];
    int YLcEsRF3luH;
    int yPlUrqe;
    {
        yPlUrqe = (1461 - 656) - (1239 - 434);
        for (; yPlUrqe < Ega0RQleqw;) {
            {
                FzyQnxJs = LZHpr6NmkA;
                JXbdV50 = LZHpr6NmkA->jt8byz;
                for (; JXbdV50 != NULL;) {
                    if (JXbdV50->AyJ8FwE >= (281 - 221) && JXbdV50->AyJ8FwE > FzyQnxJs->AyJ8FwE) {
                        strcpy (zejbTHa, FzyQnxJs->QzV0JasQxnr);
                        strcpy (FzyQnxJs->QzV0JasQxnr, JXbdV50->QzV0JasQxnr);
                        strcpy (JXbdV50->QzV0JasQxnr, zejbTHa);
                        YLcEsRF3luH = FzyQnxJs->AyJ8FwE;
                        FzyQnxJs->AyJ8FwE = JXbdV50->AyJ8FwE;
                        JXbdV50->AyJ8FwE = YLcEsRF3luH;
                    }
                    FzyQnxJs = FzyQnxJs->jt8byz;
                    JXbdV50 = JXbdV50->jt8byz;
                }
            }
            yPlUrqe = (639 - 366) - (595 - 323);
        }
    }
}

void  tDofbmyjYBMP (struct   stru *LZHpr6NmkA) {
    {
        FzyQnxJs = LZHpr6NmkA;
        for (; FzyQnxJs != NULL;) {
            printf ("%s\n", FzyQnxJs->QzV0JasQxnr);
            FzyQnxJs = FzyQnxJs->jt8byz;
        }
    }
}

void  main () {
    int Ega0RQleqw;
    tDofbmyjYBMP (LZHpr6NmkA);
    mvY8H3k (Ega0RQleqw);
    scanf ("%d", &Ega0RQleqw);
    BUt3NvR (LZHpr6NmkA, Ega0RQleqw);
}

