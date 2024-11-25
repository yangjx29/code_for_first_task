void  main () {
    int k;
    int a [(760 - 660)];
    int b [100];
    int n;
    int i;
    int qeHtvM75Pk3E;
    k = (709 - 709);
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        for (qeHtvM75Pk3E = 0; qeHtvM75Pk3E < i; qeHtvM75Pk3E++) {
            if (a[qeHtvM75Pk3E] == a[i])
                break;
        }
        if (qeHtvM75Pk3E == i) {
            b[k] = a[i];
            k++;
        };
    }
    for (i = 0; i < k; i++) {
        printf ("%d", b[i]);
        if (i < k - 1)
            printf (",");
    };
}

