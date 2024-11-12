struct   book {
    int k8FL9W6hv0u;
    struct   book *next;
};
struct   au {
    char k8FL9W6hv0u;
    int APxbphLMcs;
    struct   book *NH2ILv8hXC6;
};
void  main () {
    char APxbphLMcs [(575 - 545)];
    int Yvphoc9Q6S;
    int Y9O0HYhFA;
    int O8QG1iq;
    int k8FL9W6hv0u;
    int tHiwSouEIK [(737 - 637)] = {0};
    int btHjrZ4ulSi5;
    int PoQqu8T;
    int *NH2ILv8hXC6;
    int f0KTuh;
    int eOsjITV9 [(795 - 695)] [(1884 - 784)] = {(42 - 42)};
    scanf ("%d", &k8FL9W6hv0u);
    PoQqu8T = (593 - 593);
    {
        Y9O0HYhFA = 795 - (868 - 74);
        for (; k8FL9W6hv0u >= Y9O0HYhFA;) {
            scanf ("%d", &btHjrZ4ulSi5);
            scanf ("%s", APxbphLMcs);
            Y9O0HYhFA++;
            for (Yvphoc9Q6S = 0; APxbphLMcs[Yvphoc9Q6S] != '\0'; Yvphoc9Q6S = Yvphoc9Q6S +1) {
                tHiwSouEIK[APxbphLMcs[Yvphoc9Q6S]]++;
                eOsjITV9[APxbphLMcs[Yvphoc9Q6S]][tHiwSouEIK[APxbphLMcs[Yvphoc9Q6S]]] = btHjrZ4ulSi5;
                if (tHiwSouEIK[PoQqu8T] < tHiwSouEIK[APxbphLMcs[Yvphoc9Q6S]])
                    PoQqu8T = APxbphLMcs[Yvphoc9Q6S];
            }
        }
    }
    printf ("%c\n", (char) PoQqu8T);
    printf ("%d\n", tHiwSouEIK[PoQqu8T]);
    for (Yvphoc9Q6S = (1001 - 1000); Yvphoc9Q6S <= tHiwSouEIK[PoQqu8T]; Yvphoc9Q6S++)
        printf ("%d\n", eOsjITV9[PoQqu8T][Yvphoc9Q6S]);
}

