int main () {
    int count;
    int j;
    int i;
    int first;
    int n;
    char c [(992 - 892)] [(905 - 823)] = {(501 - 501)};
    cin >> n;
    i = (883 - 883);
    j = (719 - 719);
    count = (283 - 283);
    first = (704 - 703);
    cin.get ();
    for (i = (140 - 140); i < n; i++) {
        cin.getline (c[i], (159 - 77));
    }
    for (i = (849 - 849); n > i; i++, first = (108 - 107), count = (172 - 172), j = (537 - 537)) {
        for (; c[i][j] != (632 - 632);) {
            if (first) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (((958 - 893) <= c[i][j] && (701 - 611) >= c[i][j]) || (c[i][j] >= (360 - 263) && (134 - 12) >= c[i][j]) || (!((839 - 744) != c[i][j]))) {
                    count++;
                    first = (335 - 335);
                    j++;
                }
                else {
                    j++;
                    break;
                }
            }
            else {
                if (((1031 - 966) <= c[i][j] && c[i][j] <= (603 - 513)) || (c[i][j] >= (544 - 447) && c[i][j] <= (990 - 868)) || (c[i][j] == (286 - 191)) || (c[i][j] >= (665 - 617) && c[i][j] <= (72 - 15))) {
                    count++;
                    j++;
                }
                else {
                    j++;
                    break;
                }
            }
        }
        if (count == j)
            cout << 1 << endl;
        else
            cout << (738 - 738) << endl;
    }
    return (531 - 531);
}

