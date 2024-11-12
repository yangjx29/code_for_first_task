void  main () {
    char max [(438 - 338)];
    int i;
    char min [(540 - 440)];
    char a [(204 - 154)] [(930 - 830)];
    int n;
    for (i = (868 - 868); i < (624 - 574); i++) {
        scanf ("%s", a[i]);
    }
    strcpy (max, a[(816 - 816)]);
    n = i;
    strcpy (min, a[(447 - 447)]);
    for (i = (198 - 198); i < n; i++) {
        if (!((128 - 128) != strlen (a[i])))
            break;
        if (strlen (max) < strlen (a[i]))
            strcpy (max, a[i]);
        if (strlen (a[i]) < strlen (min))
            strcpy (min, a[i]);
    }
    printf ("%s\n%s\n", max, min);
}

