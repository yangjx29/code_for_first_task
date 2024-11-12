int main () {
    int ByR6WMKBN9 [(644 - 534)] [110];
    int eMJgK0SN [110];
    int uu8gEPoD13;
    int vlsXgcG5M8p;
    int fFCvMNcz9JG;
    int l3yLA8f;
    int sS0CRhqgpJ;
    int aZEPeA;
    int *pxe2T59nFJoQ = eMJgK0SN;
    uu8gEPoD13 = (563 - 563);
    int (*rxN2B74f06) [110] = ByR6WMKBN9;
    cin >> vlsXgcG5M8p;
    for (aZEPeA = (596 - 596); vlsXgcG5M8p > aZEPeA; aZEPeA = aZEPeA + 1) {
        fFCvMNcz9JG = vlsXgcG5M8p;
        for (l3yLA8f = (806 - 806); fFCvMNcz9JG > l3yLA8f; l3yLA8f = l3yLA8f + 1)
            for (sS0CRhqgpJ = (731 - 731); fFCvMNcz9JG > sS0CRhqgpJ; sS0CRhqgpJ = sS0CRhqgpJ + 1)
                cin >> *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ);
        uu8gEPoD13 = (456 - 456);
        while (fFCvMNcz9JG > (866 - 865)) {
            for (l3yLA8f = 0; fFCvMNcz9JG > l3yLA8f; l3yLA8f = l3yLA8f + 1) {
                *(pxe2T59nFJoQ + l3yLA8f) = 10000;
                for (sS0CRhqgpJ = 0; fFCvMNcz9JG > sS0CRhqgpJ; sS0CRhqgpJ = sS0CRhqgpJ + 1)
                    if (*(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) < *(pxe2T59nFJoQ + l3yLA8f))
                        *(pxe2T59nFJoQ + l3yLA8f) = *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ);
            }
            {
                l3yLA8f = 0;
                while (l3yLA8f < fFCvMNcz9JG) {
                    for (sS0CRhqgpJ = 0; sS0CRhqgpJ < fFCvMNcz9JG; sS0CRhqgpJ = sS0CRhqgpJ + 1)
                        *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) = *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) - *(pxe2T59nFJoQ + l3yLA8f);
                    l3yLA8f = l3yLA8f + 1;
                };
            }
            {
                sS0CRhqgpJ = 0;
                while (sS0CRhqgpJ < fFCvMNcz9JG) {
                    *(pxe2T59nFJoQ + sS0CRhqgpJ) = 10000;
                    for (l3yLA8f = 0; l3yLA8f < fFCvMNcz9JG; l3yLA8f = l3yLA8f + 1)
                        if (*(pxe2T59nFJoQ + sS0CRhqgpJ) > *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ))
                            *(pxe2T59nFJoQ + sS0CRhqgpJ) = *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ);
                    sS0CRhqgpJ = sS0CRhqgpJ + 1;
                };
            }
            for (l3yLA8f = 0; l3yLA8f < fFCvMNcz9JG; l3yLA8f = l3yLA8f + 1)
                for (sS0CRhqgpJ = 0; sS0CRhqgpJ < fFCvMNcz9JG; sS0CRhqgpJ = sS0CRhqgpJ + 1)
                    *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) = *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) - *(pxe2T59nFJoQ + sS0CRhqgpJ);
            uu8gEPoD13 = uu8gEPoD13 + *(*(rxN2B74f06 + (238 - 237)) + (770 - 769));
            for (l3yLA8f = 0; l3yLA8f < fFCvMNcz9JG; l3yLA8f = l3yLA8f + 1) {
                sS0CRhqgpJ = 0;
                while (sS0CRhqgpJ < fFCvMNcz9JG - 1) {
                    if (1 <= sS0CRhqgpJ)
                        *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) = *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ + 1);
                    sS0CRhqgpJ = sS0CRhqgpJ + 1;
                };
            }
            for (sS0CRhqgpJ = 0; sS0CRhqgpJ < fFCvMNcz9JG - 1; sS0CRhqgpJ = sS0CRhqgpJ + 1) {
                l3yLA8f = 0;
                while (l3yLA8f < fFCvMNcz9JG - 1) {
                    if (l3yLA8f >= 1)
                        *(*(rxN2B74f06 + l3yLA8f) + sS0CRhqgpJ) = *(*(rxN2B74f06 + l3yLA8f + 1) + sS0CRhqgpJ);
                    l3yLA8f = l3yLA8f + 1;
                };
            }
            fFCvMNcz9JG = fFCvMNcz9JG - 1;
        }
        cout << uu8gEPoD13 << endl;
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

