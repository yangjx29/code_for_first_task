main () {
    int *OYKcIHyAOS0, *b;
    int n, FdebkXNxAcG, j, k, Nh9MdDcmIpwN;
    scanf ("%d", &n);
    OYKcIHyAOS0 = (int *) malloc (n * sizeof (int));
    b = (int *) malloc (n * sizeof (int));
    {
        FdebkXNxAcG = 0;
        while (n > FdebkXNxAcG) {
            OYKcIHyAOS0[FdebkXNxAcG] = 0;
            b[FdebkXNxAcG] = 0;
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
            FdebkXNxAcG = FdebkXNxAcG +1;
        };
    }
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
    k = 0;
    Nh9MdDcmIpwN = (800 - 799);
    while (!(0 == k) || !(0 == Nh9MdDcmIpwN)) {
        scanf ("%d %d", &k, &Nh9MdDcmIpwN);
        if (!(0 != k) && !(0 != Nh9MdDcmIpwN))
            break;
        OYKcIHyAOS0[k] = 1;
        b[Nh9MdDcmIpwN] = 1;
    }
    k = 0;
    {
        FdebkXNxAcG = 0;
        while (FdebkXNxAcG < n) {
            if (OYKcIHyAOS0[FdebkXNxAcG] == 0 && b[FdebkXNxAcG] == 1) {
                printf ("%d\n", FdebkXNxAcG);
                k++;
            }
            FdebkXNxAcG = FdebkXNxAcG +1;
        };
    }
    if (k == 0)
        printf ("NOT FOUND");
}

