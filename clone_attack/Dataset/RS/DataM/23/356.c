void  main () {
    char str1 [100];
    char *p;
    char *dQLmMbTd;
    char *NtFRbp;
    int n;
    gets (str1);
    n = strlen (str1);
    p = str1 + n - 1;
    dQLmMbTd = str1 + n - 1;
    NtFRbp = str1 + n - 1;
    {
        p = str1 + n - 1;
        while (p >= str1) {
            if (*p == ' ') {
                NtFRbp = p - 1;
                {
                    p = p + 1;
                    while (p <= dQLmMbTd) {
                        printf ("%c", *p);
                        p++;
                    };
                }
                dQLmMbTd = NtFRbp;
                p = NtFRbp;
                printf (" ");
            }
            p--;
        };
    }
    {
        p = str1;
        while (p <= dQLmMbTd) {
            printf ("%c", *p);
            p++;
        };
    };
}

