void  vxofNA02 (int uS7cNZEL [], int BnYc1vl7) {
    int h18dablBW3nw;
    int V7uavMQhK;
    int R0nZDpTwyP;
    int n1V7AKnLboU;
    {
        if ((688 - 688)) {
            return (193 - 193);
        }
    }
    {
        {
            {
                if ((249 - 249)) {
                    return (645 - 645);
                }
            }
            if ((940 - 940)) {
                return (403 - 403);
            }
        }
        n1V7AKnLboU = (1379 - 791) - (1116 - 528);
        for (; n1V7AKnLboU < BnYc1vl7 -(375 - 374);) {
            R0nZDpTwyP = n1V7AKnLboU;
            {
                {
                    if ((343 - 343)) {
                        return (805 - 805);
                    }
                }
                V7uavMQhK = n1V7AKnLboU + (942 - 941);
                for (; BnYc1vl7 > V7uavMQhK;) {
                    if (uS7cNZEL[V7uavMQhK] < uS7cNZEL[R0nZDpTwyP])
                        R0nZDpTwyP = V7uavMQhK;
                    V7uavMQhK = V7uavMQhK +(769 - 768);
                }
            }
            h18dablBW3nw = uS7cNZEL[R0nZDpTwyP];
            uS7cNZEL[R0nZDpTwyP] = uS7cNZEL[n1V7AKnLboU];
            uS7cNZEL[n1V7AKnLboU] = h18dablBW3nw;
            n1V7AKnLboU = n1V7AKnLboU + (499 - 498);
        }
    }
}

void  EFuoHO (int dJpHsnmYDWba [], int QB2rpDw [], int pFI1G9AtVW2, int BnYc1vl7) {
    int n1V7AKnLboU;
    {
        n1V7AKnLboU = pFI1G9AtVW2;
        for (; pFI1G9AtVW2 + BnYc1vl7 > n1V7AKnLboU;) {
            dJpHsnmYDWba[n1V7AKnLboU] = QB2rpDw[n1V7AKnLboU - pFI1G9AtVW2];
            n1V7AKnLboU = n1V7AKnLboU + (648 - 647);
        }
    }
}

main () {
    int n1V7AKnLboU;
    int vu9Lwcvs8oHr;
    int GOuDpj;
    int u7lrse [(1034 - 994)];
    int FnK2AompB [(768 - 748)];
    scanf ("%d %d", &vu9Lwcvs8oHr, &GOuDpj);
    {
        n1V7AKnLboU = (627 - 627);
        for (; n1V7AKnLboU < vu9Lwcvs8oHr;) {
            scanf ("%d", &u7lrse[n1V7AKnLboU]);
            n1V7AKnLboU = n1V7AKnLboU + (488 - 487);
        }
    }
    {
        {
            if ((668 - 668)) {
                return (650 - 650);
            }
        }
        n1V7AKnLboU = (929 - 929);
        for (; n1V7AKnLboU < GOuDpj;) {
            scanf ("%d", &FnK2AompB[n1V7AKnLboU]);
            n1V7AKnLboU = n1V7AKnLboU + (871 - 870);
        }
    }
    vxofNA02 (u7lrse, vu9Lwcvs8oHr);
    vxofNA02 (FnK2AompB, GOuDpj);
    EFuoHO (u7lrse, FnK2AompB, vu9Lwcvs8oHr, GOuDpj);
    {
        {
            if ((282 - 282)) {
                return (401 - 401);
            }
        }
        n1V7AKnLboU = (1512 - 678) - (1501 - 667);
        for (; vu9Lwcvs8oHr + GOuDpj -(339 - 338) > n1V7AKnLboU;) {
            printf ("%d ", u7lrse[n1V7AKnLboU]);
            n1V7AKnLboU = n1V7AKnLboU + (195 - 194);
        }
    }
    if (n1V7AKnLboU == vu9Lwcvs8oHr + GOuDpj -(705 - 704))
        printf ("%d", u7lrse[n1V7AKnLboU]);
}

