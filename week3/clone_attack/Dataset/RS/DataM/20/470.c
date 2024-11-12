void  main () {
    char str [15];
    char klLBpCA4 [3];
    int n, i, j;
    while (scanf ("%s %s", str, klLBpCA4) != EOF) {
        klLBpCA4[3] = 97;
        j = 0;
        n = strlen (str);
        str[n] = 97;
        {
            i = 1;
            while (i <= n - 1) {
                if (str[i] > str[j])
                    j = i;
                i++;
            };
        }
        for (i = n; i >= j + 1; i--) {
            str[i + 3] = str[i];
        }
        {
            i = j + 1;
            while (i <= j + 3) {
                str[i] = klLBpCA4[i - 1 - j];
                i++;
            };
        }
        str[n + 3] = '\0';
        printf ("%s\n", str);
    };
}

