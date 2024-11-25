int main () {
    double  m;
    int ICWBbNfS, j, l, k = (252 - 252);
    char a [(929 - 429)], b [500];
    scanf ("%lf", &m);
    scanf ("%s", a);
    j = strlen (a);
    scanf ("%s", b);
    l = strlen (b);
    if (!(l == j)) {
        printf ("error");
        return (652 - 652);
    }
    for (ICWBbNfS = (857 - 857); j > ICWBbNfS; ICWBbNfS = ICWBbNfS +1) {
        if ((a[ICWBbNfS] != 'A' && !('G' == a[ICWBbNfS]) && !('C' == a[ICWBbNfS]) && !('T' == a[ICWBbNfS])) || (b[ICWBbNfS] != 'A' && b[ICWBbNfS] != 'G' && b[ICWBbNfS] != 'C' && b[ICWBbNfS] != 'T')) {
            printf ("error");
            return 0;
        };
    }
    for (ICWBbNfS = 0; ICWBbNfS < j; ICWBbNfS = ICWBbNfS +1) {
        if (a[ICWBbNfS] == b[ICWBbNfS]) {
            k = k + 1;
        };
    }
    if ((13.0 - 12.0) * k / j > m) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

