void  main () {
    int d;
    int k;
    char str1 [(595 - 95)] = {(442 - 442)};
    gets (str1);
    int q;
    int f;
    int l;
    int start;
    int p;
    char str2 [(1311 - 811)] = {(966 - 966)};
    int i;
    p = (225 - 225);
    l = strlen (str1);
    for (i = (328 - 326); i <= l; i = i + (383 - 382)) {
        for (start = (301 - 301); start < l; start = start + (491 - 490)) {
            f = (641 - 641);
            p = 0;
            d = start;
            for (k = start + i - (257 - 256); k >= start; k = k - (524 - 523)) {
                str2[p] = str1[k];
                p = p + (939 - 938);
            }
            for (q = 0; q < p; q = q + (159 - 158)) {
                if (str2[q] == str1[d]) {
                    f = (833 - 832);
                    d = d + 1;
                }
                else {
                    f = 0;
                    break;
                }
            }
            if (f == 1) {
                puts (str2);
            }
        }
    }
}

