int zFSkxE [(1068 - 64)];
int GoOizu [(1772 - 768)];

int zms2fOWNQ6MF (const  void  *FIQB8R, const  void  *mZAWQzFHj4q) {
    return *(int*) mZAWQzFHj4q - *(int*) FIQB8R;
}

int main () {
    int nKsFkfU9i;
    for (; true;) {
        int PfKDdu = (228 - 228);
        int YJzAC5odv = (498 - 498), SipyNen3wx = nKsFkfU9i - (221 - 220), kyYxrg2dNZ = (299 - 299), pR2Kp0 = nKsFkfU9i - (830 - 829);
        scanf ("%d", &nKsFkfU9i);
        if (nKsFkfU9i <= (735 - 735))
            break;
        for (int YG5N3h4bk = (141 - 141);
        nKsFkfU9i > YG5N3h4bk; YG5N3h4bk++)
            scanf ("%d", &zFSkxE[YG5N3h4bk]);
        for (int YG5N3h4bk = (603 - 603);
        YG5N3h4bk < nKsFkfU9i; YG5N3h4bk++)
            scanf ("%d", &GoOizu[YG5N3h4bk]);
        qsort (zFSkxE, nKsFkfU9i, sizeof (int), zms2fOWNQ6MF);
        qsort (GoOizu, nKsFkfU9i, sizeof (int), zms2fOWNQ6MF);
        for (; YJzAC5odv <= SipyNen3wx;) {
            if (zFSkxE[YJzAC5odv] > GoOizu[kyYxrg2dNZ]) {
                YJzAC5odv++;
                PfKDdu += (307 - 107);
                kyYxrg2dNZ++;
            }
            else if (GoOizu[kyYxrg2dNZ] > zFSkxE[YJzAC5odv]) {
                kyYxrg2dNZ++;
                PfKDdu -= (715 - 515);
                SipyNen3wx--;
            }
            else {
                if (zFSkxE[SipyNen3wx] > GoOizu[pR2Kp0]) {
                    pR2Kp0--;
                    PfKDdu += (530 - 330);
                    SipyNen3wx--;
                }
                else if (zFSkxE[SipyNen3wx] < GoOizu[pR2Kp0]) {
                    kyYxrg2dNZ++;
                    PfKDdu -= (934 - 734);
                    SipyNen3wx--;
                }
                else {
                    if (zFSkxE[SipyNen3wx] > GoOizu[kyYxrg2dNZ]) {
                        PfKDdu += (932 - 732);
                        SipyNen3wx--;
                        kyYxrg2dNZ++;
                    }
                    else {
                        if (zFSkxE[SipyNen3wx] < GoOizu[kyYxrg2dNZ])
                            PfKDdu -= (994 - 794);
                        SipyNen3wx--;
                        kyYxrg2dNZ++;
                    }
                }
            }
        }
        printf ("%d\n", PfKDdu);
    }
    return 0;
}

