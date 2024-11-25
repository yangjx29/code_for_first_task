struct   student {
    char mBwAG6C1 [(441 - 341)];
    struct   student *PPxLWv0;
};
void  main () {
    struct   student *vwDQZRTL;
    struct   student *f5IbNWtQ;
    struct   student *iw48KdT;
    vwDQZRTL = z;
    vwDQZRTL->PPxLWv0 = NULL;
    gets (vwDQZRTL->mBwAG6C1);
    do {
        f5IbNWtQ = z;
        f5IbNWtQ->PPxLWv0 = vwDQZRTL;
        vwDQZRTL = f5IbNWtQ;
        gets (f5IbNWtQ->mBwAG6C1);
    }
    while (strcmp (vwDQZRTL->mBwAG6C1, "end"));
    vwDQZRTL = vwDQZRTL->PPxLWv0;
    {
        iw48KdT = vwDQZRTL;
        for (; iw48KdT;) {
            puts (iw48KdT->mBwAG6C1);
            iw48KdT = iw48KdT->PPxLWv0;
        }
    }
}

