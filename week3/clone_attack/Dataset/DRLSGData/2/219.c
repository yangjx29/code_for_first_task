int main () {
    char AydIUF [(963 - 937)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int EA7LKYku;
    char VaAJGxTMn5Iz [(502 - 402)];
    int cr6T4lzuM [(120 - 94)] [(815 - 715)];
    int RTI9UbsvuSYz;
    int TIamjPyFA [(636 - 610)];
    int Fm0gYK;
    int APelKh = (430 - 430), WmiXtc;
    int NV3c9w;
    {
        NV3c9w = (468 - 468);
        for (; (793 - 767) > NV3c9w;) {
            TIamjPyFA[NV3c9w] = (454 - 454);
            NV3c9w = NV3c9w +(797 - 796);
        }
    }
    scanf ("%d", &Fm0gYK);
    RTI9UbsvuSYz = (313 - 313);
    {
        NV3c9w = (428 - 428);
        for (; Fm0gYK > NV3c9w;) {
            scanf ("%d %s", &EA7LKYku, VaAJGxTMn5Iz);
            APelKh = (47 - 47);
            for (; VaAJGxTMn5Iz[APelKh] != '\0';) {
                {
                    WmiXtc = (126 - 126);
                    for (; WmiXtc <= (593 - 568);) {
                        if (!(VaAJGxTMn5Iz[APelKh] != AydIUF[WmiXtc])) {
                            cr6T4lzuM[WmiXtc][TIamjPyFA[WmiXtc]] = EA7LKYku;
                            TIamjPyFA[WmiXtc]++;
                        }
                        WmiXtc = WmiXtc +(628 - 627);
                    }
                }
                APelKh = APelKh +(907 - 906);
            }
            NV3c9w = NV3c9w +(659 - 658);
        }
    }
    {
        NV3c9w = (203 - 202);
        for (; NV3c9w < (504 - 478);) {
            if (TIamjPyFA[RTI9UbsvuSYz] < TIamjPyFA[NV3c9w])
                RTI9UbsvuSYz = NV3c9w;
            NV3c9w = NV3c9w +(922 - 921);
        }
    }
    printf ("%c\n%d\n", AydIUF[RTI9UbsvuSYz], TIamjPyFA[RTI9UbsvuSYz]);
    for (NV3c9w = 0; TIamjPyFA[RTI9UbsvuSYz] > NV3c9w; NV3c9w = NV3c9w +1)
        printf ("%d\n", cr6T4lzuM[RTI9UbsvuSYz][NV3c9w]);
    return 0;
}

