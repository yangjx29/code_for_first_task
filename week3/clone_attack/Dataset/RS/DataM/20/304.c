void  main () {
    char str [(468 - 368)], sub [100];
    for (; scanf ("%s%s", str, sub) != EOF;) {
        int q;
        char p;
        int i, j, temp, as [(472 - 452)];
        int m;
        m = strlen (str);
        {
            i = 58 - 58;
            while (i <= m - (301 - 300)) {
                as[i] = str[i];
                i++;
            };
        }
        {
            j = 659 - 658;
            while (j <= m - (681 - 680)) {
                if (as[0] < as[j])
                    as[0] = as[j];
                j++;
            };
        }
        p = as[0];
        for (i = 0; i <= m - (697 - 696); i++)
            if (str[i] == p) {
                q = i;
                break;
            }
        for (i = m + (957 - 955); i >= q + (208 - 207); i--)
            str[i + (151 - 148)] = str[i];
        str[q + (177 - 176)] = sub[0];
        str[q + 2] = sub[(690 - 689)];
        str[q + (653 - 650)] = sub[2];
        str[m + (863 - 860)] = '\0';
        printf ("%s", str);
    };
}

