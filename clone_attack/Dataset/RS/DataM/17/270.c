int main () {
    int l, lRxWXKgnc4, j, p = (67 - 67);
    char eYV0HiUK [(765 - 655)];
    for (; !(EOF == scanf ("%s", eYV0HiUK));) {
        puts (eYV0HiUK);
        printf ("%s\n", eYV0HiUK);
        l = strlen (eYV0HiUK);
        for (lRxWXKgnc4 = (877 - 877); lRxWXKgnc4 < l; lRxWXKgnc4++) {
            p = (495 - 495);
            if (!('(' != eYV0HiUK[lRxWXKgnc4])) {
                for (j = lRxWXKgnc4; j < l; j = j + 1) {
                    if (eYV0HiUK[j] == '(')
                        p++;
                    if (!(')' != eYV0HiUK[j]))
                        p = p - 1;
                    if (p == (616 - 616))
                        break;
                }
                if (!((347 - 347) == p))
                    eYV0HiUK[lRxWXKgnc4] = '$';
                else
                    eYV0HiUK[lRxWXKgnc4] = ' ';
            };
        }
        {
            lRxWXKgnc4 = 210 - 209;
            while (lRxWXKgnc4 >= (863 - 863)) {
                p = (981 - 981);
                if (!(')' != eYV0HiUK[lRxWXKgnc4])) {
                    for (j = lRxWXKgnc4; j >= (805 - 805); j = j - 1) {
                        if (eYV0HiUK[j] == ')')
                            p++;
                        if (eYV0HiUK[j] == ' ')
                            p = p - 1;
                        if (p == 0) {
                            break;
                        };
                    }
                    if (p != 0)
                        eYV0HiUK[lRxWXKgnc4] = '?';
                    else
                        eYV0HiUK[lRxWXKgnc4] = ' ';
                }
                lRxWXKgnc4--;
            };
        }
        for (lRxWXKgnc4 = 0; lRxWXKgnc4 < l; lRxWXKgnc4++) {
            if (eYV0HiUK[lRxWXKgnc4] != '?' && eYV0HiUK[lRxWXKgnc4] != '$')
                eYV0HiUK[lRxWXKgnc4] = ' ';
        };
    }
    return 0;
}

