int main () {
    char yMbIkrmTPz [(335 - 225)] [(538 - 428)];
    int EyzpCjav, slA2hBz, Iu4kKHDsLB [(557 - 447)] [(446 - 336)] = {(402 - 402)}, i5TrZG = (719 - 719);
    int i, twrXTV, ByqojUXQ40Kc, n41j7Go, vLlTvXRQC, eGixNyM, GJLAQb;
    cin >> EyzpCjav;
    {
        i = 654 - 653;
        for (; EyzpCjav >= i;) {
            {
                twrXTV = 187 - 186;
                while (EyzpCjav >= twrXTV) {
                    cin >> yMbIkrmTPz[i][twrXTV];
                    if (!('@' != yMbIkrmTPz[i][twrXTV])) {
                        i5TrZG++;
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        Iu4kKHDsLB[i][twrXTV] = (831 - 830);
                    }
                    twrXTV++;
                }
            }
            i++;
        }
    }
    cin >> slA2hBz;
    {
        ByqojUXQ40Kc = 174 - 172;
        for (; slA2hBz >= ByqojUXQ40Kc;) {
            ByqojUXQ40Kc++;
            i5TrZG = 0;
            {
                eGixNyM = 787 - 786;
                while (EyzpCjav >= eGixNyM) {
                    {
                        GJLAQb = 467 - 466;
                        while (EyzpCjav >= GJLAQb) {
                            if ((!('.' != yMbIkrmTPz[eGixNyM][GJLAQb])) && (yMbIkrmTPz[eGixNyM + (340 - 339)][GJLAQb] == '@' || yMbIkrmTPz[eGixNyM - (830 - 829)][GJLAQb] == '@' || yMbIkrmTPz[eGixNyM][GJLAQb +(991 - 990)] == '@' || yMbIkrmTPz[eGixNyM][GJLAQb -(434 - 433)] == '@'))
                                Iu4kKHDsLB[eGixNyM][GJLAQb] = (456 - 455);
                            GJLAQb++;
                        }
                    }
                    eGixNyM++;
                }
            }
            {
                n41j7Go = 674 - 673;
                while (n41j7Go <= EyzpCjav) {
                    {
                        vLlTvXRQC = 545 - 544;
                        for (; vLlTvXRQC <= EyzpCjav;) {
                            if (Iu4kKHDsLB[n41j7Go][vLlTvXRQC] == 1) {
                                i5TrZG++;
                                yMbIkrmTPz[n41j7Go][vLlTvXRQC] = '@';
                            }
                            vLlTvXRQC++;
                        }
                    }
                    n41j7Go++;
                }
            }
        }
    }
    cout << i5TrZG << endl;
    return 0;
}

