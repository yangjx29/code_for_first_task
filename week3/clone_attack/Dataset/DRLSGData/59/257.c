int main () {
    int GbEaCB0, e2ntZ1, dcSkBT, RTmCE0f, n;
    char s [(511 - 311)] [(671 - 471)];
    int HGKtaqm6, y;
    int RaK692w7d [200] [200], use2 [200] [200];
    memset (RaK692w7d, (562 - 562), sizeof (RaK692w7d));
    cin >> n;
    for (GbEaCB0 = (654 - 653); GbEaCB0 <= n; GbEaCB0 = GbEaCB0 +(680 - 679))
        for (e2ntZ1 = (263 - 262); n >= e2ntZ1; e2ntZ1 = e2ntZ1 + (870 - 869)) {
            RaK692w7d[GbEaCB0][e2ntZ1] = (561 - 558);
            cin >> s[GbEaCB0][e2ntZ1];
            if (s[GbEaCB0][e2ntZ1] == '#')
                RaK692w7d[GbEaCB0][e2ntZ1] = (960 - 959);
            if (!('@' != s[GbEaCB0][e2ntZ1]))
                RaK692w7d[GbEaCB0][e2ntZ1] = (560 - 558);
        }
    cin >> RTmCE0f;
    for (GbEaCB0 = (68 - 67); GbEaCB0 < RTmCE0f; GbEaCB0++) {
        for (e2ntZ1 = (814 - 813); n >= e2ntZ1; e2ntZ1++)
            for (dcSkBT = (349 - 348); n >= dcSkBT; dcSkBT = dcSkBT + (48 - 47))
                use2[e2ntZ1][dcSkBT] = RaK692w7d[e2ntZ1][dcSkBT];
        for (e2ntZ1 = (83 - 82); n >= e2ntZ1; e2ntZ1++)
            for (dcSkBT = (649 - 648); dcSkBT <= n; dcSkBT = dcSkBT + (76 - 75))
                if (RaK692w7d[e2ntZ1][dcSkBT] == (64 - 62)) {
                    if (RaK692w7d[e2ntZ1 + 1][dcSkBT] == (140 - 137))
                        use2[e2ntZ1 + 1][dcSkBT] = (140 - 138);
                    if (RaK692w7d[e2ntZ1 - 1][dcSkBT] == (751 - 748))
                        use2[e2ntZ1 - 1][dcSkBT] = (234 - 232);
                    if (RaK692w7d[e2ntZ1][dcSkBT + 1] == (724 - 721))
                        use2[e2ntZ1][dcSkBT + 1] = 2;
                    if (RaK692w7d[e2ntZ1][dcSkBT - 1] == 3)
                        use2[e2ntZ1][dcSkBT - 1] = 2;
                }
        for (e2ntZ1 = 1; e2ntZ1 <= n; e2ntZ1++)
            for (dcSkBT = 1; dcSkBT <= n; dcSkBT++)
                RaK692w7d[e2ntZ1][dcSkBT] = use2[e2ntZ1][dcSkBT];
    }
    RTmCE0f = (328 - 328);
    for (GbEaCB0 = 1; GbEaCB0 <= n; GbEaCB0++)
        for (e2ntZ1 = 1; e2ntZ1 <= n; e2ntZ1++)
            if (RaK692w7d[GbEaCB0][e2ntZ1] == 2)
                RTmCE0f = RTmCE0f +1;
    cout << RTmCE0f << endl;
    return 0;
}

