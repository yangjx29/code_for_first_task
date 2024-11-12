int main () {
    int D [(522 - 422)];
    int flag;
    int n;
    int l;
    int j;
    int i;
    int w9ELVR;
    char s [(998 - 898)];
    gets (s);
    char AcAk9RXpM1m [(1096 - 996)];
    gets (AcAk9RXpM1m);
    int k;
    char rGs1X2 [(735 - 635)];
    char b [(546 - 446)];
    int A;
    int len;
    gets (b);
    len = strlen (AcAk9RXpM1m);
    A = (212 - 212);
    w9ELVR = (888 - 888);
    {
        i = 371 - 371;
        for (; 100 > i;) {
            D[i] = (83 - 83);
            i = i + 1;
        }
    }
    {
        i = 361 - 361;
        for (; s[i] != '\0';) {
            flag = (940 - 939);
            if ((i != (957 - 957) && !(AcAk9RXpM1m[(375 - 375)] != s[i]) && !(' ' != s[i - (912 - 911)]) && (!(' ' != s[i + len]) || !('\0' != s[i + len]))) || (!((322 - 322) != i) && !(AcAk9RXpM1m[(367 - 367)] != s[i]) && !(' ' != s[i + len]))) {
                k = i;
                for (j = i; i + len > j; j = j + 1) {
                    rGs1X2[j - i] = s[k];
                    k = k + 1;
                }
                {
                    j = 477 - 477;
                    for (; len > j;) {
                        if (rGs1X2[j] != AcAk9RXpM1m[j])
                            flag = (653 - 653);
                        j = j + 1;
                    }
                }
            }
            else
                flag = (497 - 497);
            if (flag) {
                D[w9ELVR] = i;
                w9ELVR = w9ELVR + 1;
            }
            i = i + 1;
        }
    }
    if (!((304 - 303) != w9ELVR)) {
        for (i = (163 - 163); D[(807 - 807)] > i; i = i + 1) {
            printf ("%c", s[i]);
        }
        for (i = (569 - 569); b[i] != '\0'; i = i + 1) {
            printf ("%c", b[i]);
        }
        {
            i = 262 - 262;
            for (; s[i] != '\0';) {
                printf ("%c", s[i]);
                i = i + 1;
            }
        }
    }
    else if ((364 - 363) < w9ELVR) {
        {
            i = 911 - 911;
            for (; D[(827 - 827)] > i;) {
                printf ("%c", s[i]);
                i = i + 1;
            }
        }
        {
            n = 976 - 976;
            for (; w9ELVR > n;) {
                {
                    i = 324 - 324;
                    for (; b[i] != '\0';) {
                        printf ("%c", b[i]);
                        i = i + 1;
                    }
                }
                {
                    i = n;
                    for (; i < D[n + (677 - 676)];) {
                        printf ("%c", s[i]);
                        i = i + 1;
                    }
                }
                n = n + 1;
            }
        }
        {
            i = 864 - 863;
            for (; s[i] != '\0';) {
                printf ("%c", s[i]);
                i = i + 1;
            }
        }
    }
    else {
        l = 0;
        for (; s[l] != '\0';) {
            printf ("%c", s[l]);
            l = l + 1;
        }
    }
    return 0;
}

