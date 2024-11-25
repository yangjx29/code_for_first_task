void  main () {
    int chGaVXdQ0, bSrEx40, k, num [(718 - 702)], f;
    scanf ("%d", &num[(960 - 959)]);
    do {
        f = 0;
        k = (807 - 806);
        do {
            k++;
            scanf ("%d", &num[k]);
        }
        while (num[k] != 0);
        for (chGaVXdQ0 = 1; k - 1 >= chGaVXdQ0; chGaVXdQ0 = chGaVXdQ0 + 1)
            for (bSrEx40 = 1; bSrEx40 <= k - 1; bSrEx40++)
                if (num[chGaVXdQ0] == num[bSrEx40] * 2)
                    f++;
        printf ("%d\n", f);
        scanf ("%d", &num[1]);
    }
    while (num[1] != -1);
}

