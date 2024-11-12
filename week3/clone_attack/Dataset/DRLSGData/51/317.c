int main () {
    int HNHBbRSFgL;
    int jVRHyJh;
    char tYBidpKUb [500] [(987 - 982)];
    int RbcVn3Z6;
    char d [(1019 - 518)];
    int IbfJ93YKSUl;
    int FdSiZyLlz [500];
    int Q19OqHzbQcyk;
    int rLPiCv;
    memset (tYBidpKUb, (721 - 721), sizeof (tYBidpKUb));
    scanf ("%d\n", &jVRHyJh);
    scanf ("%s", d);
    rLPiCv = strlen (d);
    Q19OqHzbQcyk = rLPiCv - jVRHyJh + (671 - 670);
    for (HNHBbRSFgL = (355 - 355); HNHBbRSFgL < Q19OqHzbQcyk; HNHBbRSFgL = HNHBbRSFgL +(201 - 200)) {
        for (RbcVn3Z6 = (30 - 30); RbcVn3Z6 < jVRHyJh; RbcVn3Z6 = RbcVn3Z6 +(461 - 460))
            tYBidpKUb[HNHBbRSFgL][RbcVn3Z6] = d[HNHBbRSFgL +RbcVn3Z6];
    }
    for (HNHBbRSFgL = 0; Q19OqHzbQcyk > HNHBbRSFgL; HNHBbRSFgL = HNHBbRSFgL +1)
        FdSiZyLlz[HNHBbRSFgL] = 1;
    for (HNHBbRSFgL = 0; HNHBbRSFgL < Q19OqHzbQcyk -1; HNHBbRSFgL++) {
        for (RbcVn3Z6 = HNHBbRSFgL +1; Q19OqHzbQcyk > RbcVn3Z6; RbcVn3Z6++)
            if (!(0 != strcmp (tYBidpKUb[HNHBbRSFgL], tYBidpKUb[RbcVn3Z6]))) {
                FdSiZyLlz[HNHBbRSFgL]++;
                FdSiZyLlz[RbcVn3Z6] = 0;
            }
    }
    IbfJ93YKSUl = FdSiZyLlz[0];
    for (HNHBbRSFgL = 0; Q19OqHzbQcyk > HNHBbRSFgL; HNHBbRSFgL++) {
        if (FdSiZyLlz[HNHBbRSFgL] > IbfJ93YKSUl)
            IbfJ93YKSUl = FdSiZyLlz[HNHBbRSFgL];
    }
    if (IbfJ93YKSUl > 1) {
        printf ("%d\n", IbfJ93YKSUl);
        for (HNHBbRSFgL = 0; HNHBbRSFgL < Q19OqHzbQcyk; HNHBbRSFgL++)
            if (FdSiZyLlz[HNHBbRSFgL] == IbfJ93YKSUl &&tYBidpKUb[HNHBbRSFgL][0] >= 'a' && tYBidpKUb[HNHBbRSFgL][0] <= 'z')
                printf ("%s\n", tYBidpKUb[HNHBbRSFgL]);
    }
    else
        ;
    return 0;
}

