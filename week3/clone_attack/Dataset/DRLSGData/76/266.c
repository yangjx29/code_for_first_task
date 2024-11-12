int main () {
    int s9WdSIE [50000] = {(246 - 246)};
    double  iZxQX9daM48;
    int WYe9afw;
    int CXoVzRr2;
    int plY5ZHw6N;
    int n;
    int q4Fohkd;
    int cvm9apYq;
    int j;
    int WVT5LQmlE [50000] = {0};
    scanf ("%d", &n);
    plY5ZHw6N = WVT5LQmlE[0];
    CXoVzRr2 = s9WdSIE[0];
    {
        q4Fohkd = 0;
        for (; q4Fohkd < n;) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (0) {
                    return 0;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d%d", &WVT5LQmlE[q4Fohkd], &s9WdSIE[q4Fohkd]);
            q4Fohkd = q4Fohkd + 1;
        }
    }
    {
        q4Fohkd = 0;
        for (; q4Fohkd < n;) {
            if (plY5ZHw6N > WVT5LQmlE[q4Fohkd]) {
                plY5ZHw6N = WVT5LQmlE[q4Fohkd];
            }
            if (CXoVzRr2 < s9WdSIE[q4Fohkd]) {
                CXoVzRr2 = s9WdSIE[q4Fohkd];
            }
            q4Fohkd = q4Fohkd + 1;
        }
    }
    WYe9afw = (650 - 650);
    {
        iZxQX9daM48 = (double ) plY5ZHw6N;
        while ((double ) CXoVzRr2 >= iZxQX9daM48) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                cvm9apYq = 0;
                j = 0;
                for (; n > j;) {
                    if (WVT5LQmlE[j] <= iZxQX9daM48 && iZxQX9daM48 <= s9WdSIE[j]) {
                        cvm9apYq = cvm9apYq + 1;
                    }
                    j = j + 1;
                }
            }
            if (cvm9apYq == 0) {
                break;
            }
            else {
                WYe9afw = WYe9afw +1;
            }
            iZxQX9daM48 = iZxQX9daM48 + 0.5;
        }
    }
    if (WYe9afw == (CXoVzRr2 -plY5ZHw6N) * 2 + 1) {
        printf ("%d %d", plY5ZHw6N, CXoVzRr2);
    }
    return 0;
}

