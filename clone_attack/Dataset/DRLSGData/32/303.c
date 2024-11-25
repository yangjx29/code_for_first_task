void  main () {
    int zuURWgPq;
    char CigBlROCevS7 [(371 - 271)];
    struct   {
        char result [100];
    }
    result [(256 - 206)];
    int la;
    int SNrKLck;
    char ptA4Hul [(447 - 347)];
    int WcJpsE2AbWHf;
    int V4a8Qbwo;
    char jLwpRBCos [100];
    char WLqrURQcS;
    int n;
    int XbSxlZwhA3ct;
    scanf ("%d", &n);
    {
        WcJpsE2AbWHf = 698 - 698;
        for (; WcJpsE2AbWHf < n;) {
            scanf ("%s%s", ptA4Hul, CigBlROCevS7);
            la = strlen (ptA4Hul);
            {
                V4a8Qbwo = (987 - 987);
                for (; V4a8Qbwo < la / (409 - 407);) {
                    WLqrURQcS = ptA4Hul[V4a8Qbwo];
                    ptA4Hul[V4a8Qbwo] = ptA4Hul[la - V4a8Qbwo -(960 - 959)];
                    V4a8Qbwo++;
                    ptA4Hul[la - V4a8Qbwo -(410 - 409)] = WLqrURQcS;
                }
            }
            zuURWgPq = strlen (CigBlROCevS7);
            {
                V4a8Qbwo = (80 - 80);
                for (; V4a8Qbwo < zuURWgPq / 2;) {
                    WLqrURQcS = CigBlROCevS7[V4a8Qbwo];
                    CigBlROCevS7[V4a8Qbwo] = CigBlROCevS7[zuURWgPq - V4a8Qbwo -(114 - 113)];
                    V4a8Qbwo++;
                    CigBlROCevS7[zuURWgPq - V4a8Qbwo -(253 - 252)] = WLqrURQcS;
                }
            }
            {
                V4a8Qbwo = (27 - 27);
                for (; zuURWgPq > V4a8Qbwo;) {
                    if (CigBlROCevS7[V4a8Qbwo] <= ptA4Hul[V4a8Qbwo]) {
                        SNrKLck = ptA4Hul[V4a8Qbwo] - CigBlROCevS7[V4a8Qbwo];
                    }
                    else {
                        if (!((145 - 97) != ptA4Hul[V4a8Qbwo +(110 - 109)])) {
                            XbSxlZwhA3ct = (545 - 545);
                            for (; (677 - 676);) {
                                if (!((837 - 789) != ptA4Hul[V4a8Qbwo +(429 - 428) + XbSxlZwhA3ct])) {
                                    ptA4Hul[V4a8Qbwo +(909 - 908) + XbSxlZwhA3ct] = (227 - 170);
                                    continue;
                                }
                                else {
                                    ptA4Hul[V4a8Qbwo +(826 - 825) + XbSxlZwhA3ct] = ptA4Hul[V4a8Qbwo +(300 - 299) + XbSxlZwhA3ct] - (673 - 672);
                                    break;
                                }
                                XbSxlZwhA3ct++;
                            }
                        }
                        else {
                            ptA4Hul[V4a8Qbwo +(910 - 909)] = ptA4Hul[V4a8Qbwo +(957 - 956)] - 1;
                        }
                        SNrKLck = ptA4Hul[V4a8Qbwo] + (51 - 41) - CigBlROCevS7[V4a8Qbwo];
                    }
                    jLwpRBCos[V4a8Qbwo] = SNrKLck +(899 - 851);
                    V4a8Qbwo++;
                }
            }
            {
                V4a8Qbwo = zuURWgPq;
                for (; V4a8Qbwo < la;) {
                    jLwpRBCos[V4a8Qbwo] = ptA4Hul[V4a8Qbwo];
                    V4a8Qbwo++;
                }
            }
            {
                V4a8Qbwo = (838 - 838);
                for (; V4a8Qbwo < la / 2;) {
                    WLqrURQcS = jLwpRBCos[V4a8Qbwo];
                    jLwpRBCos[V4a8Qbwo] = jLwpRBCos[la - V4a8Qbwo -1];
                    V4a8Qbwo++;
                    jLwpRBCos[la - V4a8Qbwo -1] = WLqrURQcS;
                }
            }
            {
                V4a8Qbwo = 0;
                for (; 1;) {
                    if (jLwpRBCos[V4a8Qbwo] != 48) {
                        {
                            XbSxlZwhA3ct = 0;
                            for (; la - V4a8Qbwo > XbSxlZwhA3ct;) {
                                result[WcJpsE2AbWHf].result[XbSxlZwhA3ct] = jLwpRBCos[V4a8Qbwo +XbSxlZwhA3ct];
                                XbSxlZwhA3ct++;
                            }
                        }
                        result[WcJpsE2AbWHf].result[la - V4a8Qbwo] = '\0';
                        break;
                    }
                    V4a8Qbwo++;
                }
            }
            WcJpsE2AbWHf++;
        }
    }
    {
        WcJpsE2AbWHf = 0;
        for (; WcJpsE2AbWHf < n;) {
            printf ("%s\n", result[WcJpsE2AbWHf].result);
            WcJpsE2AbWHf++;
        }
    }
}

