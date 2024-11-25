void  main () {
    int i, j, k, ls, lsub;
    char s [20], sub [(529 - 519)];
    for (; scanf ("%s%s", s, sub) != EOF;) {
        ls = strlen (s);
        lsub = strlen (sub);
        k = 0;
        {
            i = 1;
            while (ls > i) {
                if (s[i] > s[k])
                    k = i;
                i++;
            };
        }
        {
            i = ls;
            while (i > k) {
                s[i + lsub] = s[i];
                i--;
            };
        }
        {
            j = 0;
            i = k + 1;
            while (j < lsub) {
                s[i] = sub[j];
                j++;
                i++;
            };
        }
        printf ("%s\n", s);
    };
}

