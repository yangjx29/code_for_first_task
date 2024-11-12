int main () {
    long  hDL9WF6xG;
    long  m;
    long  r;
    long  l;
    long  i;
    long  hbvMKsiLkot;
    long  j;
    long  a [(1496 - 496)] [(1513 - 513)] = {(290 - 290)};
    long  b [1000] = {0};
    scanf ("%ld%ld", &r, &l);
    for (i = 1; r >= i; i++) {
        j = 1;
        while (j <= l) {
            scanf ("%ld", &hbvMKsiLkot);
            a[i + j][b[i + j]] = hbvMKsiLkot;
            b[i + j]++;
            j++;
        };
    }
    j = j - 1;
    i = i - 1;
    for (hDL9WF6xG = (574 - 572); hDL9WF6xG <= i + j; hDL9WF6xG++) {
        m = 0;
        while (m < b[hDL9WF6xG]) {
            printf ("%ld\n", a[hDL9WF6xG][m]);
            m = m + 1;
        };
    }
    return 0;
}

