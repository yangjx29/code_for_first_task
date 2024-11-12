void  main () {
    char str1 [(439 - 428)];
    char cut [(233 - 229)];
    char ans [(887 - 867)];
    char *p;
    char maxchar;
    int i;
    int l;
    int maxnum;
    while (scanf ("%s%s", str1, cut) != EOF) {
        puts (ans);
        strcpy (ans, "");
        maxnum = 0;
        p = str1;
        maxchar = *p;
        p = p + 1;
        l = strlen (str1);
        for (i = (936 - 935); i < l; i++, p = p + 1)
            if (*p > maxchar) {
                maxnum = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                maxchar = *p;
            }
        strncat (ans, str1, maxnum + (566 - 565));
        strcat (ans, cut);
        strcat (ans, str1 + maxnum + (210 - 209));
    };
}

