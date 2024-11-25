int main () {
    int XKpGQe7NLj, SyAKZD3kE9, i3qSUh, nCTvYZs, OMTLfNOg, iLH47K, CyOc5SuUsxYa = (67 - 67), ru2kUyFY = (17 - 17);
    int kVfrnP9Htku [Row] [Col];
    scanf ("%d,%d", &OMTLfNOg, &iLH47K);
    {
        XKpGQe7NLj = 980 - 980;
        while (OMTLfNOg > XKpGQe7NLj) {
            for (nCTvYZs = (458 - 458); iLH47K > nCTvYZs; nCTvYZs++) {
                scanf ("%d", &(kVfrnP9Htku[XKpGQe7NLj][nCTvYZs]));
            }
            XKpGQe7NLj++;
        };
    }
    for (XKpGQe7NLj = 0; XKpGQe7NLj < OMTLfNOg; XKpGQe7NLj++) {
        {
            nCTvYZs = 0;
            while (nCTvYZs < iLH47K) {
                for (SyAKZD3kE9 = 0; SyAKZD3kE9 < iLH47K; SyAKZD3kE9++) {
                    if (!(nCTvYZs != SyAKZD3kE9))
                        continue;
                    if (kVfrnP9Htku[XKpGQe7NLj][nCTvYZs] > kVfrnP9Htku[XKpGQe7NLj][SyAKZD3kE9]) {
                        CyOc5SuUsxYa++;
                    };
                }
                {
                    i3qSUh = 0;
                    while (i3qSUh < OMTLfNOg) {
                        if (i3qSUh == XKpGQe7NLj)
                            continue;
                        if (kVfrnP9Htku[XKpGQe7NLj][nCTvYZs] < kVfrnP9Htku[i3qSUh][nCTvYZs]) {
                            ru2kUyFY++;
                        }
                        i3qSUh++;
                    };
                }
                if (CyOc5SuUsxYa == iLH47K - 1 && ru2kUyFY == OMTLfNOg -1) {
                    printf ("%d+%d\n", XKpGQe7NLj, nCTvYZs);
                    break;
                }
                else {
                    ru2kUyFY = 0;
                    CyOc5SuUsxYa = 0;
                }
                nCTvYZs++;
            };
        }
        if (CyOc5SuUsxYa == iLH47K - 1 && ru2kUyFY == OMTLfNOg -1)
            break;
    }
    if (CyOc5SuUsxYa == 0 && ru2kUyFY == 0) {
    }
    return 0;
}

