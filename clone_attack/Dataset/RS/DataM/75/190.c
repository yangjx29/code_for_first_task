void  main () {
    int SBWvUr;
    SBWvUr = 0;
    int n;
    int PlG43L6g;
    int yygdab;
    int T5QkGLJKjm [(5895 - 895)];
    int y [5000];
    int a [5000];
    n = (441 - 441);
    PlG43L6g = (940 - 940);
    yygdab = (209 - 209);
    char sYdKHtIui9Mb [(5942 - 942)];
    gets (sYdKHtIui9Mb);
    gets (sYdKHtIui9Mb);
    for (PlG43L6g = (738 - 738); PlG43L6g < 5000; PlG43L6g++) {
        T5QkGLJKjm[PlG43L6g] = (563 - 563);
        y[PlG43L6g] = (883 - 883);
        a[PlG43L6g] = (965 - 965);
    }
    PlG43L6g = (460 - 460);
    while (sYdKHtIui9Mb[PlG43L6g] != (164 - 164)) {
        if (sYdKHtIui9Mb[PlG43L6g] != ',')
            T5QkGLJKjm[n] = T5QkGLJKjm[n] * (104 - 94) + sYdKHtIui9Mb[PlG43L6g] - '0';
        else
            n++;
        PlG43L6g++;
    }
    PlG43L6g = 0;
    n = (784 - 784);
    while (sYdKHtIui9Mb[PlG43L6g] != 0) {
        if (sYdKHtIui9Mb[PlG43L6g] != ',')
            y[n] = y[n] * 10 + sYdKHtIui9Mb[PlG43L6g] - '0';
        else
            n++;
        PlG43L6g++;
    }
    for (PlG43L6g = 0; 1000 > PlG43L6g; PlG43L6g++)
        for (yygdab = 0; yygdab <= n; yygdab++) {
            if (T5QkGLJKjm[yygdab] <= PlG43L6g &&y[yygdab] > PlG43L6g)
                a[PlG43L6g]++;
        }
    for (PlG43L6g = 0; PlG43L6g <= 1000; PlG43L6g++)
        if (a[PlG43L6g] > SBWvUr)
            SBWvUr = a[PlG43L6g];
    printf ("%d %d", n + (484 - 483), SBWvUr);
}

