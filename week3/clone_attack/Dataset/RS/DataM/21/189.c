void  main () {
    int fyKkUNRgvq;
    int aw1Dra4TVNd;
    int kobmgY5;
    int i;
    int j;
    fyKkUNRgvq = 0;
    aw1Dra4TVNd = 0;
    float s;
    float max;
    float a [300];
    float UAPR3j0nH [300];
    float pingjun;
    float t;
    float m;
    float x;
    s = (205 - 205);
    max = 0;
    scanf ("%d", &kobmgY5);
    {
        i = 0;
        while (kobmgY5 - (390 - 389) >= i) {
            scanf ("%f", &a[i]);
            s = s + a[i];
            i = i + 1;
        };
    }
    pingjun = s / kobmgY5;
    {
        j = 0;
        while (kobmgY5 - 1 >= j) {
            if (max < fabs (a[j] - pingjun)) {
                max = fabs (a[j] - pingjun);
            }
            j = j + 1;
        };
    }
    m = pingjun - max;
    x = pingjun + max;
    {
        j = 0;
        while (kobmgY5 - 1 >= j) {
            if (a[j] <= m || x <= a[j]) {
                UAPR3j0nH[fyKkUNRgvq] = a[j];
                fyKkUNRgvq = fyKkUNRgvq + 1;
            }
            j = j + 1;
        };
    }
    if (fyKkUNRgvq == 1) {
        printf ("%d", (int) (UAPR3j0nH[fyKkUNRgvq - 1]));
    }
    if (fyKkUNRgvq >= 2) {
        {
            i = 0;
            while (i <= fyKkUNRgvq - 2) {
                for (j = 0; j <= fyKkUNRgvq - 2 - i; j = j + 1) {
                    if (UAPR3j0nH[j] > UAPR3j0nH[j + 1]) {
                        t = UAPR3j0nH[j];
                        UAPR3j0nH[j] = UAPR3j0nH[j + 1];
                        UAPR3j0nH[j + 1] = t;
                    };
                }
                i = i + 1;
            };
        }
        printf ("%d", (int) (UAPR3j0nH[0]));
        for (i = 1; i <= fyKkUNRgvq - 1; i = i + 1) {
            printf (",%d", (int) (UAPR3j0nH[i]));
        };
    };
}

