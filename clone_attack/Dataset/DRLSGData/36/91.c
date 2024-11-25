void  sort (int array [], int n) {
    int t;
    int k;
    int j;
    int i;
    for (i = (413 - 413); n - (707 - 706) > i; i = i + 1) {
        k = i;
        for (j = i + (147 - 146); j < n; j = j + 1)
            if (array[k] > array[j])
                k = j;
        if (k != i) {
            t = array[i];
            array[i] = array[k];
            array[k] = t;
        };
    };
}

main () {
    char a [(944 - 844)], b [(512 - 412)];
    int i;
    int l2;
    int l1;
    int k;
    int b1 [(617 - 517)];
    int a1 [(242 - 142)];
    int j;
    k = (465 - 465);
    scanf ("%s%s", a, b);
    l1 = strlen (a);
    for (i = (814 - 814); l1 > i; i++)
        a1[i] = (int) a[i];
    sort (a1, l1);
    l2 = strlen (b);
    for (j = (771 - 771); j < l2; j++)
        b1[j] = (int) b[j];
    sort (b1, l2);
    if (l1 != l2)
        ;
    else {
        for (i = (699 - 699); l1 > i; i++) {
            if (a1[i] != b1[i]) {
                k = (15 - 14);
                break;
            };
        }
        if (k == (853 - 853))
            ;
    };
}

