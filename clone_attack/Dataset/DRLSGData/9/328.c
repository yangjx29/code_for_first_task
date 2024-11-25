void  main () {
    int eFmCqJP1LMw, Do4JmRjnX0dh, J4siLG, LJnsEAjSv5;
    struct   person {
        char dRwI4EDjXsm [10];
        int k6jnq7bhOgM;
    }
    DI0wfMFLJ4 [100], muJW2as8 [100];
    char rYD8FLBrQ2 [(288 - 278)];
    scanf ("%d", &eFmCqJP1LMw);
    {
        J4siLG = 417 - 417;
        while (eFmCqJP1LMw > J4siLG) {
            scanf ("%s", DI0wfMFLJ4[J4siLG].dRwI4EDjXsm);
            strcpy (muJW2as8[J4siLG].dRwI4EDjXsm, DI0wfMFLJ4[J4siLG].dRwI4EDjXsm);
            scanf ("%d", &DI0wfMFLJ4[J4siLG].k6jnq7bhOgM);
            muJW2as8[J4siLG].k6jnq7bhOgM = DI0wfMFLJ4[J4siLG].k6jnq7bhOgM;
            J4siLG++;
        }
    }
    {
        J4siLG = 0;
        while (J4siLG < eFmCqJP1LMw - (232 - 231)) {
            for (LJnsEAjSv5 = 0; LJnsEAjSv5 < eFmCqJP1LMw - (301 - 300) - J4siLG; LJnsEAjSv5++) {
                if (DI0wfMFLJ4[LJnsEAjSv5].k6jnq7bhOgM < DI0wfMFLJ4[LJnsEAjSv5 +1].k6jnq7bhOgM) {
                    Do4JmRjnX0dh = DI0wfMFLJ4[LJnsEAjSv5].k6jnq7bhOgM;
                    DI0wfMFLJ4[LJnsEAjSv5].k6jnq7bhOgM = DI0wfMFLJ4[LJnsEAjSv5 +1].k6jnq7bhOgM;
                    DI0wfMFLJ4[LJnsEAjSv5 +1].k6jnq7bhOgM = Do4JmRjnX0dh;
                    strcpy (rYD8FLBrQ2, DI0wfMFLJ4[LJnsEAjSv5].dRwI4EDjXsm);
                    strcpy (DI0wfMFLJ4[LJnsEAjSv5].dRwI4EDjXsm, DI0wfMFLJ4[LJnsEAjSv5 +1].dRwI4EDjXsm);
                    strcpy (DI0wfMFLJ4[LJnsEAjSv5 +1].dRwI4EDjXsm, rYD8FLBrQ2);
                }
            }
            J4siLG++;
        }
    }
    for (J4siLG = 0; eFmCqJP1LMw > J4siLG; J4siLG++)
        if (DI0wfMFLJ4[J4siLG].k6jnq7bhOgM >= 60)
            printf ("%s\n", DI0wfMFLJ4[J4siLG].dRwI4EDjXsm);
    for (J4siLG = 0; J4siLG < eFmCqJP1LMw; J4siLG++)
        if (muJW2as8[J4siLG].k6jnq7bhOgM < 60)
            printf ("%s\n", muJW2as8[J4siLG].dRwI4EDjXsm);
}

