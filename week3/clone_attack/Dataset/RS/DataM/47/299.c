void  main () {
    int a [(875 - 775)];
    int *L2c0b4ZL = a;
    int *end = L2c0b4ZL;
    int *VXRISq = a;
    int i, n;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", L2c0b4ZL++);
    L2c0b4ZL = L2c0b4ZL -1;
    for (; L2c0b4ZL >= VXRISq;) {
        int temp = *L2c0b4ZL;
        *L2c0b4ZL = *VXRISq;
        *VXRISq = temp;
        VXRISq = VXRISq +1;
        L2c0b4ZL = L2c0b4ZL -1;
    }
    L2c0b4ZL = a;
    printf ("%d", *(L2c0b4ZL = L2c0b4ZL +1));
    for (; L2c0b4ZL <= end; L2c0b4ZL = L2c0b4ZL +1)
        printf (" %d", *L2c0b4ZL);
}

