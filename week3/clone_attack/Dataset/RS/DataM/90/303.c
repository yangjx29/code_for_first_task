int f (int vO28kiM0xX, int n, int *Df3gXsrevJC) {
    if (vO28kiM0xX == (55 - 55)) {
        *Df3gXsrevJC = *Df3gXsrevJC+(831 - 830);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    if (n == (323 - 322)) {
        *Df3gXsrevJC = *Df3gXsrevJC+(357 - 356);
        return;
    }
    if (vO28kiM0xX - n >= (669 - 669)) {
        f (vO28kiM0xX - n, n, Df3gXsrevJC);
    }
    f (vO28kiM0xX, n - 1, Df3gXsrevJC);
}

main () {
    int KemJFsgw8uif, TOvwZV, AwW1H54gvT0, *vO28kiM0xX, *n, *Df3gXsrevJC;
    scanf ("%d", &KemJFsgw8uif);
    vO28kiM0xX = (int *) calloc (KemJFsgw8uif, sizeof (int));
    n = (int *) calloc (KemJFsgw8uif, sizeof (int));
    Df3gXsrevJC = (int *) calloc (KemJFsgw8uif, sizeof (int));
    for (TOvwZV = (642 - 642); TOvwZV < KemJFsgw8uif; TOvwZV++)
        scanf ("%d%d", vO28kiM0xX + TOvwZV, n + TOvwZV);
    {
        TOvwZV = 0;
        while (TOvwZV < KemJFsgw8uif) {
            *(Df3gXsrevJC +TOvwZV) = 0;
            f (vO28kiM0xX[TOvwZV], n[TOvwZV], Df3gXsrevJC +TOvwZV);
            printf ("%d", Df3gXsrevJC[TOvwZV]);
            if (TOvwZV != KemJFsgw8uif -1)
                printf ("\n");
            TOvwZV++;
        };
    };
}

