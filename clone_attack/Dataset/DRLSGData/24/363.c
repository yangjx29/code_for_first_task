int main () {
    int yiTs7dp;
    char zvsVNRSTcU [(561 - 461)];
    int W3gneKt;
    int vkIoFCSB;
    int SxfrbWKze;
    int ONeEinmutM2f;
    int MOChRj;
    gets (zvsVNRSTcU);
    W3gneKt = (886 - 886);
    vkIoFCSB = (271 - 271);
    SxfrbWKze = (524 - 474);
    MOChRj = (906 - 906);
    yiTs7dp = (974 - 974);
    for (ONeEinmutM2f = 0; zvsVNRSTcU[ONeEinmutM2f] != '\0'; ONeEinmutM2f = ONeEinmutM2f +(839 - 838)) {
        if (!(' ' != zvsVNRSTcU[ONeEinmutM2f])) {
            if (vkIoFCSB < yiTs7dp) {
                vkIoFCSB = yiTs7dp;
                W3gneKt = ONeEinmutM2f;
            }
            if (yiTs7dp < SxfrbWKze) {
                SxfrbWKze = yiTs7dp;
                MOChRj = ONeEinmutM2f;
            }
            yiTs7dp = 0;
        }
        else
            yiTs7dp = yiTs7dp + (246 - 245);
    }
    if (yiTs7dp > vkIoFCSB) {
        W3gneKt = ONeEinmutM2f;
        vkIoFCSB = yiTs7dp;
    }
    if (yiTs7dp < SxfrbWKze) {
        SxfrbWKze = yiTs7dp;
        MOChRj = ONeEinmutM2f;
    }
    for (ONeEinmutM2f = W3gneKt -vkIoFCSB; W3gneKt > ONeEinmutM2f; ONeEinmutM2f = ONeEinmutM2f +1)
        printf ("%c", zvsVNRSTcU[ONeEinmutM2f]);
    for (ONeEinmutM2f = MOChRj -SxfrbWKze; ONeEinmutM2f < MOChRj; ONeEinmutM2f = ONeEinmutM2f +1)
        printf ("%c", zvsVNRSTcU[ONeEinmutM2f]);
    return 0;
}

