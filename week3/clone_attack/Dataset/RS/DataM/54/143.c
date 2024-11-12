int n, k;

int fen (int m) {
    int fen (int m);
    int JQystG3aKEHv;
    JQystG3aKEHv = 0;
    for (JQystG3aKEHv = 0; JQystG3aKEHv < n; JQystG3aKEHv++) {
        if (((m - k) % n == 0) && (!(0 == (m - k) / n))) {
            fen (m);
            m = m - k - (m - k) / n;
        }
        else {
            JQystG3aKEHv = 0;
            return (0);
        };
    }
    if (JQystG3aKEHv == n)
        return ((622 - 621));
}

void  main () {
    int fen (int m);
    int m;
    m = (798 - 797);
    scanf ("%d%d", &n, &k);
    for (m = 1;; m++)
        if (fen (m) == 1)
            break;
    printf ("%d", m);
}

