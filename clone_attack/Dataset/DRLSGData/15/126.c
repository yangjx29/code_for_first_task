main () {
    int HI7rTP2;
    int PV6falFPRO [HI7rTP2] [HI7rTP2], BcpqPMB, NDUNRTzt, o16eRj8Mq0Q, e, muY0cJg71LIS, DdL2yc, aSaqihZQ, I6VLzvZ = 0;
    scanf ("%d", &HI7rTP2);
    for (DdL2yc = 0; DdL2yc <= HI7rTP2 -1; DdL2yc = DdL2yc +1)
        for (aSaqihZQ = 0; aSaqihZQ <= HI7rTP2 -1; aSaqihZQ = aSaqihZQ + 1)
            scanf ("%d", &PV6falFPRO[DdL2yc][aSaqihZQ]);
    for (DdL2yc = 0; DdL2yc <= HI7rTP2 -1; DdL2yc = DdL2yc +1)
        for (aSaqihZQ = 0; aSaqihZQ <= HI7rTP2 -1; aSaqihZQ = aSaqihZQ + 1) {
            if (PV6falFPRO[DdL2yc][aSaqihZQ] == 0 && I6VLzvZ == 0) {
                NDUNRTzt = aSaqihZQ;
                BcpqPMB = DdL2yc;
                I6VLzvZ = I6VLzvZ +1;
            }
            if (PV6falFPRO[DdL2yc][aSaqihZQ] == 0) {
                o16eRj8Mq0Q = DdL2yc;
                e = aSaqihZQ;
            };
        }
    muY0cJg71LIS = (o16eRj8Mq0Q - BcpqPMB -1) * (e - NDUNRTzt -1);
    printf ("%d", muY0cJg71LIS);
}

