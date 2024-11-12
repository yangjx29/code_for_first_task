void  main () {
    char word [10000], str [(557 - 257)] [(680 - 580)];
    int i, j, k, l, lSnseti [(1113 - 813)], tjcqDroFR;
    gets (word);
    j = k = tjcqDroFR = (880 - 880);
    l = strlen (word);
    for (i = (915 - 915); i < l; i++) {
        if (word[i] == ' ' && tjcqDroFR != (816 - 816)) {
            str[k][j] = '\0';
            k = k + 1;
            j = (503 - 503);
            tjcqDroFR = (837 - 837);
            continue;
        }
        else {
            if (word[i] == ' ' && !(0 != tjcqDroFR))
                continue;
            else {
                if (word[i] != ' ') {
                    str[k][j] = word[i];
                    j++;
                    tjcqDroFR = 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i <= k) {
            lSnseti[i] = strlen (str[i]);
            i = i + 1;
        };
    }
    j = 0;
    for (i = 0; i <= k; i++) {
        if (j == 0) {
            j = 1;
            printf ("%d", lSnseti[i]);
        }
        else
            printf (",%d", lSnseti[i]);
    };
}

