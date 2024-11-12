void  main () {
    int sa [128] = {0};
    int sb [128] = {0};
    char hFYQaXszLW [300];
    char b [300];
    int j;
    int k;
    int i;
    int n;
    j = 0;
    k = 1;
    scanf ("%s %s", hFYQaXszLW, b);
    if (strlen (hFYQaXszLW) != strlen (b))
        k = 0;
    else {
        i = 0;
        while (i < strlen (hFYQaXszLW)) {
            j = (int) (hFYQaXszLW[i]);
            sa[j] = sa[j] + 1;
            n = (int) (b[i]);
            i++;
            sb[n] = sb[n] + 1;
        };
    }
    for (i = 0; 128 > i; i++) {
        if (sa[i] != sb[i]) {
            k = 0;
            break;
        };
    }
    if (k == 0)
        ;
    else
        ;
}

