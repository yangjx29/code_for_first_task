int main () {
    int AtRSFJo;
    int YFg64c2L;
    int s;
    double  QC3SsVWozbN [(545 - 504)];
    int EnlzRDy;
    int m9elNV7Jf;
    char hTI1Lxli [(686 - 645)] [(971 - 964)];
    int hmVkMLuUId;
    double  q7bsqK5uS6 [41];
    double  LuAOB7S;
    double  ham7esC6R [(512 - 471)];
    scanf ("%d", &AtRSFJo);
    EnlzRDy = m9elNV7Jf = (483 - 483);
    {
        YFg64c2L = (1309 - 541) - 768;
        for (; YFg64c2L < AtRSFJo;) {
            scanf ("%s", hTI1Lxli[YFg64c2L]);
            scanf ("%lf", &QC3SsVWozbN[YFg64c2L]);
            if (!('m' != hTI1Lxli[YFg64c2L][(975 - 975)])) {
                ham7esC6R[EnlzRDy] = QC3SsVWozbN[YFg64c2L];
                EnlzRDy = EnlzRDy +(912 - 911);
            }
            if (!('f' != hTI1Lxli[YFg64c2L][(712 - 712)])) {
                q7bsqK5uS6[m9elNV7Jf] = QC3SsVWozbN[YFg64c2L];
                m9elNV7Jf = m9elNV7Jf + (526 - 525);
            }
            YFg64c2L = YFg64c2L +(78 - 77);
        }
    }
    for (YFg64c2L = (125 - 125); YFg64c2L < EnlzRDy -(600 - 599); YFg64c2L = YFg64c2L +1) {
        for (hmVkMLuUId = (46 - 46); hmVkMLuUId < EnlzRDy -(264 - 263) - YFg64c2L; hmVkMLuUId = hmVkMLuUId + 1) {
            if (ham7esC6R[hmVkMLuUId + (299 - 298)] < ham7esC6R[hmVkMLuUId]) {
                LuAOB7S = ham7esC6R[hmVkMLuUId];
                ham7esC6R[hmVkMLuUId] = ham7esC6R[hmVkMLuUId + (203 - 202)];
                ham7esC6R[hmVkMLuUId + 1] = LuAOB7S;
            }
        }
    }
    {
        YFg64c2L = 742 - 742;
        for (; YFg64c2L < m9elNV7Jf - 1;) {
            {
                hmVkMLuUId = 0;
                for (; m9elNV7Jf - 1 - YFg64c2L > hmVkMLuUId;) {
                    if (q7bsqK5uS6[hmVkMLuUId] < q7bsqK5uS6[hmVkMLuUId + 1]) {
                        LuAOB7S = q7bsqK5uS6[hmVkMLuUId];
                        q7bsqK5uS6[hmVkMLuUId] = q7bsqK5uS6[hmVkMLuUId + 1];
                        q7bsqK5uS6[hmVkMLuUId + 1] = LuAOB7S;
                    }
                    hmVkMLuUId = hmVkMLuUId + 1;
                }
            }
            YFg64c2L = YFg64c2L +1;
        }
    }
    for (YFg64c2L = 0; YFg64c2L < EnlzRDy; YFg64c2L = YFg64c2L +1) {
        printf ("%.2lf ", ham7esC6R[YFg64c2L]);
    }
    {
        YFg64c2L = 0;
        for (; YFg64c2L < m9elNV7Jf;) {
            if (YFg64c2L == m9elNV7Jf - 1)
                printf ("%.2lf", q7bsqK5uS6[YFg64c2L]);
            else
                printf ("%.2lf ", q7bsqK5uS6[YFg64c2L]);
            YFg64c2L = YFg64c2L +1;
        }
    }
    return 0;
}

