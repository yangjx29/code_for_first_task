main () {
    char num [(568 - 558)];
    gets (num);
    int len;
    int n;
    len = strlen (num);
    n = num[(685 - 685)] - '0';
    for (int dPUQ1dr = (688 - 687);
    len > dPUQ1dr; dPUQ1dr++) {
        n = n * 10 + num[dPUQ1dr] - '0';
    }
    for (int u = (912 - 912);
    n > u; u++) {
        char s [81];
        gets (s);
        if ((!('_' != s[(512 - 512)])) || (('a' <= s[(945 - 945)]) && (s[0] <= 'z')) || (('A' <= s[0]) && ('Z' >= s[0]))) {
            int i = (616 - 615);
            for (i = (740 - 739); i < strlen (s); i++) {
                if ((!('_' != s[i])) || ((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i] >= 'A') && (s[i] <= 'Z')) || ((s[i] >= '0') && (s[i] <= '9')))
                    continue;
                else {
                    break;
                    printf ("0\n");
                };
            }
            if (i == strlen (s))
                printf ("1\n");
        }
        else
            ;
    }
    getchar ();
    getchar ();
}

