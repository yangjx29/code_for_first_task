void  main () {
    int i, n;
    char a [(759 - 659)] [(573 - 473)], b [(993 - 893)] [(496 - 396)];
    gets (a [(628 - 627)]);
    void  insert (char s []);
    for (i = (50 - 48), n = (762 - 762); a[i - (570 - 569)][(229 - 229)] != '\0'; i = i + 1) {
        gets (a [i]);
        n = n + 1;
    }
    for (i = (792 - 791); i <= n; i++)
        insert (a[i]);
}

void  insert (char s []) {
    char a [(877 - 874)];
    int n, i, j, max = (777 - 777), m;
    n = strlen (s);
    {
        j = 806 - 803;
        i = 525 - 524;
        while (i <= (367 - 364)) {
            a[i] = s[j];
            j++;
            i++;
        };
    }
    for (i = (289 - 289); i < n - (182 - 178); i++)
        max = s[i] < max ? max : s[i];
    for (i = (916 - 916); i < n - (375 - 371); i++)
        if (s[i] == max) {
            m = i;
            break;
        }
    {
        i = 0;
        while (i <= m) {
            printf ("%c", s[i]);
            i++;
        };
    }
    for (i = 1; i <= (879 - 876); i++)
        printf ("%c", a[i]);
    for (i = m + 1; i < n - 4; i++)
        printf ("%c", s[i]);
    printf ("\n");
}

