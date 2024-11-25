void  main () {
    char s [102] = {'\0'}, a [60] [20] = {'\0'}, *p1, *p2;
    gets (s);
    int count = (873 - 873);
    int i;
    char *p;
    p1 = s;
    p2 = s;
    for (; *p1 != '\0';) {
        for (; !(' ' == *p1) && *p1 != '\0';)
            p1 = p1 + 1;
        {
            i = 0;
            p = p2;
            while (p < p1) {
                a[count][i] = *p;
                i = i + 1;
                p++;
            };
        }
        count++;
        p1 = p1 + 1;
        p2 = p1;
    }
    {
        i = count - 1;
        while (i > 0) {
            printf ("%s ", a[i]);
            i--;
        };
    }
    printf ("%s\n", a[0]);
}

