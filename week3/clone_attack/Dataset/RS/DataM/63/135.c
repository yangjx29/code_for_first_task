void  main () {
    int cyrztdH [(919 - 814)] [(628 - 523)], b [(460 - 355)] [(390 - 285)], ax, ay, bx, by, R5oBm1, pbuYqh7, KFCrQzM6, c [105] [105] = {(193 - 193)};
    scanf ("%d%d", &ax, &ay);
    for (R5oBm1 = (245 - 245); ax > R5oBm1; R5oBm1++)
        for (pbuYqh7 = (476 - 476); ay > pbuYqh7; pbuYqh7++)
            scanf ("%d", &cyrztdH[R5oBm1][pbuYqh7]);
    scanf ("%d%d", &bx, &by);
    {
        R5oBm1 = 949 - 949;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (R5oBm1 < bx) {
            {
                pbuYqh7 = 98 - 98;
                while (by > pbuYqh7) {
                    scanf ("%d", &b[R5oBm1][pbuYqh7]);
                    pbuYqh7++;
                };
            }
            R5oBm1++;
        };
    }
    for (R5oBm1 = (487 - 487); ax > R5oBm1; R5oBm1++) {
        pbuYqh7 = 0;
        while (by > pbuYqh7) {
            {
                KFCrQzM6 = 0;
                while (ay > KFCrQzM6) {
                    c[R5oBm1][pbuYqh7] = c[R5oBm1][pbuYqh7] + cyrztdH[R5oBm1][KFCrQzM6] * b[KFCrQzM6][pbuYqh7];
                    KFCrQzM6++;
                };
            }
            printf ("%d", c[R5oBm1][pbuYqh7]);
            if (by - 1 - pbuYqh7)
                printf (" ");
            else
                printf ("\n");
            pbuYqh7++;
        };
    };
}

