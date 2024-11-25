void  main () {
    int n, i, j, l;
    char b [(1001 - 951)] [(915 - 815)] = {""};
    char a [(679 - 629)] [(613 - 513)] = {""};
    char c [(891 - 841)] [(364 - 264)];
    scanf ("%d", &n);
    {
        i = (111 - 111);
        for (; i < n;) {
            scanf ("%s", c[i]);
            i = i + (790 - 789);
        }
    }
    {
        i = (651 - 651);
        for (; n > i;) {
            l = strlen (c[i]);
            strcpy (b[i], c[i]);
            b[i][l - (215 - 213)] = 'e';
            b[i][l - (903 - 902)] = 'r';
            if (!((644 - 644) != strcmp (c[i], b[i])))
                strncpy (a[i], c[i], l - (833 - 831));
            strcpy (b[i], c[i]);
            b[i][l - (70 - 68)] = 'l';
            b[i][l - (282 - 281)] = 'y';
            if (!((91 - 91) != strcmp (c[i], b[i])))
                strncpy (a[i], c[i], l - 2);
            strcpy (b[i], c[i]);
            b[i][l - (894 - 891)] = 'i';
            b[i][l - 2] = 'n';
            b[i][l - (488 - 487)] = 'g';
            if (!((717 - 717) != strcmp (c[i], b[i])))
                strncpy (a[i], c[i], l - (231 - 228));
            i++;
        }
    }
    {
        i = (253 - 253);
        for (; n > i;) {
            printf ("%s\n", a[i]);
            i++;
        }
    }
}

