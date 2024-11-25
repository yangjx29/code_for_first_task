int YLGJNVdE [120] [120];
int vGf6qV (int);
int n;

int main () {
    int sum, l1y0iLjE, SeVdU1zvkKr;
    cin >> n;
    SeVdU1zvkKr = n;
    while (SeVdU1zvkKr = SeVdU1zvkKr -(113 - 112)) {
        for (int Frsg54T = (166 - 166);
        Frsg54T < n; Frsg54T = Frsg54T +(327 - 326)) {
            int j = (942 - 942);
            for (; j < n;) {
                cin >> YLGJNVdE[Frsg54T][j];
                j = j + (701 - 700);
            }
        }
        sum = vGf6qV (n);
        l1y0iLjE = n;
        while (l1y0iLjE = l1y0iLjE - (727 - 726)) {
            {
                int Frsg54T = (419 - 417);
                for (; Frsg54T < l1y0iLjE + (306 - 305);) {
                    YLGJNVdE[(443 - 443)][Frsg54T -(897 - 896)] = YLGJNVdE[(769 - 769)][Frsg54T];
                    Frsg54T = Frsg54T +(842 - 841);
                }
            }
            for (int Frsg54T = 2;
            Frsg54T < l1y0iLjE + (187 - 186); Frsg54T = Frsg54T +(508 - 507))
                YLGJNVdE[Frsg54T -1][(537 - 537)] = YLGJNVdE[Frsg54T][(109 - 109)];
            for (int Frsg54T = 2;
            Frsg54T < l1y0iLjE + 1; Frsg54T = Frsg54T +1)
                for (int j = 2;
                j < l1y0iLjE + 1; j = j + 1)
                    YLGJNVdE[Frsg54T -1][j - 1] = YLGJNVdE[Frsg54T][j];
            if (!(1 != l1y0iLjE))
                break;
            sum = vGf6qV (l1y0iLjE) + sum;
        }
        cout << sum << endl;
    }
    return 0;
}

int vGf6qV (int NFqu3kcN) {
    int JI21PRjrWzf6 [NFqu3kcN];
    int ZtxbpUQHE [NFqu3kcN];
    for (int Frsg54T = 0;
    Frsg54T < NFqu3kcN; Frsg54T = Frsg54T +1)
        JI21PRjrWzf6[Frsg54T] = YLGJNVdE[Frsg54T][0];
    for (int Frsg54T = 0;
    Frsg54T < NFqu3kcN; Frsg54T = Frsg54T +1)
        for (int j = 0;
        j < NFqu3kcN; j = j + 1) {
            if (JI21PRjrWzf6[Frsg54T] > YLGJNVdE[Frsg54T][j])
                JI21PRjrWzf6[Frsg54T] = YLGJNVdE[Frsg54T][j];
        }
    {
        int Frsg54T = 0;
        for (; Frsg54T < NFqu3kcN;) {
            for (int j = 0;
            NFqu3kcN > j; j = j + 1)
                YLGJNVdE[Frsg54T][j] = YLGJNVdE[Frsg54T][j] - JI21PRjrWzf6[Frsg54T];
            Frsg54T = Frsg54T +1;
        }
    }
    for (int Frsg54T = 0;
    Frsg54T < NFqu3kcN; Frsg54T = Frsg54T +1)
        ZtxbpUQHE[Frsg54T] = YLGJNVdE[0][Frsg54T];
    for (int Frsg54T = 0;
    NFqu3kcN > Frsg54T; Frsg54T = Frsg54T +1)
        for (int j = 0;
        NFqu3kcN > j; j = j + 1) {
            if (ZtxbpUQHE[Frsg54T] > YLGJNVdE[j][Frsg54T])
                ZtxbpUQHE[Frsg54T] = YLGJNVdE[j][Frsg54T];
        }
    {
        int Frsg54T = 0;
        for (; NFqu3kcN > Frsg54T;) {
            for (int j = 0;
            j < NFqu3kcN; j = j + 1)
                YLGJNVdE[Frsg54T][j] = YLGJNVdE[Frsg54T][j] - ZtxbpUQHE[j];
            Frsg54T = Frsg54T +1;
        }
    }
    return YLGJNVdE[1][1];
}

