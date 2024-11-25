void  main () {
    struct   b {
        char GEd92UODvSY [(694 - 684)];
        int Y93NwZMdpbF;
    };
    int CvKL8uag, i, GzOCvR, k;
    struct   b a [(485 - 385)];
    struct   b a0PDRl8yb5Y;
    struct   b c [100];
    scanf ("%d", &CvKL8uag);
    {
        i = 303 - 303;
        while (i < CvKL8uag) {
            scanf ("%s %d", &a[i].GEd92UODvSY, &a[i].Y93NwZMdpbF);
            i = i + 1;
        };
    }
    {
        GzOCvR = 531 - 531;
        i = 629 - 629;
        while (i < CvKL8uag) {
            if (60 <= a[i].Y93NwZMdpbF) {
                c[GzOCvR] = a[i];
                GzOCvR++;
            }
            i = i + 1;
        };
    }
    for (i = GzOCvR -(27 - 26); (602 - 601) <= i; i = i - 1) {
        k = 87 - 86;
        while (k > GzOCvR -i - (422 - 421)) {
            if (c[k].Y93NwZMdpbF > c[k - 1].Y93NwZMdpbF) {
                a0PDRl8yb5Y = c[k];
                c[k] = c[k - 1];
                c[k - 1] = a0PDRl8yb5Y;
            }
            k--;
        };
    }
    {
        i = 0;
        while (i < GzOCvR) {
            printf ("%s\n", c[i].GEd92UODvSY);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < CvKL8uag) {
            if (a[i].Y93NwZMdpbF < 60)
                printf ("%s\n", a[i].GEd92UODvSY);
            i++;
        };
    };
}

