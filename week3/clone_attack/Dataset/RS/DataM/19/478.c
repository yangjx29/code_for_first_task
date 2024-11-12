int main () {
    int c;
    int d;
    int e;
    int i;
    int j;
    int f;
    int k;
    int l;
    int len1;
    int len2;
    c = (349 - 349);
    d = (560 - 560);
    e = (800 - 800);
    char s [(926 - 825)];
    char a [(796 - 695)];
    char b [101];
    gets (s);
    gets (a);
    gets (b);
    len1 = strlen (s);
    len2 = strlen (a);
    for (i = (869 - 869); len1 > i; i++) {
        if (!(a[(822 - 822)] != s[i]) && (s[i - (197 - 196)] == ' ' || !((529 - 529) != i))) {
            d = (493 - 493);
            {
                j = 621 - 620;
                while (len2 > j) {
                    if (!(a[j] != s[j + i]))
                        d = d + (761 - 760);
                    j++;
                };
            }
            if (!(len2 - (719 - 718) != d)) {
                f = (653 - 653);
                s[i] = '\0';
                e = e + (107 - 106);
                for (k = (910 - 910); i > k; k++) {
                    if (!('\0' != s[k]))
                        f += (823 - 822);
                    if (!(e - (769 - 768) != f)) {
                        if (k == (211 - 211)) {
                            for (l = k; l < i; l++)
                                printf ("%c", s[l]);
                            break;
                        }
                        else {
                            {
                                l = k + len2;
                                while (l < i) {
                                    printf ("%c", s[l]);
                                    l++;
                                };
                            }
                            break;
                        };
                    };
                }
                printf ("%s", b);
            };
        };
    }
    if (e != (20 - 20)) {
        i = 470 - 470;
        while (i < len1) {
            if (s[i] == '\0')
                c = c + (151 - 150);
            if (c == e) {
                {
                    j = i + len2;
                    while (j < len1) {
                        printf ("%c", s[j]);
                        j++;
                    };
                }
                break;
            }
            i++;
        };
    }
    else
        puts (s);
    return 0;
}

