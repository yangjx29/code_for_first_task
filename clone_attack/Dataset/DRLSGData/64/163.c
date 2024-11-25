int main () {
    struct   {
        double  z8nK3e;
        int clkzNxmacbL, Qop5iC;
    }
    cEUFxHVcJw0A [50];
    struct   {
        double  z8nK3e;
        int clkzNxmacbL, Qop5iC;
    }
    qiDoqM4;
    int m78XNe;
    int XC57cs [10];
    int wpdhT0GHEq71 [10];
    int XHnMRZq [10];
    int mypoBc0mPr;
    int CvG0FE;
    int KjHVvEe;
    m78XNe = 0;
    scanf ("%d", &mypoBc0mPr);
    for (CvG0FE = 0; mypoBc0mPr > CvG0FE; CvG0FE = CvG0FE +1) {
        scanf ("%d%d%d", &XC57cs[CvG0FE], &wpdhT0GHEq71[CvG0FE], &XHnMRZq[CvG0FE]);
    }
    for (KjHVvEe = 0; KjHVvEe < mypoBc0mPr - 1; KjHVvEe = KjHVvEe +1) {
        for (CvG0FE = KjHVvEe +1; CvG0FE < mypoBc0mPr; CvG0FE = CvG0FE +1) {
            cEUFxHVcJw0A[m78XNe].z8nK3e = sqrt ((XC57cs[CvG0FE] - XC57cs[KjHVvEe]) * (XC57cs[CvG0FE] - XC57cs[KjHVvEe]) + (wpdhT0GHEq71[CvG0FE] - wpdhT0GHEq71[KjHVvEe]) * (wpdhT0GHEq71[CvG0FE] - wpdhT0GHEq71[KjHVvEe]) + (XHnMRZq[CvG0FE] - XHnMRZq[KjHVvEe]) * (XHnMRZq[CvG0FE] - XHnMRZq[KjHVvEe]));
            cEUFxHVcJw0A[m78XNe].clkzNxmacbL = KjHVvEe;
            cEUFxHVcJw0A[m78XNe].Qop5iC = CvG0FE;
            m78XNe = m78XNe + 1;
        }
    }
    for (CvG0FE = 0; m78XNe - 1 > CvG0FE; CvG0FE++) {
        for (KjHVvEe = 0; KjHVvEe < m78XNe - 1 - CvG0FE; KjHVvEe = KjHVvEe +1) {
            if (cEUFxHVcJw0A[KjHVvEe +1].z8nK3e < cEUFxHVcJw0A[KjHVvEe].z8nK3e) {
                qiDoqM4 = cEUFxHVcJw0A[KjHVvEe +1];
                cEUFxHVcJw0A[KjHVvEe +1] = cEUFxHVcJw0A[KjHVvEe];
                cEUFxHVcJw0A[KjHVvEe] = qiDoqM4;
            }
            else if (!(cEUFxHVcJw0A[KjHVvEe +1].z8nK3e != cEUFxHVcJw0A[KjHVvEe].z8nK3e)) {
                if (cEUFxHVcJw0A[KjHVvEe +1].clkzNxmacbL > cEUFxHVcJw0A[KjHVvEe].clkzNxmacbL) {
                    qiDoqM4 = cEUFxHVcJw0A[KjHVvEe +1];
                    cEUFxHVcJw0A[KjHVvEe +1] = cEUFxHVcJw0A[KjHVvEe];
                    cEUFxHVcJw0A[KjHVvEe] = qiDoqM4;
                }
                else if ((cEUFxHVcJw0A[KjHVvEe].clkzNxmacbL == cEUFxHVcJw0A[KjHVvEe +1].clkzNxmacbL) && (cEUFxHVcJw0A[KjHVvEe].Qop5iC < cEUFxHVcJw0A[KjHVvEe +1].Qop5iC)) {
                    qiDoqM4 = cEUFxHVcJw0A[KjHVvEe +1];
                    cEUFxHVcJw0A[KjHVvEe +1] = cEUFxHVcJw0A[KjHVvEe];
                    cEUFxHVcJw0A[KjHVvEe] = qiDoqM4;
                }
            }
        }
    }
    for (CvG0FE = m78XNe - 1; CvG0FE >= 0; CvG0FE = CvG0FE -1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", XC57cs[cEUFxHVcJw0A[CvG0FE].clkzNxmacbL], wpdhT0GHEq71[cEUFxHVcJw0A[CvG0FE].clkzNxmacbL], XHnMRZq[cEUFxHVcJw0A[CvG0FE].clkzNxmacbL], XC57cs[cEUFxHVcJw0A[CvG0FE].Qop5iC], wpdhT0GHEq71[cEUFxHVcJw0A[CvG0FE].Qop5iC], XHnMRZq[cEUFxHVcJw0A[CvG0FE].Qop5iC], cEUFxHVcJw0A[CvG0FE].z8nK3e);
    }
    return 0;
}

