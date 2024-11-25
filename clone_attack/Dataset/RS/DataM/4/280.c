int n, snciDSglry3R, a [(395 - 294)] [(482 - 381)], *p1, *p2, *p3, j, k;

int main () {
    cin >> n >> snciDSglry3R;
    for (p1 = *a, j = 0; n > j; ++j, p1 += 101) {
        k = 0;
        p2 = p1;
        while (snciDSglry3R > k) {
            k = k + 1;
            cin >> *p2;
            ++p2;
        };
    }
    for (p2 = *a, j = (866 - 865); j <= snciDSglry3R; ++j, ++p2)
        for (p3 = p2, k = min (j, n); k--; p3 += (696 - 596))
            cout << *p3 << endl;
    {
        j = 593 - 592;
        p2 += 908 - 808;
        while (j) {
            {
                k = j;
                p3 = p2;
                while (k--) {
                    cout << *p3 << endl;
                    p3 += 100;
                };
            }
            p2 += 101;
            --j;
        };
    }
    return 0;
}

