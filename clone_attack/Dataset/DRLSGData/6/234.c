void  main () {
    int dZQlXefhb [100] = {0};
    int k;
    int *p;
    int IpAFwyn;
    int zVufLJP;
    int p8P74Fk;
    int KgQFsoLzD7wc;
    int LslOKfw5x7;
    int WHsbVzI0yJpa;
    int lEa9524To;
    scanf ("%d\n%", &k);
    p = (int *) malloc (10000 * sizeof (int));
    {
        lEa9524To = 0;
        for (; k > lEa9524To;) {
            scanf ("%d%d", &zVufLJP, &p8P74Fk);
            {
                IpAFwyn = 0;
                {
                    if (0) {
                        return 0;
                    }
                }
                while (IpAFwyn < zVufLJP * p8P74Fk) {
                    scanf ("%d", p + IpAFwyn);
                    IpAFwyn = IpAFwyn +1;
                }
            }
            {
                LslOKfw5x7 = 0;
                for (; p8P74Fk > LslOKfw5x7;) {
                    dZQlXefhb[lEa9524To] = dZQlXefhb[lEa9524To] + (*(p + LslOKfw5x7)) + (*(p + p8P74Fk * (zVufLJP - 1) + LslOKfw5x7));
                    LslOKfw5x7 = LslOKfw5x7 +1;
                }
            }
            for (WHsbVzI0yJpa = 1; zVufLJP - 1 > WHsbVzI0yJpa; WHsbVzI0yJpa = WHsbVzI0yJpa +1)
                dZQlXefhb[lEa9524To] = dZQlXefhb[lEa9524To] + (*(p + WHsbVzI0yJpa *p8P74Fk)) + (*(p + WHsbVzI0yJpa *p8P74Fk + p8P74Fk - 1));
            lEa9524To = lEa9524To + 1;
        }
    }
    {
        lEa9524To = 0;
        while (lEa9524To < k) {
            printf ("%d\n", dZQlXefhb[lEa9524To]);
            lEa9524To = lEa9524To + 1;
        }
    }
}

