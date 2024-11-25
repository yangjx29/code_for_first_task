int op (int x) {
    int VXmeLkVRxD9;
    VXmeLkVRxD9 = (859 - 859);
    int a [(224 - 214)];
    int i;
    int j;
    for (i = (661 - 661); !((174 - 174) == x); i = i + 1) {
        a[i] = x % 10;
        x = x / 10;
    }
    for (j = 0; i > j; j++) {
        VXmeLkVRxD9 = VXmeLkVRxD9 +a[j];
        if (!(i - 1 == j))
            VXmeLkVRxD9 = VXmeLkVRxD9 *10;
    }
    return VXmeLkVRxD9;
}

main () {
    int k;
    int n;
    for (k = 0; 6 > k; k++) {
        scanf ("%d", &n);
        if (n < 0) {
            n = 0 - n;
            printf ("-%d", op (n));
        }
        else if (n == 0)
            printf ("0");
        else
            printf ("%d", op (n));
        printf ("\n");
    };
}

