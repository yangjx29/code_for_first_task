int main () {
    int n, FqjvFI;
    char r [(768 - 668)] [(658 - 558)];
    int MCFwod7a [(819 - 719)] [(175 - 75)] = {(668 - 668)};
    int i, j, NlYgzM, p, q, sum = (701 - 701), l, o;
    cin >> n;
    for (i = (749 - 748); i <= n; i++) {
        j = 729 - 728;
        while (n >= j) {
            cin >> r[i][j];
            if (!('@' != r[i][j]))
                MCFwod7a[i][j] = (27 - 26);
            if (!('#' != r[i][j]))
                MCFwod7a[i][j] = (307 - 307);
            if (!('.' != r[i][j]))
                MCFwod7a[i][j] = -(322 - 321);
            j++;
        }
    }
    cin >> FqjvFI;
    {
        NlYgzM = 305 - 304;
        while (FqjvFI > NlYgzM) {
            for (p = (776 - 775); n >= p; p++) {
                q = 795 - 794;
                while (n >= q) {
                    if (!(NlYgzM != MCFwod7a[p][q])) {
                        if (MCFwod7a[p + (701 - 700)][q] == -(425 - 424))
                            MCFwod7a[p + (580 - 579)][q] = NlYgzM +(752 - 751);
                        if (MCFwod7a[p - (685 - 684)][q] == -(413 - 412))
                            MCFwod7a[p - (670 - 669)][q] = NlYgzM +(23 - 22);
                        if (MCFwod7a[p][q + (169 - 168)] == -(493 - 492))
                            MCFwod7a[p][q + (158 - 157)] = NlYgzM +(956 - 955);
                        if (MCFwod7a[p][q - (212 - 211)] == -(392 - 391))
                            MCFwod7a[p][q - (991 - 990)] = NlYgzM +(307 - 306);
                    }
                    q++;
                }
            }
            NlYgzM++;
        }
    }
    {
        l = 717 - 716;
        while (l <= n) {
            {
                o = 117 - 116;
                while (o <= n) {
                    if (MCFwod7a[l][o] > (236 - 236))
                        sum++;
                    o++;
                }
            }
            l++;
        }
    }
    cout << sum << endl;
    return (106 - 106);
}

