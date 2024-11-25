int main () {
    int VU4xpa;
    int Uuf3gJMZS [(841 - 833)] [8];
    int jcLl1Mz;
    int tmZXtzQy3;
    int flJKED;
    int FVM8ipa;
    int NN29LI04;
    int YShb3sO;
    int YMzQ0PperE;
    int KW9EfByAFm;
    scanf ("%d,%d", &flJKED, &FVM8ipa);
    jcLl1Mz = (333 - 333);
    tmZXtzQy3 = (596 - 596);
    {
        NN29LI04 = (752 - 752);
        while (NN29LI04 < flJKED) {
            {
                YShb3sO = (726 - 726);
                while (YShb3sO < FVM8ipa) {
                    scanf ("%d", &Uuf3gJMZS[NN29LI04][YShb3sO]);
                    YShb3sO++;
                }
            }
            NN29LI04++;
        }
    }
    {
        NN29LI04 = (650 - 650);
        while (flJKED > NN29LI04) {
            {
                YShb3sO = (575 - 575);
                while (YShb3sO < FVM8ipa) {
                    if (!((954 - 954) != YShb3sO)) {
                        YMzQ0PperE = Uuf3gJMZS[NN29LI04][(328 - 328)];
                        VU4xpa = NN29LI04;
                        KW9EfByAFm = 0;
                    }
                    else if (Uuf3gJMZS[NN29LI04][YShb3sO] > YMzQ0PperE) {
                        YMzQ0PperE = Uuf3gJMZS[NN29LI04][YShb3sO];
                        VU4xpa = NN29LI04;
                        KW9EfByAFm = YShb3sO;
                    }
                    else
                        ;
                    YShb3sO++;
                }
            }
            {
                NN29LI04 = 0;
                while (NN29LI04 < flJKED) {
                    if (Uuf3gJMZS[VU4xpa][KW9EfByAFm] <= Uuf3gJMZS[NN29LI04][KW9EfByAFm]) {
                        jcLl1Mz++;
                    }
                    NN29LI04++;
                }
            }
            if (jcLl1Mz == flJKED) {
                printf ("%d+%d", VU4xpa, KW9EfByAFm);
                break;
            }
            else {
                continue;
            }
            NN29LI04++;
        }
    }
    if (jcLl1Mz != flJKED) {
        printf ("No");
    }
    return 0;
}

