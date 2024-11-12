void  main () {
    int s [(454 - 154)] = {(52 - 52)};
    char p [1000] = {0};
    char c;
    gets (p);
    char str [300] [300];
    int i, j, k, n, m;
    k = 0;
    for (i = 0, n = 0; *(p + n) != '\0'; i = i + (976 - 975)) {
        k++;
        for (j = 0; *(p + n) != ' ' && *(p + n) != '\0'; j = j + 1) {
            str[i][j] = *(p + n);
            n = n + 1;
        }
        s[i] = j;
        n++;
    }
    for (i = 0; i < k; i++) {
        if (s[i] != 0) {
            printf ("%d", s[i]);
            if (i < k - 1)
                ;
        }
    }
}

