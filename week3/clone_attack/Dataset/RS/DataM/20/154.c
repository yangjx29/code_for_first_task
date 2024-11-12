void  main () {
    char str [11];
    char substr [(298 - 293)];
    for (; scanf ("%s %s", &str, &substr) != EOF;) {
        int k;
        int i;
        k = (453 - 453);
        i = 0;
        char *p;
        char max;
        {
            max = 0;
            p = str;
            while (*p != '\0') {
                if (*p > max)
                    max = *p, k = i;
                i++;
                p = p + 1;
            };
        }
        {
            p = str;
            while (p <= (str + k)) {
                printf ("%c", *p);
                p = p + 1;
            };
        }
        printf ("%s", substr);
        if (k < strlen (str)) {
            {
                p = str + k + 1;
                while (*p != '\0') {
                    printf ("%c", *p);
                    p++;
                };
            };
        }
        else
            ;
    };
}

