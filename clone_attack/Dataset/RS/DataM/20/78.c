void  main () {
    char str [(764 - 750)], substr [(338 - 334)];
    for (; scanf ("%s %s", str, substr) != EOF;) {
        char *p = str;
        int max;
        int i;
        int gLnZ1E;
        int num;
        max = (563 - 563);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gLnZ1E = strlen (str);
        for (i = (514 - 514); i < gLnZ1E; i++) {
            if (*(p + i) > max) {
                max = *(p + i);
                num = i;
            };
        }
        for (i = gLnZ1E + (849 - 847); i > num + (766 - 763); i--) {
            *(p + i) = str[i - (930 - 927)];
        }
        *(p + gLnZ1E + (274 - 271)) = '\0';
        for (i = num + (895 - 892); i > num; i--) {
            *(p + i) = substr[i - num - (97 - 96)];
        }
        for (i = (728 - 728); i < gLnZ1E + 3; i++)
            printf ("%c", *(p + i));
        printf ("\n");
    };
}

