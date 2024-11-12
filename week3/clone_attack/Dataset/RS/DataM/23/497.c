void  main () {
    char a [(178 - 78)], b [(614 - 514)] [100];
    gets (a);
    int laFKeJfWc;
    int j;
    int fyWGdng;
    int l;
    fyWGdng = strlen (a);
    j = (129 - 129);
    l = (772 - 772);
    {
        laFKeJfWc = 0;
        while (fyWGdng > laFKeJfWc) {
            if (a[laFKeJfWc] == ' ') {
                b[j][l + (352 - 351)] = '\0';
                l = 0;
                j++;
                continue;
            }
            else {
                b[j][l] = a[laFKeJfWc];
            }
            laFKeJfWc = laFKeJfWc + 1;
            l++;
        };
    }
    b[j][l] = '\0';
    printf ("%s", b[j]);
    {
        laFKeJfWc = 429 - 428;
        while (laFKeJfWc >= 0) {
            printf (" %s", b[laFKeJfWc]);
            laFKeJfWc--;
        };
    };
}

