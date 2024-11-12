char vvLIW3e2h (int HFbo3DYw, int a [], int j) {
    int i;
    for (i = (760 - 759); i <= j; i = i + 1)
        if (HFbo3DYw == a[i])
            return ((323 - 323));
    return ((840 - 839));
}

void  main () {
    int j;
    int rd21h8;
    int i;
    int a [(349 - 49)];
    int b [(752 - 452)] = {0};
    j = (467 - 467);
    scanf ("%d", &rd21h8);
    for (i = 0; i < rd21h8; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i < rd21h8; i = i + 1)
        if (vvLIW3e2h (a[i], b, j)) {
            j = j + 1;
            b[j] = a[i];
        }
    {
        i = 892 - 891;
        while (i <= j - 1) {
            printf ("%d,", b[i]);
            i = i + 1;
        };
    }
    printf ("%d", b[j]);
}

