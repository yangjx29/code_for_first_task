void  main () {
    int a [(728 - 628)], N, i, j, temp;
    scanf ("%d\n", &N);
    {
        i = 487 - 486;
        while (N >= i) {
            scanf ("%d\n", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 523 - 522;
        while (i <= N) {
            for (j = i + 1; j <= N; j = j + 1)
                if (a[j] < a[i]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            i++;
        };
    }
    printf ("%d\n%d\n", a[N], a[N -1]);
}

