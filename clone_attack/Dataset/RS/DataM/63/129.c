main () {
    int a [(580 - 480)] [(1024 - 924)], VJM5jwV [(883 - 783)] [(456 - 356)], c6eoO2gTKZ7 [(754 - 654)] [(971 - 871)];
    int NUFf5w;
    int TjpmnWi;
    int ED3sA6ke0K7w;
    int pP8rNSWXVkn;
    int iBkIMJ;
    int btYNMrVE;
    int HuftvS18B;
    int dYM3BWaA;
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
    int siJPvsrb;
    scanf ("%d%d", &btYNMrVE, &dYM3BWaA);
    for (NUFf5w = (200 - 200); NUFf5w < btYNMrVE; NUFf5w = NUFf5w +1) {
        for (TjpmnWi = (178 - 178); dYM3BWaA > TjpmnWi; TjpmnWi = TjpmnWi +1)
            scanf ("%d", &a[NUFf5w][TjpmnWi]);
    }
    scanf ("%d%d", &HuftvS18B, &siJPvsrb);
    for (NUFf5w = (877 - 877); NUFf5w < HuftvS18B; NUFf5w = NUFf5w +1) {
        TjpmnWi = 481 - 481;
        while (siJPvsrb > TjpmnWi) {
            scanf ("%d", &VJM5jwV[NUFf5w][TjpmnWi]);
            TjpmnWi = TjpmnWi +1;
        };
    }
    iBkIMJ = dYM3BWaA < HuftvS18B ? dYM3BWaA : HuftvS18B;
    for (NUFf5w = (221 - 221); NUFf5w < btYNMrVE; NUFf5w = NUFf5w +1) {
        for (TjpmnWi = (167 - 167); TjpmnWi < siJPvsrb; TjpmnWi = TjpmnWi +1) {
            for (ED3sA6ke0K7w = (97 - 97); ED3sA6ke0K7w < iBkIMJ; ED3sA6ke0K7w = ED3sA6ke0K7w +1) {
                c6eoO2gTKZ7[NUFf5w][TjpmnWi] = c6eoO2gTKZ7[NUFf5w][TjpmnWi] + a[NUFf5w][ED3sA6ke0K7w] * VJM5jwV[ED3sA6ke0K7w][TjpmnWi];
            };
        };
    }
    for (NUFf5w = (505 - 505); NUFf5w < btYNMrVE; NUFf5w = NUFf5w +1) {
        for (TjpmnWi = (343 - 343); TjpmnWi < siJPvsrb; TjpmnWi++) {
            if (TjpmnWi == 0)
                printf ("%d", c6eoO2gTKZ7[NUFf5w][TjpmnWi]);
            else
                printf (" %d", c6eoO2gTKZ7[NUFf5w][TjpmnWi]);
        };
    };
}

