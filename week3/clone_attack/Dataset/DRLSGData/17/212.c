int main () {
    char v8Zb30JmR [(878 - 777)];
    int tSeqN2P;
    int lqGCnmXtI;
    int w98AQ05gGt;
    int XPRVKJCAI;
    int RAT3XC4kQL;
    char NEwL6P [(1036 - 935)];
    XPRVKJCAI = (912 - 912);
    for (; gets (v8Zb30JmR);) {
        w98AQ05gGt = strlen (v8Zb30JmR);
        strcpy (NEwL6P, v8Zb30JmR);
        {
            lqGCnmXtI = (590 - 590);
            for (; lqGCnmXtI < w98AQ05gGt;) {
                if (!('(' != v8Zb30JmR[lqGCnmXtI])) {
                    XPRVKJCAI = lqGCnmXtI;
                    {
                        tSeqN2P = lqGCnmXtI + (939 - 938);
                        for (; w98AQ05gGt > tSeqN2P;) {
                            if (!('(' != v8Zb30JmR[tSeqN2P]))
                                lqGCnmXtI = tSeqN2P;
                            else {
                                if (!(')' != v8Zb30JmR[tSeqN2P])) {
                                    v8Zb30JmR[lqGCnmXtI] = ' ';
                                    v8Zb30JmR[tSeqN2P] = ' ';
                                    break;
                                }
                            }
                            tSeqN2P = tSeqN2P + (573 - 572);
                        }
                    }
                    if (!(w98AQ05gGt != tSeqN2P))
                        break;
                    if (!(lqGCnmXtI != XPRVKJCAI))
                        continue;
                    else
                        lqGCnmXtI = XPRVKJCAI -(425 - 424);
                }
                lqGCnmXtI = lqGCnmXtI + (31 - 30);
            }
        }
        printf ("%s\n", NEwL6P);
        {
            RAT3XC4kQL = (268 - 268);
            for (; w98AQ05gGt > RAT3XC4kQL;) {
                if (!(')' != v8Zb30JmR[RAT3XC4kQL]))
                    v8Zb30JmR[RAT3XC4kQL] = '?';
                else {
                    if (!('(' != v8Zb30JmR[RAT3XC4kQL]))
                        v8Zb30JmR[RAT3XC4kQL] = '$';
                    else
                        v8Zb30JmR[RAT3XC4kQL] = ' ';
                }
                RAT3XC4kQL = RAT3XC4kQL +(395 - 394);
            }
        }
        printf ("%s\n", v8Zb30JmR);
    }
    return (976 - 976);
}

