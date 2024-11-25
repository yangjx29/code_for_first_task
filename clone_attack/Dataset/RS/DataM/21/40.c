void  main () {
    float Jnx0tplQd = 0, ave, pi5U41, gPrOsSUW2Co;
    int a [300] = {(475 - 475)}, n, i, min, qgsyTiVcmv;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            Jnx0tplQd = Jnx0tplQd +(float)a[i];
            i = i + 1;
        };
    }
    ave = Jnx0tplQd / n;
    min = a[0];
    qgsyTiVcmv = a[0];
    {
        i = 0;
        while (n > i) {
            if (min > a[i])
                min = a[i];
            if (qgsyTiVcmv < a[i])
                qgsyTiVcmv = a[i];
            i = i + 1;
        };
    }
    pi5U41 = ave - min;
    gPrOsSUW2Co = qgsyTiVcmv - ave;
    if (pi5U41 > gPrOsSUW2Co)
        printf ("%d\n", min);
    else {
        if (pi5U41 < gPrOsSUW2Co)
            printf ("%d\n", qgsyTiVcmv);
        else
            printf ("%d,%d\n", min, qgsyTiVcmv);
    };
}

