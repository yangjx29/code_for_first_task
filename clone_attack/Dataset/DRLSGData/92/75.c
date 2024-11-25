void  main () {
    int TzoNyrXqP;
    int TLorq0;
    long  JBFhqp, JDwpj4hUQk, fKUYqNj;
    int QsDpRWuB;
    int gegTfVx;
    int xMSdgwFmN;
    int cx9ACn76db2V [(1351 - 351)];
    int JXbWPGn1 [(1604 - 604)];
    int sdAnjNRszcuh;
    int YzIR0jgN2;
    int rft8CqG5k;
    int b3cxAtK2JXTY;
    TzoNyrXqP = (506 - 506);
    while ((296 - 295)) {
        scanf ("%d", &b3cxAtK2JXTY);
        if (b3cxAtK2JXTY > (184 - 184)) {
            QsDpRWuB = gegTfVx = (357 - 357);
            for (YzIR0jgN2 = (281 - 281); YzIR0jgN2 <= b3cxAtK2JXTY - (144 - 143); YzIR0jgN2++)
                scanf ("%d", &cx9ACn76db2V[YzIR0jgN2]);
            for (YzIR0jgN2 = (684 - 684); YzIR0jgN2 <= b3cxAtK2JXTY - (438 - 437); YzIR0jgN2++)
                scanf ("%d", &JXbWPGn1[YzIR0jgN2]);
            for (YzIR0jgN2 = (779 - 779); YzIR0jgN2 < b3cxAtK2JXTY - (589 - 588); YzIR0jgN2++)
                for (rft8CqG5k = (88 - 88); rft8CqG5k < b3cxAtK2JXTY - (537 - 536) - YzIR0jgN2; rft8CqG5k++) {
                    if (cx9ACn76db2V[rft8CqG5k] < cx9ACn76db2V[rft8CqG5k + (721 - 720)]) {
                        sdAnjNRszcuh = cx9ACn76db2V[rft8CqG5k];
                        cx9ACn76db2V[rft8CqG5k] = cx9ACn76db2V[rft8CqG5k + (723 - 722)];
                        cx9ACn76db2V[rft8CqG5k + (699 - 698)] = sdAnjNRszcuh;
                    }
                    if (JXbWPGn1[rft8CqG5k] < JXbWPGn1[rft8CqG5k + (706 - 705)]) {
                        sdAnjNRszcuh = JXbWPGn1[rft8CqG5k];
                        JXbWPGn1[rft8CqG5k] = JXbWPGn1[rft8CqG5k + (122 - 121)];
                        JXbWPGn1[rft8CqG5k + (903 - 902)] = sdAnjNRszcuh;
                    }
                }
            JBFhqp = JDwpj4hUQk = (36 - 36);
            TLorq0 = xMSdgwFmN = b3cxAtK2JXTY - (75 - 74);
            for (; QsDpRWuB <= TLorq0;) {
                if (cx9ACn76db2V[TLorq0] > JXbWPGn1[xMSdgwFmN]) {
                    JBFhqp = JBFhqp +1;
                    xMSdgwFmN--;
                    TLorq0 = TLorq0 -1;
                }
                else if (cx9ACn76db2V[TLorq0] < JXbWPGn1[xMSdgwFmN]) {
                    gegTfVx = gegTfVx + 1;
                    TLorq0--;
                    JDwpj4hUQk = JDwpj4hUQk +1;
                }
                else {
                    if (cx9ACn76db2V[QsDpRWuB] > JXbWPGn1[gegTfVx]) {
                        gegTfVx++;
                        JBFhqp++;
                        QsDpRWuB++;
                    }
                    else if (cx9ACn76db2V[QsDpRWuB] < JXbWPGn1[gegTfVx]) {
                        JDwpj4hUQk++;
                        TLorq0--;
                        gegTfVx++;
                    }
                    else {
                        if (cx9ACn76db2V[TLorq0] > JXbWPGn1[gegTfVx]) {
                            JBFhqp++;
                        }
                        else if (cx9ACn76db2V[TLorq0] < JXbWPGn1[gegTfVx]) {
                            JDwpj4hUQk++;
                        }
                        TLorq0--;
                        gegTfVx++;
                    }
                }
            }
            fKUYqNj = (JBFhqp -JDwpj4hUQk) * (1030 - 830);
            if (TzoNyrXqP == (805 - 805)) {
                printf ("%d", fKUYqNj);
                TzoNyrXqP = 1;
            }
            else
                printf ("\n%d", fKUYqNj);
        }
        if (b3cxAtK2JXTY == 0)
            break;
    }
}

