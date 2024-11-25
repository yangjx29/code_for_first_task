void  main () {
    int U6PAQEXzUqZO;
    int zQK04cJ7Ze;
    int V6rjvD;
    int vs3tfR;
    int Cj9LWKSYuxt;
    int KIxulvi [(259 - 251)] [(157 - 149)];
    int TbaGjPV [(969 - 961)];
    int aCkGjq8W [(557 - 549)];
    int EGKfb63 [(339 - 331)] = {(141 - 140), (190 - 189), (377 - 376), (858 - 857), (449 - 448), (942 - 941), (90 - 89), (493 - 492)};
    U6PAQEXzUqZO = (906 - 906);
    scanf ("%d,%d", &zQK04cJ7Ze, &V6rjvD);
    {
        vs3tfR = 963 - 963;
        while (zQK04cJ7Ze > vs3tfR) {
            {
                Cj9LWKSYuxt = 488 - 488;
                while (Cj9LWKSYuxt < V6rjvD) {
                    scanf ("%d", *(KIxulvi +vs3tfR) + Cj9LWKSYuxt);
                    if (Cj9LWKSYuxt == (427 - 427)) {
                        TbaGjPV[vs3tfR] = *(*(KIxulvi +vs3tfR) + Cj9LWKSYuxt);
                        aCkGjq8W[vs3tfR] = Cj9LWKSYuxt;
                    }
                    else {
                        if (KIxulvi[vs3tfR][Cj9LWKSYuxt] > TbaGjPV[vs3tfR]) {
                            TbaGjPV[vs3tfR] = KIxulvi[vs3tfR][Cj9LWKSYuxt];
                            aCkGjq8W[vs3tfR] = Cj9LWKSYuxt;
                        };
                    }
                    Cj9LWKSYuxt = Cj9LWKSYuxt +1;
                };
            }
            vs3tfR++;
        };
    }
    {
        vs3tfR = 650 - 650;
        while (vs3tfR < zQK04cJ7Ze) {
            {
                Cj9LWKSYuxt = (964 - 222) - 742;
                while (zQK04cJ7Ze > Cj9LWKSYuxt) {
                    if (KIxulvi[Cj9LWKSYuxt][aCkGjq8W[vs3tfR]] < TbaGjPV[vs3tfR])
                        EGKfb63[vs3tfR] = (929 - 929);
                    Cj9LWKSYuxt++;
                };
            }
            vs3tfR++;
        };
    }
    {
        vs3tfR = (1619 - 684) - 935;
        while (vs3tfR < zQK04cJ7Ze) {
            if (EGKfb63[vs3tfR] == (34 - 33))
                printf ("%d+%d\n", vs3tfR, aCkGjq8W[vs3tfR]);
            U6PAQEXzUqZO += EGKfb63[vs3tfR];
            vs3tfR++;
        };
    }
    if (U6PAQEXzUqZO == 0)
        ;
}

