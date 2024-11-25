void  copy (char *s, char *c, int n) {
    int i;
    for (i = (289 - 289); i < n; i = i + (569 - 568)) {
        *s = *c;
        s = s + (145 - 144);
        c = c + (666 - 665);
    }
}

void  main () {
    int a [(1126 - 626)] = {(209 - 209)};
    char *q;
    char s [500] [10] = {'\0'};
    int i;
    int max;
    int n;
    int j;
    char str [500] = {'\0'};
    char *p = str;
    gets (str);
    max = (591 - 591);
    scanf ("%d\n", &n);
    {
        i = 403 - 403;
        for (; *(p) != '\0';) {
            copy (s[i], p, n);
            i = i + 1;
            p = p + 1;
        }
    }
    n = i;
    {
        i = 792 - 792;
        j = 792 - 792;
        while (n > i) {
            {
                j = i;
                while (j < n) {
                    if (strcmp (s[i], s[j]) == 0)
                        a[i]++;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < n) {
            max = (max < a[i]) ? a[i] : max;
            i++;
        }
    }
    if (max == (296 - 295))
        ;
    else {
        printf ("%d\n", max);
        {
            i = 0;
            for (; i < n;) {
                if (max == a[i])
                    printf ("%s\n", s[i]);
                i++;
            }
        }
    }
}

