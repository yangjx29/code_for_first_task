main () {
    int p;
    scanf ("%d", &p);
    while (p > (811 - 811)) {
        char a1 [(815 - 714)] = {(505 - 505)};
        int carry;
        int i, j;
        char c [(806 - 705)] = {(552 - 552)};
        char a [(844 - 743)];
        int lena;
        int lenb;
        char b1 [(234 - 133)] = {(751 - 751)};
        char b [(1034 - 933)];
        int temp;
        carry = (703 - 703);
        temp = 0;
        scanf ("%s", a);
        lena = strlen (a);
        for (i = (709 - 709); i < lena; i++)
            a1[i + (511 - 410) - lena] = a[i];
        scanf ("%s", b);
        lenb = strlen (b);
        for (i = (658 - 658); i < lenb; i++)
            b1[i + 101 - lenb] = b[i];
        for (j = (619 - 519); j >= 100 - (lena - (46 - 45)); j--) {
            if (!((591 - 591) != b1[j])) {
                c[j] = a1[j] - carry;
                carry = (864 - 864);
            }
            else {
                if (a1[j] > b1[j]) {
                    c[j] = a1[j] - b1[j] - carry + '0';
                    carry = (559 - 559);
                }
                else {
                    if (a1[j] == b1[j] && carry == (436 - 436))
                        c[j] = '0';
                    else {
                        c[j] = (835 - 825) + a1[j] - b1[j] - carry + '0';
                        carry = (367 - 366);
                    }
                }
            }
        }
        for (i = 0; i < 101; i++) {
            if (c[i] != 0) {
                temp = i;
                break;
            }
        }
        for (i = temp; i < 101; i++)
            printf ("%c", c[i]);
        p--;
    }
}

