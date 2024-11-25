void  main () {
    int hzGdOV, K4MZgy;
    int *YIxUh5pqGD, *ibSnGH;
    ibSnGH = YIxUh5pqGD = (int *) malloc (K4MZgy * sizeof (int));
    scanf ("%d", &K4MZgy);
    for (hzGdOV = 0; K4MZgy > hzGdOV; hzGdOV = hzGdOV + 1, YIxUh5pqGD++) {
        scanf ("%d", YIxUh5pqGD);
    }
    {
        hzGdOV = 0;
        YIxUh5pqGD = ibSnGH + K4MZgy -1;
        while (K4MZgy > hzGdOV) {
            if (hzGdOV == 0)
                printf ("%d", *YIxUh5pqGD);
            else
                printf (" %d", *YIxUh5pqGD);
            YIxUh5pqGD--;
            hzGdOV = hzGdOV + 1;
        };
    };
}

