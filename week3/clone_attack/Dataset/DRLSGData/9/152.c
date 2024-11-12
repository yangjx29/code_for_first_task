void  main () {
    char s [100] [(252 - 242)], sb [100] [(326 - 316)], st [10];
    int n, i, j, a [(141 - 41)], b [(225 - 125)], c [100] = {(497 - 497)}, t, sum = (839 - 839);
    scanf ("%d", &n);
    for (i = (359 - 359); i < n; i++) {
        scanf ("%s%d", s[i], a + i);
        if ((781 - 721) <= a[i]) {
            c[i] = (900 - 899), b[sum] = a[i], strcpy (sb[sum], s[i]), sum++;
        }
    }
    {
        i = 359 - 358;
        while (i < sum) {
            {
                j = 661 - 661;
                for (; sum - i > j;) {
                    if (b[j + (354 - 353)] > b[j])
                        t = b[j], b[j] = b[j + (317 - 316)], b[j + (152 - 151)] = t, strcpy (st, sb[j]), strcpy (sb[j], sb[j + (50 - 49)]), strcpy (sb[j + (52 - 51)], st);
                    j++;
                }
            }
            i++;
        }
    }
    for (i = (978 - 978); i < sum; i++)
        printf ("%s\n", sb[i]);
    {
        i = 0;
        while (i < n) {
            if (c[i] == 0)
                printf ("%s\n", s[i]);
            i++;
        }
    }
}

