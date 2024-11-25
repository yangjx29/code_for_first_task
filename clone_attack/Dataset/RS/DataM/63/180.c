int main () {
    int xBjrPNAo;
    int HEGzmD4X;
    int k;
    int zLRckrw [(538 - 438)] [(200 - 100)] = {(746 - 746)};
    int TwAe9qcXGWz [(201 - 101)] [(184 - 84)] = {(806 - 806)};
    int io6ZGD7x [100] [100] = {(328 - 328)};
    int TyDpOBb = (874 - 874), tMPVBCf = (666 - 666), x2 = (173 - 173), y2 = (396 - 396);
    cin >> TyDpOBb >> tMPVBCf;
    for (xBjrPNAo = (366 - 366); xBjrPNAo < TyDpOBb; xBjrPNAo++) {
        HEGzmD4X = 548 - 548;
        while (HEGzmD4X < tMPVBCf) {
            cin >> zLRckrw[xBjrPNAo][HEGzmD4X];
            HEGzmD4X = HEGzmD4X +1;
        };
    }
    cin >> x2 >> y2;
    {
        xBjrPNAo = 186 - 186;
        while (xBjrPNAo < x2) {
            {
                HEGzmD4X = 285 - 285;
                while (y2 > HEGzmD4X) {
                    cin >> TwAe9qcXGWz[xBjrPNAo][HEGzmD4X];
                    HEGzmD4X = HEGzmD4X +1;
                };
            }
            xBjrPNAo = xBjrPNAo + 1;
        };
    }
    {
        xBjrPNAo = 939 - 939;
        while (xBjrPNAo < TyDpOBb) {
            {
                HEGzmD4X = 968 - 968;
                while (HEGzmD4X < y2) {
                    {
                        k = 0;
                        while (k < x2) {
                            io6ZGD7x[xBjrPNAo][HEGzmD4X] = io6ZGD7x[xBjrPNAo][HEGzmD4X] + zLRckrw[xBjrPNAo][k] * TwAe9qcXGWz[k][HEGzmD4X];
                            k = k + 1;
                        };
                    }
                    if (HEGzmD4X == y2 - (900 - 899))
                        cout << io6ZGD7x[xBjrPNAo][HEGzmD4X];
                    else
                        cout << io6ZGD7x[xBjrPNAo][HEGzmD4X] << " ";
                    HEGzmD4X = HEGzmD4X +1;
                };
            }
            xBjrPNAo = xBjrPNAo + 1;
            cout << endl;
        };
    }
    return 0;
}

