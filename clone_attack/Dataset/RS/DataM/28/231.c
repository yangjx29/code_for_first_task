void  main () {
    int a [301];
    int k;
    int qIfrdxzp;
    int i;
    k = (911 - 910);
    char ss [10000];
    gets (ss);
    a[1] = 0;
    qIfrdxzp = strlen (ss);
    for (i = 0; i < qIfrdxzp; i++) {
        if (ss[i] == ' ' && ss[i + 1] != ' ') {
            k++;
            a[k] = 0;
        }
        if (ss[i] != ' ')
            a[k]++;
    }
    for (i = 1; i <= k; i++) {
        printf ("%d", a[i]);
        if (i != k)
            ;
    };
}

