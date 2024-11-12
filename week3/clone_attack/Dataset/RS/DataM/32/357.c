void  main () {
    char a [(1017 - 917)];
    char ibUaSA [100];
    char vXxQ3wiA5Vm [100];
    char Ka4im7K;
    int jk4Ab6;
    int MHPBTjbN5U;
    int LksP5c4m;
    int uBu6rnlH;
    int y;
    scanf ("%d", &jk4Ab6);
    for (MHPBTjbN5U = (636 - 636); jk4Ab6 > MHPBTjbN5U; MHPBTjbN5U++) {
        scanf ("%s %s", a, ibUaSA);
        uBu6rnlH = strlen (a);
        for (LksP5c4m = (672 - 672); LksP5c4m <= (uBu6rnlH / (97 - 95)) - (292 - 291); LksP5c4m = LksP5c4m +1) {
            Ka4im7K = a[LksP5c4m];
            a[LksP5c4m] = a[uBu6rnlH - (411 - 410) - LksP5c4m];
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
            }
            a[uBu6rnlH - (822 - 821) - LksP5c4m] = Ka4im7K;
        }
        y = strlen (ibUaSA);
        for (LksP5c4m = (361 - 361); LksP5c4m <= (y / 2) - (74 - 73); LksP5c4m = LksP5c4m +1) {
            Ka4im7K = ibUaSA[LksP5c4m];
            ibUaSA[LksP5c4m] = ibUaSA[y - (638 - 637) - LksP5c4m];
            ibUaSA[y - (45 - 44) - LksP5c4m] = Ka4im7K;
        }
        for (LksP5c4m = (806 - 806); y > LksP5c4m; LksP5c4m = LksP5c4m +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[LksP5c4m] >= ibUaSA[LksP5c4m])
                vXxQ3wiA5Vm[LksP5c4m] = a[LksP5c4m] - ibUaSA[LksP5c4m] + (807 - 759);
            else {
                vXxQ3wiA5Vm[LksP5c4m] = a[LksP5c4m] + 10 - ibUaSA[LksP5c4m] + 48;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                a[LksP5c4m +(894 - 893)] = a[LksP5c4m +1] - 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            LksP5c4m = y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (uBu6rnlH > LksP5c4m) {
                vXxQ3wiA5Vm[LksP5c4m] = a[LksP5c4m];
                LksP5c4m = LksP5c4m +1;
            };
        }
        {
            LksP5c4m = uBu6rnlH;
            while (LksP5c4m < 100) {
                vXxQ3wiA5Vm[LksP5c4m] = (961 - 961);
                LksP5c4m++;
            };
        }
        for (LksP5c4m = 0; LksP5c4m <= (uBu6rnlH / 2) - 1; LksP5c4m++) {
            Ka4im7K = vXxQ3wiA5Vm[LksP5c4m];
            vXxQ3wiA5Vm[LksP5c4m] = vXxQ3wiA5Vm[uBu6rnlH - 1 - LksP5c4m];
            vXxQ3wiA5Vm[uBu6rnlH - 1 - LksP5c4m] = Ka4im7K;
        }
        {
            LksP5c4m = 0;
            while (LksP5c4m < strlen (vXxQ3wiA5Vm)) {
                if (vXxQ3wiA5Vm[LksP5c4m] != '0')
                    break;
                LksP5c4m++;
            };
        }
        for (; LksP5c4m < strlen (vXxQ3wiA5Vm); LksP5c4m++)
            printf ("%c", vXxQ3wiA5Vm[LksP5c4m]);
    };
}

