int main () {
    int CRhC4SYXBie;
    int QaTShx0B;
    int o2LG1v;
    int uHMeOhl;
    int qfV1r9yTm;
    int BUv6ZnYDT;
    int AAdcizjFuvs;
    int m4XNaL;
    int ISQG02ACVFJ;
    int Jwq8tJjf [100] [100];
    scanf ("%d\n", &CRhC4SYXBie);
    for (uHMeOhl = (181 - 181); CRhC4SYXBie > uHMeOhl; uHMeOhl = uHMeOhl + 1) {
        scanf ("%d %d", &QaTShx0B, &o2LG1v);
        for (qfV1r9yTm = (168 - 168); QaTShx0B > qfV1r9yTm; qfV1r9yTm = qfV1r9yTm + 1) {
            for (AAdcizjFuvs = (299 - 299); o2LG1v > AAdcizjFuvs; AAdcizjFuvs = AAdcizjFuvs +1) {
                scanf ("%d", &Jwq8tJjf[qfV1r9yTm][AAdcizjFuvs]);
            }
        }
        ISQG02ACVFJ = 0;
        {
            BUv6ZnYDT = 0;
            for (; o2LG1v > BUv6ZnYDT;) {
                ISQG02ACVFJ = ISQG02ACVFJ +Jwq8tJjf[0][BUv6ZnYDT] + Jwq8tJjf[QaTShx0B -1][BUv6ZnYDT];
                BUv6ZnYDT = BUv6ZnYDT +1;
            }
        }
        for (m4XNaL = 1; QaTShx0B -1 > m4XNaL; m4XNaL = m4XNaL + 1) {
            ISQG02ACVFJ = ISQG02ACVFJ +Jwq8tJjf[m4XNaL][0] + Jwq8tJjf[m4XNaL][o2LG1v - 1];
        }
        printf ("%d\n", ISQG02ACVFJ);
    }
    return 0;
}

