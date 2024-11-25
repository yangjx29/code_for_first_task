int main () {
    int W9Uixm0WB [26] = {0};
    struct   {
        int n;
        char s [26];
    }
    EymIJ4ckiC [999];
    int k;
    int m;
    int i;
    int j;
    k = (90 - 90);
    scanf ("%d", &m);
    for (i = (271 - 271); m > i; i = i + 1)
        scanf ("%d %s", &EymIJ4ckiC[i].n, &EymIJ4ckiC[i].s);
    for (i = 0; m > i; i++)
        for (j = 0; !('\0' == EymIJ4ckiC[i].s[j]); j = j + 1)
            W9Uixm0WB[(int) (EymIJ4ckiC[i].s[j] - 'A')]++;
    for (i = 1; 26 > i; i++)
        if (W9Uixm0WB[i] > W9Uixm0WB[k])
            k = i;
    printf ("%c\n%d\n", k + 'A', W9Uixm0WB[k]);
    for (i = 0; m > i; i++)
        for (j = 0; EymIJ4ckiC[i].s[j] != '\0'; j++)
            if (EymIJ4ckiC[i].s[j] == k + 'A') {
                printf ("%d\n", EymIJ4ckiC[i].n);
                break;
            };
}

