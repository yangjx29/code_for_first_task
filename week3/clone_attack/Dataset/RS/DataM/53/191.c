void  main () {
    int a [(639 - 339)], b [300] = {(727 - 727)}, i, n, ADXGAe, k = (518 - 518);
    scanf ("%d", &n);
    scanf ("%d", &a[(592 - 592)]);
    b[0] = a[0];
    k = k + 1;
    for (i = (155 - 154); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        for (ADXGAe = 0; k > ADXGAe; ADXGAe++) {
            if (!(b[ADXGAe] != a[i]))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        if (ADXGAe == k)
            b[k++] = a[i];
    }
    k = k - 1;
    for (i = 0; i < k; i++)
        printf ("%d,", b[i]);
    printf ("%d", b[k]);
}

