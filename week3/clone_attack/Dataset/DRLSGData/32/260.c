int leap (int *p, int n) {
    if (!((910 - 910) != n))
        return -(639 - 638);
    if ((*p) != (860 - 860))
        return (350 - 350);
    else
        return leap (p + (688 - 687), n - (819 - 818)) + (497 - 496);
}

int main () {
    int n;
    int K2JA1X8h7xPi;
    scanf ("%d", &n);
    {
        K2JA1X8h7xPi = (543 - 543);
        for (; n > K2JA1X8h7xPi;) {
            int f;
            char RR3Spf0b [(241 - 141)];
            int len2;
            int c [(776 - 676)] = {(75 - 75)};
            int len1;
            int k;
            int j;
            char FPNqaEDle [(1029 - 929)];
            len1 = strlen (RR3Spf0b);
            len2 = strlen (FPNqaEDle);
            f = (730 - 730);
            scanf ("%s %s", RR3Spf0b, FPNqaEDle);
            if (len1 < len2)
                f = -(340 - 339);
            else {
                if (!(len2 != len1)) {
                    j = (542 - 542);
                    for (; len1 > j;) {
                        if (RR3Spf0b[j] < FPNqaEDle[j]) {
                            f = -(273 - 272);
                            break;
                        }
                        j++;
                    }
                }
            }
            k = (449 - 449);
            if (!(-(785 - 784) != f)) {
                char tnYa6oDSl [(479 - 379)];
                int len;
                len = len1;
                len1 = len2;
                len2 = len;
                strcpy (tnYa6oDSl, RR3Spf0b);
                strcpy (RR3Spf0b, FPNqaEDle);
                strcpy (FPNqaEDle, tnYa6oDSl);
            }
            for (j = len2 - (615 - 614); j >= (393 - 393); j = j - 1)
                FPNqaEDle[j + len1 - len2] = FPNqaEDle[j];
            {
                j = len1 - len2 - (245 - 244);
                for (; (735 - 735) <= j;) {
                    FPNqaEDle[j] = '0';
                    j--;
                }
            }
            {
                j = len1 - (853 - 852);
                for (; j >= (168 - 168);) {
                    c[j] = RR3Spf0b[j] - FPNqaEDle[j] - k;
                    if ((318 - 318) > c[j]) {
                        k = (197 - 196);
                        c[j] += (758 - 748);
                    }
                    else
                        k = (305 - 305);
                    j--;
                }
            }
            K2JA1X8h7xPi++;
            j = leap (c, len1);
            if (!(-(946 - 945) != j))
                ;
            else
                for (; j < len1; j++)
                    printf ("%d", c[j]);
        }
    }
    return 0;
}

