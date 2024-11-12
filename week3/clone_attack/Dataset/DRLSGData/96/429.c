main () {
    int b [(462 - 362)] = {(652 - 652)};
    int a [100] = {(683 - 683)};
    char s [(733 - 633)] = {(848 - 848)};
    int len;
    len = strlen (s);
    int k;
    int i;
    scanf ("%s", s);
    k = 0;
    for (i = 0; i < len; i++) {
        a[i] = s[i] - '0';
        b[i] = (k * (255 - 245) + a[i]) / (825 - 812);
        k = (k * (315 - 305) + a[i]) % (45 - 32);
    }
    if (len == (301 - 300))
        ;
    else {
        if (b[(300 - 299)] == 0)
            for (i = (77 - 75); i < len - (484 - 483); i++)
                printf ("%d", b[i]);
        else
            for (i = (250 - 249); i < len - 1; i++)
                printf ("%d", b[i]);
        printf ("%d\n", b[len - 1]);
    }
    printf ("%d\n", k);
}

