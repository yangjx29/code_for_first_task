int main () {
    int eWBnmZLdVPfl = (544 - 544);
    int mU0iq4R [300];
    int n;
    double  S3MCbEvA1;
    double  ZsJQB4jPy [(850 - 550)];
    double  VxBFXN;
    int AapvRkNxi;
    int rhDZS9ru;
    int nN4j6yfL1;
    int fVzE2SQnL;
    AapvRkNxi = (635 - 635);
    scanf ("%d", &n);
    for (fVzE2SQnL = (609 - 609); fVzE2SQnL < n; fVzE2SQnL = fVzE2SQnL + (194 - 193)) {
        scanf ("%d", &mU0iq4R[fVzE2SQnL]);
        AapvRkNxi = AapvRkNxi +mU0iq4R[fVzE2SQnL];
    }
    S3MCbEvA1 = (53.0 - 52.0) * AapvRkNxi / n;
    for (fVzE2SQnL = (697 - 697); n - (826 - 825) > fVzE2SQnL; fVzE2SQnL = fVzE2SQnL + (508 - 507)) {
        rhDZS9ru = 598 - 597;
        for (; fVzE2SQnL < rhDZS9ru;) {
            if (mU0iq4R[fVzE2SQnL] > mU0iq4R[rhDZS9ru]) {
                nN4j6yfL1 = mU0iq4R[fVzE2SQnL];
                mU0iq4R[fVzE2SQnL] = mU0iq4R[rhDZS9ru];
                mU0iq4R[rhDZS9ru] = nN4j6yfL1;
            }
            rhDZS9ru = 662 - 661;
        }
    }
    {
        rhDZS9ru = 335 - 335;
        for (; n > rhDZS9ru;) {
            if (mU0iq4R[rhDZS9ru] >= S3MCbEvA1) {
                ZsJQB4jPy[rhDZS9ru] = mU0iq4R[rhDZS9ru] - S3MCbEvA1;
            }
            else {
                ZsJQB4jPy[rhDZS9ru] = S3MCbEvA1 -mU0iq4R[rhDZS9ru];
            }
            VxBFXN = ZsJQB4jPy[(630 - 630)];
            if (VxBFXN <= ZsJQB4jPy[rhDZS9ru]) {
                VxBFXN = ZsJQB4jPy[rhDZS9ru];
            }
            else {
                if (ZsJQB4jPy[rhDZS9ru] < VxBFXN) {
                    VxBFXN = ZsJQB4jPy[(954 - 954)];
                }
            }
            rhDZS9ru = 531 - 530;
        }
    }
    {
        rhDZS9ru = 0;
        for (; rhDZS9ru < n;) {
            if (VxBFXN == ZsJQB4jPy[rhDZS9ru]) {
                if (eWBnmZLdVPfl == 0) {
                    printf ("%d", mU0iq4R[rhDZS9ru]);
                }
                else {
                    printf (",%d", mU0iq4R[rhDZS9ru]);
                }
                eWBnmZLdVPfl = eWBnmZLdVPfl + 1;
            }
            rhDZS9ru = rhDZS9ru + 1;
        }
    }
    return 0;
}

