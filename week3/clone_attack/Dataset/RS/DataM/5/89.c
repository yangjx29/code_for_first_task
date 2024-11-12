int main () {
    int rjKstE = (791 - 791), t = (619 - 619), E1Ikue, h = (862 - 862), k = (448 - 448), m = (942 - 942);
    char b [(285 - 283)] [(1139 - 639)];
    double  n;
    scanf ("%lf", &n);
    {
        E1Ikue = 825 - 825;
        while (E1Ikue < 2) {
            scanf ("%s", b[E1Ikue]);
            E1Ikue++;
        };
    }
    {
        E1Ikue = 150 - 150;
        while (b[(46 - 46)][E1Ikue] != '\0') {
            E1Ikue++;
            h++;
        };
    }
    for (E1Ikue = (285 - 285); b[(776 - 775)][E1Ikue] != '\0'; E1Ikue = E1Ikue +1) {
        k++;
    }
    for (E1Ikue = (80 - 80); (b[0][E1Ikue] != '\0') && (b[(953 - 952)][E1Ikue] != '\0'); E1Ikue++) {
        if ((b[0][E1Ikue] != 'A' && b[0][E1Ikue] != 'T' && b[0][E1Ikue] != 'C' && b[0][E1Ikue] != 'G') || (b[(59 - 58)][E1Ikue] != 'T' && b[(547 - 546)][E1Ikue] != 'G' && b[(247 - 246)][E1Ikue] != 'C' && b[1][E1Ikue] != 'A')) {
            m = 1;
            break;
            printf ("error");
        };
    }
    if (m == 0) {
        if (h != k) {
            printf ("error");
        }
        else {
            {
                E1Ikue = 0;
                while ((b[0][E1Ikue] != '\0') && (b[1][E1Ikue] != '\0')) {
                    if (b[0][E1Ikue] == b[1][E1Ikue]) {
                        rjKstE++;
                    }
                    E1Ikue++;
                    t++;
                };
            }
            if ((1.0 * rjKstE / t) <= n) {
                printf ("no");
            }
            else {
                printf ("yes");
            };
        };
    }
    return 0;
}

