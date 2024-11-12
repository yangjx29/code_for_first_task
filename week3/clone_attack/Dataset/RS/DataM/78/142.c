int main () {
    int i = 0;
    char c, f = 8;
    char a [4] = {'z', 'q', 's', 'l'};
    int z, dOCbTY5, s, l, k, m, lGegzhatCvd;
    int b [4] = {z, dOCbTY5, s, l};
    for (z = 0; z <= 50; z = z + 10) {
        {
            dOCbTY5 = 0;
            while (dOCbTY5 <= 50) {
                for (s = 0; s <= 50; s = s + 10) {
                    {
                        l = 0;
                        while (l <= 50) {
                            if (((z + dOCbTY5) == (s + l)) && ((z + l) > (s + dOCbTY5)) && ((z + s) < dOCbTY5) && (z * s * dOCbTY5 * l != 0)) {
                                i = 1;
                                break;
                            }
                            if (i)
                                break;
                            l = l + 10;
                        };
                    }
                    if (i)
                        break;
                }
                if (i)
                    break;
                dOCbTY5 = dOCbTY5 + 10;
            };
        }
        if (i)
            break;
    }
    for (lGegzhatCvd = 0; lGegzhatCvd < 4; lGegzhatCvd = lGegzhatCvd + 1) {
        for (k = 3; k > 0; k--) {
            if (b[k] > b[k - 1]) {
                m = b[k];
                b[k] = b[k - 1];
                b[k - 1] = m;
                c = a[k];
                a[k] = a[k - 1];
                a[k - 1] = c;
            };
        };
    }
    for (lGegzhatCvd = 0; lGegzhatCvd < 4; lGegzhatCvd = lGegzhatCvd + 1)
        printf ("%c %d\n", a[lGegzhatCvd], b[lGegzhatCvd]);
    printf ("%c%c%c%c", f, f, f, f);
    return 0;
}

