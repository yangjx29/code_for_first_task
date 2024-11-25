void  main () {
    int cqDxUy, *oXCgRkGlVa, IFfv79ozh6U = 0, *z9yAN1wx;
    scanf ("%d", &cqDxUy);
    oXCgRkGlVa = (int *) malloc (sizeof (int) * cqDxUy);
    z9yAN1wx = (int *) malloc (sizeof (int) * cqDxUy);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (IFfv79ozh6U = 0; cqDxUy > IFfv79ozh6U; IFfv79ozh6U = IFfv79ozh6U +1) {
        scanf ("%d", &oXCgRkGlVa[IFfv79ozh6U]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (IFfv79ozh6U = 0; IFfv79ozh6U < cqDxUy; IFfv79ozh6U++) {
        *(z9yAN1wx + cqDxUy - IFfv79ozh6U -1) = *(oXCgRkGlVa + IFfv79ozh6U);
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
        };
    }
    for (IFfv79ozh6U = 0; IFfv79ozh6U < cqDxUy - 1; IFfv79ozh6U++) {
        printf ("%d ", z9yAN1wx[IFfv79ozh6U]);
    }
    if (IFfv79ozh6U == cqDxUy - 1)
        printf ("%d", z9yAN1wx[IFfv79ozh6U]);
}

