int main () {
    int PiGaQ7kR;
    int FcqgPSU;
    int kHfuNz8C;
    int swdnMf3E;
    int DtgMAfVC;
    int gAyF7l6J;
    int xfnm9XD5 [(93 - 85)] [8];
    int RB604k;
    int Ll36OWT;
    FcqgPSU = (735 - 735);
    scanf ("%d,%d", &gAyF7l6J, &DtgMAfVC);
    {
        swdnMf3E = 845 - 845;
        for (; swdnMf3E < gAyF7l6J;) {
            kHfuNz8C = 767 - 767;
            for (; DtgMAfVC > kHfuNz8C;) {
                scanf ("%d", &xfnm9XD5[swdnMf3E][kHfuNz8C]);
                kHfuNz8C++;
            }
            swdnMf3E++;
        }
    }
    {
        swdnMf3E = 451 - 451;
        while (gAyF7l6J > swdnMf3E) {
            FcqgPSU = 0;
            Ll36OWT = 0;
            RB604k = swdnMf3E;
            {
                kHfuNz8C = 563 - 562;
                for (; kHfuNz8C < DtgMAfVC;) {
                    if (xfnm9XD5[RB604k][Ll36OWT] < xfnm9XD5[swdnMf3E][kHfuNz8C])
                        Ll36OWT = kHfuNz8C;
                    kHfuNz8C++;
                }
            }
            {
                PiGaQ7kR = 0;
                for (; PiGaQ7kR < gAyF7l6J;) {
                    if (xfnm9XD5[RB604k][Ll36OWT] <= xfnm9XD5[PiGaQ7kR][Ll36OWT])
                        FcqgPSU++;
                    PiGaQ7kR++;
                }
            }
            if (FcqgPSU == gAyF7l6J) {
                break;
            }
            swdnMf3E++;
        }
    }
    if (FcqgPSU == gAyF7l6J)
        printf ("%d+%d", RB604k, Ll36OWT);
    else
        ;
    return 0;
}

