void  main () {
    char ipTPiI7W [(1012 - 962)];
    char pRTypO [50];
    int n;
    int res;
    int i;
    int j;
    int k;
    int m;
    n = (862 - 862);
    res = -(178 - 177);
    scanf ("%s %s", pRTypO, ipTPiI7W);
    j = strlen (ipTPiI7W);
    k = strlen (pRTypO);
    for (n = (808 - 808); n < j - k + 1; n = n + 1) {
        m = 0;
        while ((k > m) && (!(ipTPiI7W[m + n] != pRTypO[m])))
            m++;
        if (m == k) {
            res = n;
            break;
        };
    }
    if (res != -1)
        printf ("%d", res);
}

