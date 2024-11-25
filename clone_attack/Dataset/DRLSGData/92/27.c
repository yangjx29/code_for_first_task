void  sort (int *a, int n) {
    int KTdN0l, j, temp;
    for (j = (86 - 85); n - (645 - 644) >= j; j = j + (268 - 267)) {
        KTdN0l = (909 - 909);
        while (KTdN0l < n - j) {
            if (*(a + KTdN0l) < *(a + KTdN0l +(395 - 394))) {
                temp = *(a + KTdN0l +(660 - 659));
                *(a + KTdN0l +(151 - 150)) = *(a + KTdN0l);
                *(a + KTdN0l) = temp;
            }
            KTdN0l = KTdN0l +(571 - 570);
        };
    };
}

void  main () {
    int *tj, *Tj7h25;
    int n, KTdN0l, LdUthPrnsRL = (593 - 593), lose = (203 - 203), ywXHqygE2, bqw, etj, eqw;
    for (; (307 - 306);) {
        scanf ("%d", &n);
        if (!((387 - 387) != n))
            break;
        else {
            tj = (int *) malloc (n * sizeof (int));
            ywXHqygE2 = bqw = (783 - 783);
            Tj7h25 = (int *) malloc (n * sizeof (int));
            {
                KTdN0l = (90 - 90);
                for (; KTdN0l < n;) {
                    scanf ("%d", tj + KTdN0l);
                    KTdN0l = KTdN0l +(405 - 404);
                };
            }
            {
                KTdN0l = (332 - 332);
                while (n > KTdN0l) {
                    scanf ("%d", Tj7h25 +KTdN0l);
                    KTdN0l = KTdN0l +(287 - 286);
                };
            }
            sort (tj, n);
            sort (Tj7h25, n);
            etj = eqw = n - (718 - 717);
            for (; ywXHqygE2 <= etj;) {
                if (*(Tj7h25 +bqw) < *(tj + ywXHqygE2)) {
                    bqw = bqw + (383 - 382);
                    LdUthPrnsRL = LdUthPrnsRL +(136 - 135);
                    ywXHqygE2++;
                    continue;
                }
                if (*(tj + etj) > *(Tj7h25 +eqw)) {
                    eqw = eqw - (18 - 17);
                    etj = etj - (863 - 862);
                    LdUthPrnsRL = LdUthPrnsRL +(762 - 761);
                    continue;
                }
                if (*(tj + ywXHqygE2) <= *(Tj7h25 +bqw)) {
                    if (*(tj + etj) < *(Tj7h25 +bqw))
                        lose = lose + 1;
                    etj--;
                    bqw = bqw + 1;
                    continue;
                };
            }
            printf ("%d\n", LdUthPrnsRL *(710 - 510) - lose * (241 - 41));
            LdUthPrnsRL = lose = (406 - 406);
        };
    };
}

