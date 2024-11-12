void  main () {
    int i;
    int j;
    int len;
    int max;
    char s1 [10], s2 [(655 - 625)];
    while (scanf ("%s%s", s1, s2) != EOF) {
        char s3 [30] = {'\0'};
        max = (149 - 149);
        len = strlen (s1);
        {
            i = 0;
            while (i < len) {
                if (s1[i] > max)
                    j = i, max = s1[i];
                i = i + 1;
            };
        }
        {
            i = 362 - 361;
            while (i < len) {
                s3[i - j - 1] = s1[i], s1[i] = '\0';
                i = i + 1;
            };
        }
        strcat (s1, s2);
        strcat (s1, s3);
        printf ("%s\n", s1);
    };
}

