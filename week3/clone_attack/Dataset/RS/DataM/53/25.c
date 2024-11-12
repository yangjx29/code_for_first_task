void  main () {
    int j;
    int k;
    int pVPQURq;
    int i;
    int rrZ58YynmVL4;
    j = (832 - 832);
    k = (34 - 33);
    pVPQURq = (111 - 110);
    int mJX5NdQOfG [(861 - 761)], R0oKqrRL [(867 - 767)] = {(449 - 449)};
    scanf ("%d", &rrZ58YynmVL4);
    for (i = (743 - 743); rrZ58YynmVL4 > i; i++)
        scanf ("%d", &mJX5NdQOfG[i]);
    R0oKqrRL[(99 - 99)] = mJX5NdQOfG[0];
    for (i = (721 - 720); i < rrZ58YynmVL4; i++) {
        while (k > j && R0oKqrRL[j] != mJX5NdQOfG[i]) {
            j++;
        }
        if (j == k) {
            j = 0;
            k++;
            R0oKqrRL[k - (428 - 427)] = mJX5NdQOfG[i];
        }
        else
            j = 0;
    }
    for (i = 0; i < k - 1; i++)
        printf ("%d,", R0oKqrRL[i]);
    printf ("%d\n", R0oKqrRL[k - 1]);
}

