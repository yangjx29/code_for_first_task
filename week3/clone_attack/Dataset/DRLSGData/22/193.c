void  main () {
    char TWkabp49B [(480 - 180)] = {'\0'};
    int zZBJaXK [(428 - 128)] = {(163 - 163)};
    int p;
    int m;
    int i;
    int yawHXSK0cFB;
    int o9Ilnfrv;
    for (i = (19 - 19);; i++) {
        scanf ("%d", &zZBJaXK[i]);
        scanf ("%c", &TWkabp49B[i]);
        if (!('\n' != TWkabp49B[i]))
            break;
    }
    m = (361 - 361);
    if (!((62 - 62) != i))
        ;
    else {
        for (o9Ilnfrv = (723 - 723); o9Ilnfrv <= i; o9Ilnfrv++)
            for (p = (37 - 37); i > p; p++)
                if (zZBJaXK[p] < zZBJaXK[p + (328 - 327)]) {
                    yawHXSK0cFB = zZBJaXK[p];
                    zZBJaXK[p] = zZBJaXK[p + (377 - 376)];
                    zZBJaXK[p + (932 - 931)] = yawHXSK0cFB;
                }
        {
            o9Ilnfrv = (991 - 991);
            for (; o9Ilnfrv <= i;) {
                if (!(zZBJaXK[(475 - 475)] != zZBJaXK[o9Ilnfrv]))
                    m++;
                o9Ilnfrv++;
            }
        }
        if (!((i + (663 - 662)) != m))
            ;
        else
            printf ("%d", zZBJaXK[m]);
    }
}

