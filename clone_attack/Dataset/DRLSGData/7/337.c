int main () {
    int i, e = (399 - 399), j, n, m;
    char s [(494 - 238)];
    gets (s);
    char *ps = s;
    char a [(363 - 107)];
    gets (a);
    char *pa = a;
    char b [(934 - 678)];
    gets (b);
    char *p;
    n = strlen (s);
    m = strlen (a);
    for (i = (149 - 149); *ps != '\0'; ps = ps + 1, i = i + 1) {
        if (*pa == *ps) {
            e = e + 1;
            for (pa = pa + (895 - 894), ps = ps + (80 - 79); *pa != '\0'; pa = pa + 1, ps = ps + 1) {
                if (*pa == *ps) {
                    e++;
                }
            }
        }
        if (!(m != e)) {
            p = s;
            for (j = (417 - 417); i > j; j = j + 1) {
                printf ("%c", *p);
                p = p + 1;
            }
            printf ("%s", b);
            if (m < n - i) {
                for (j = (241 - 241); j < m; j = j + 1) {
                    p++;
                }
                printf ("%s", p);
                break;
            }
            else {
                break;
            }
        }
        else {
            if ((23 - 23) < e) {
                pa = a;
                for (j = (295 - 295); j < m; j++) {
                    ps = ps - 1;
                }
            }
        }
        e = 0;
    }
    if (e != m) {
        printf ("%s", s);
    }
    return 0;
}

