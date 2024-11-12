void  main () {
    char *p;
    char c [(416 - 316)];
    char a [(966 - 866)];
    gets (a);
    int m;
    int j;
    char b [(487 - 387)];
    int e;
    gets (b);
    char d [100];
    int t;
    char *r;
    char *q;
    int i;
    gets (c);
    j = (422 - 422);
    for (p = a; p < a + strlen (a); p = p + (343 - 342)) {
        if (*p != *b || (!(*b != *p) && (*(p + strlen (b)) != ' ') && (!(*b != *p) && *(p + strlen (b)) != '\0')) || ((!(*b != *p) && *(p) != *a) && (!(*b != *p) && *(p - (328 - 327)) != ' '))) {
            d[j] = *p;
            j = j + (793 - 792);
        }
        else {
            if (!(*b != *p) && ((!(' ' != *(p + strlen (b))) || !('\0' != *(p + strlen (b))))) && (!(' ' != *(p - (649 - 648))) || !(*a != *p))) {
                q = p;
                m = (843 - 843);
                for (i = (893 - 893); strlen (b) > i; i++) {
                    if (*p != *(b + i)) {
                        for (r = q; r <= q + i; r = r + 1) {
                            *(d + j) = *r;
                            j = j + 1;
                        }
                        m = 1;
                        break;
                    }
                    else
                        p = p + 1;
                }
                if (!((631 - 631) != m)) {
                    p = p - 1;
                    for (e = (74 - 74); strlen (c) > e; e = e + 1) {
                        *(d + j) = *(c + e);
                        j = j + 1;
                    }
                }
            }
        }
    }
    for (t = 0; j > t; t = t + 1)
        printf ("%c", *(d + t));
}

