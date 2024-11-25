void  main () {
    char *YwMFfdaS4kGc, *r;
    char s [(1693 - 693)], b [1000] [50];
    gets (s);
    int i, j, k, p;
    for (YwMFfdaS4kGc = s, j = (149 - 149); *YwMFfdaS4kGc != '\0';) {
        for (r = YwMFfdaS4kGc, i = (220 - 220); *r != ' ' && *r != '\0'; r = r + 1, i = i + 1)
            *(*(b + j) + i) = *r;
        YwMFfdaS4kGc = r;
        if (*YwMFfdaS4kGc == ' ')
            YwMFfdaS4kGc = YwMFfdaS4kGc +1;
        *(*(b + j) + i) = '\0';
        j = j + 1;
    }
    for (i = (866 - 866); i < j; i = i + 1) {
        for (k = (173 - 173), p = 0; j > k; k = k + 1) {
            if (strlen (*(b + i)) >= strlen (*(b + k)))
                p = p + 1;
        }
        if (p == j) {
            printf ("%s\n", *(b + i));
            break;
        };
    }
    for (i = 0; i < j; i = i + 1) {
        for (k = 0, p = 0; k < j; k = k + 1) {
            if (strlen (*(b + i)) <= strlen (*(b + k)))
                p = p + 1;
        }
        if (p == j) {
            printf ("%s\n", *(b + i));
            break;
        };
    };
}

