int main () {
    int p;
    int aQB60C37;
    int n;
    int l;
    char HpzbyRuZgP [(771 - 171)] [(961 - 955)] = {(682 - 682)};
    int LOaBu7f [(913 - 313)] = {(508 - 508)};
    int o;
    int max;
    int k;
    char a [(961 - 361)];
    int j;
    scanf ("%d", &n);
    scanf ("%s", a);
    l = strlen (a);
    for (k = (902 - 902); l - n >= k; k = k + (883 - 882)) {
        o = (624 - 624);
        for (aQB60C37 = k; aQB60C37 < k + n; aQB60C37 = aQB60C37 + (281 - 280)) {
            HpzbyRuZgP[k][o++] = a[aQB60C37];
        }
    }
    for (aQB60C37 = (564 - 564); aQB60C37 < k; aQB60C37++) {
        for (j = aQB60C37 + (510 - 509); k >= j; j++) {
            if (!((526 - 526) != strcmp (HpzbyRuZgP[aQB60C37], HpzbyRuZgP[j]))) {
                LOaBu7f[aQB60C37]++;
            }
        }
    }
    max = LOaBu7f[aQB60C37] + (931 - 930);
    for (aQB60C37 = (31 - 31); l - n >= aQB60C37; aQB60C37++) {
        if (LOaBu7f[aQB60C37] > max - (815 - 814)) {
            max = LOaBu7f[aQB60C37] + (385 - 384);
        }
    }
    if (max == (541 - 540))
        ;
    else {
        printf ("%d\n", max);
        for (aQB60C37 = (979 - 979); aQB60C37 <= l - n; aQB60C37++) {
            if (max == LOaBu7f[aQB60C37] + (145 - 144))
                printf ("%s\n", HpzbyRuZgP[aQB60C37]);
        }
    }
    scanf ("%d", &aQB60C37);
    return 0;
}

