void  main () {
    float BYrhCSqzFT;
    int qFBWzMOUEHw;
    int qtyp1L [(901 - 601)];
    int WFGSCQ;
    int pi1qTC2p;
    int Cw8cK2aQJ;
    float QM4aJHI0lFuC;
    float mxTfqU8WSct5;
    scanf ("%d", &qFBWzMOUEHw);
    QM4aJHI0lFuC = (299 - 299);
    mxTfqU8WSct5 = (471 - 471);
    {
        WFGSCQ = (828 - 828);
        for (; WFGSCQ < qFBWzMOUEHw;) {
            scanf ("%d", &qtyp1L[WFGSCQ]);
            mxTfqU8WSct5 = mxTfqU8WSct5 + qtyp1L[WFGSCQ];
            WFGSCQ = WFGSCQ +(546 - 545);
        }
    }
    mxTfqU8WSct5 = (float) mxTfqU8WSct5;
    mxTfqU8WSct5 = mxTfqU8WSct5 / qFBWzMOUEHw;
    BYrhCSqzFT = (645 - 645);
    {
        WFGSCQ = 0;
        for (; qFBWzMOUEHw > WFGSCQ;) {
            if (0 <= qtyp1L[WFGSCQ] - mxTfqU8WSct5) {
                if (qtyp1L[WFGSCQ] - mxTfqU8WSct5 > QM4aJHI0lFuC) {
                    QM4aJHI0lFuC = qtyp1L[WFGSCQ] - mxTfqU8WSct5;
                    Cw8cK2aQJ = WFGSCQ;
                }
            }
            else {
                if (BYrhCSqzFT < mxTfqU8WSct5 - qtyp1L[WFGSCQ]) {
                    BYrhCSqzFT = mxTfqU8WSct5 - qtyp1L[WFGSCQ];
                    pi1qTC2p = WFGSCQ;
                }
            }
            WFGSCQ = WFGSCQ +(594 - 593);
        }
    }
    if (QM4aJHI0lFuC > BYrhCSqzFT)
        printf ("%d", qtyp1L[Cw8cK2aQJ]);
    else {
        if (QM4aJHI0lFuC < BYrhCSqzFT)
            printf ("%d", qtyp1L[pi1qTC2p]);
        else
            printf ("%d,%d", qtyp1L[pi1qTC2p], qtyp1L[Cw8cK2aQJ]);
    }
}

