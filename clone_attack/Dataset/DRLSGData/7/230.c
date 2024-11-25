int main () {
    int i = (209 - 209), j = (429 - 429), k = (373 - 373), m = 0, n, l;
    char s [(1174 - 918)], a [(887 - 787)], b [(297 - 197)];
    gets (s);
    gets (a);
    gets (b);
    {
        i = 0;
        for (; strlen (s) > i;) {
            if (!(a[0] != s[i])) {
                k = i;
                {
                    j = 0;
                    for (; strlen (a) > j;) {
                        if (a[j] != s[k]) {
                            break;
                        }
                        j++;
                        k++;
                    };
                }
                if (j == strlen (a)) {
                    m = (469 - 468);
                    break;
                }
                l = i;
            }
            i = i + 1;
        };
    }
    if (!(1 != m)) {
        {
            i = 0;
            for (; l > i;) {
                printf ("%c", s[i]);
                i = i + 1;
            };
        }
        printf ("%s", b);
        {
            n = a;
            for (; n < strlen (s);) {
                printf ("%c", s[n]);
                n++;
            };
        };
    }
    else {
        if (m == 0) {
            printf ("%s", s);
        };
    }
    return 0;
}

