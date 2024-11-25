void  main () {
    char *pa, *kJKxpRka;
    char atvaJDCo [50], fvIQH5sU2 [50];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s%s", atvaJDCo, fvIQH5sU2);
    for (kJKxpRka = fvIQH5sU2, pa = atvaJDCo; fvIQH5sU2 + strlen (fvIQH5sU2) > kJKxpRka;) {
        if (!(*pa != *kJKxpRka)) {
            {
                pa = atvaJDCo;
                while (strlen (atvaJDCo) + atvaJDCo > pa) {
                    if (*pa == *kJKxpRka)
                        kJKxpRka = kJKxpRka + 1;
                    else
                        break;
                    pa = pa + 1;
                };
            }
            if (pa = atvaJDCo + strlen (atvaJDCo))
                printf ("%d", kJKxpRka - fvIQH5sU2 - strlen (atvaJDCo));
            else
                pa = atvaJDCo;
        }
        else
            kJKxpRka = kJKxpRka + 1;
    };
}

