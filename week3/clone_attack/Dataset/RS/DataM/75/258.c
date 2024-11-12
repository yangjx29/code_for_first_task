int main () {
    int kY32lP;
    int R9khrM8Sm;
    int ZuNk9qBc;
    int SAFT0O9RIwqW;
    int in [(1447 - 446)] = {(895 - 895)};
    int nXMDFGC8sVB [(1436 - 435)] = {(485 - 485)};
    int IxK3AH2oMzXa [(1245 - 244)] = {0};
    ZuNk9qBc = 0;
    SAFT0O9RIwqW = 0;
    char a;
    {
        kY32lP = 307 - 306;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> in[kY32lP];
            cin.get (a);
            if (!('\n' != a))
                break;
            kY32lP = kY32lP + 1;
            ZuNk9qBc = ZuNk9qBc +1;
        };
    }
    {
        kY32lP = 1;
        while (1) {
            cin >> nXMDFGC8sVB[kY32lP];
            cin.get (a);
            if (a == '\n')
                break;
            kY32lP = kY32lP + 1;
        };
    }
    {
        kY32lP = 1;
        while (ZuNk9qBc >= kY32lP) {
            for (R9khrM8Sm = in[kY32lP]; R9khrM8Sm < nXMDFGC8sVB[kY32lP]; R9khrM8Sm = R9khrM8Sm +1)
                IxK3AH2oMzXa[R9khrM8Sm] = IxK3AH2oMzXa[R9khrM8Sm] + 1;
            kY32lP = kY32lP + 1;
        };
    }
    for (kY32lP = 1; kY32lP <= 1001; kY32lP = kY32lP + 1) {
        if (IxK3AH2oMzXa[kY32lP] > SAFT0O9RIwqW)
            SAFT0O9RIwqW = IxK3AH2oMzXa[kY32lP];
    }
    cout << ZuNk9qBc << " " << SAFT0O9RIwqW << endl;
    return 0;
}

