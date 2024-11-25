int main () {
    int IKspD7qlvN6i;
    int RYHERr8v2xJq;
    char RbEvtTC2ldy [90];
    int YCKY6JOb;
    char mK7dSvcgrhxW [90];
    int pMu9zEHD8;
    gets (RbEvtTC2ldy);
    gets (mK7dSvcgrhxW);
    IKspD7qlvN6i = strlen (RbEvtTC2ldy);
    RYHERr8v2xJq = 0;
    YCKY6JOb = strlen (mK7dSvcgrhxW);
    for (pMu9zEHD8 = 0; IKspD7qlvN6i > pMu9zEHD8; pMu9zEHD8 = pMu9zEHD8 + 1) {
        if ('a' <= RbEvtTC2ldy[pMu9zEHD8])
            RbEvtTC2ldy[pMu9zEHD8] = RbEvtTC2ldy[pMu9zEHD8] - 'a' + 'A';
        if ('a' <= mK7dSvcgrhxW[pMu9zEHD8])
            mK7dSvcgrhxW[pMu9zEHD8] = mK7dSvcgrhxW[pMu9zEHD8] - 'a' + 'A';
        if (RbEvtTC2ldy[pMu9zEHD8] > mK7dSvcgrhxW[pMu9zEHD8]) {
            RYHERr8v2xJq += 1;
            break;
        }
        if (RbEvtTC2ldy[pMu9zEHD8] < mK7dSvcgrhxW[pMu9zEHD8]) {
            RYHERr8v2xJq += 1;
            break;
        };
    }
    if (!RYHERr8v2xJq)
        ;
}

