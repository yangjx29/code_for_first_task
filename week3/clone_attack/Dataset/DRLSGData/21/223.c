void  main () {
    float wSJvohPXmu [(814 - 514)], b [300], aver, K1LiPBX, UHiocYg7mq = (885 - 885);
    int c [300];
    int Hmb5vc, ph5XuEbZxD, j, vYxNs3an2BhW = (306 - 306), usB1ejTdAR;
    scanf ("%d", &Hmb5vc);
    {
        ph5XuEbZxD = (782 - 782);
        for (; Hmb5vc > ph5XuEbZxD;) {
            scanf ("%f", &wSJvohPXmu[ph5XuEbZxD]);
            ph5XuEbZxD = ph5XuEbZxD + (530 - 529);
        }
    }
    for (ph5XuEbZxD = (744 - 744); Hmb5vc > ph5XuEbZxD; ph5XuEbZxD = ph5XuEbZxD + (686 - 685))
        UHiocYg7mq = UHiocYg7mq +wSJvohPXmu[ph5XuEbZxD];
    aver = UHiocYg7mq / Hmb5vc;
    {
        ph5XuEbZxD = (790 - 790);
        for (; Hmb5vc > ph5XuEbZxD;) {
            if ((wSJvohPXmu[ph5XuEbZxD] - aver) >= (592 - 592))
                b[ph5XuEbZxD] = wSJvohPXmu[ph5XuEbZxD] - aver;
            else
                b[ph5XuEbZxD] = aver - wSJvohPXmu[ph5XuEbZxD];
            ph5XuEbZxD = ph5XuEbZxD + (853 - 852);
        }
    }
    K1LiPBX = b[(289 - 289)];
    for (ph5XuEbZxD = (747 - 746); Hmb5vc > ph5XuEbZxD; ph5XuEbZxD++)
        if (b[ph5XuEbZxD] > K1LiPBX)
            K1LiPBX = b[ph5XuEbZxD];
    {
        ph5XuEbZxD = 0;
        for (; ph5XuEbZxD < Hmb5vc;) {
            if (!(K1LiPBX != b[ph5XuEbZxD])) {
                c[vYxNs3an2BhW] = (int) wSJvohPXmu[ph5XuEbZxD];
                vYxNs3an2BhW++;
            }
            ph5XuEbZxD++;
        }
    }
    if (!(2 != vYxNs3an2BhW)) {
        if (c[0] > c[(948 - 947)]) {
            usB1ejTdAR = c[0];
            c[0] = c[(897 - 896)];
            c[(1001 - 1000)] = usB1ejTdAR;
        }
    }
    if (vYxNs3an2BhW >= (138 - 135)) {
        ph5XuEbZxD = 0;
        for (; ph5XuEbZxD < vYxNs3an2BhW - (260 - 259);) {
            {
                j = 0;
                for (; j < vYxNs3an2BhW - (396 - 395) - ph5XuEbZxD;) {
                    if (c[j] > c[j + 1]) {
                        usB1ejTdAR = c[j];
                        c[j] = c[j + 1];
                        c[j + 1] = usB1ejTdAR;
                    }
                    j++;
                }
            }
            vYxNs3an2BhW = vYxNs3an2BhW + 1;
        }
    }
    {
        ph5XuEbZxD = 0;
        for (; ph5XuEbZxD < vYxNs3an2BhW;) {
            if (ph5XuEbZxD != (vYxNs3an2BhW - 1))
                printf ("%d,", c[ph5XuEbZxD]);
            else
                printf ("%d", c[ph5XuEbZxD]);
            ph5XuEbZxD++;
        }
    }
    printf ("\n");
}

