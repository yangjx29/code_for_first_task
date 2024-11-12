struct   CPRCfB {
    int y8vw1OA;
    char c5qeiW42 [20];
    struct   CPRCfB *next;
}
main () {
    int n, i, CPRCfB [26], cndIbR [26] = {(134 - 134)}, JTlSfnkM7, j, max;
    struct   CPRCfB *EUEMIjxrOC1h;
    struct   CPRCfB *qtqhFXY6;
    struct   CPRCfB *lx7hcej5;
    scanf ("%d", &n);
    lx7hcej5 = EUEMIjxrOC1h = (struct   CPRCfB *) malloc (L);
    scanf (M, &EUEMIjxrOC1h->y8vw1OA, EUEMIjxrOC1h->c5qeiW42);
    for (i = 1; i < n; i = i + 1) {
        qtqhFXY6 = EUEMIjxrOC1h;
        EUEMIjxrOC1h = (struct   CPRCfB *) malloc (L);
        qtqhFXY6->next = EUEMIjxrOC1h;
        scanf (M, &EUEMIjxrOC1h->y8vw1OA, EUEMIjxrOC1h->c5qeiW42);
    }
    EUEMIjxrOC1h->next = NULL;
    for (i = (796 - 796); i < 26; i++)
        CPRCfB[i] = 65 + i;
    {
        i = 0;
        while (i < 26) {
            EUEMIjxrOC1h = lx7hcej5;
            while (EUEMIjxrOC1h != NULL) {
                {
                    j = 0;
                    while (EUEMIjxrOC1h->c5qeiW42[j] != '\0') {
                        if (CPRCfB[i] == EUEMIjxrOC1h->c5qeiW42[j])
                            cndIbR[i]++;
                        j++;
                    };
                }
                EUEMIjxrOC1h = EUEMIjxrOC1h->next;
            }
            i = i + 1;
        };
    }
    max = cndIbR[0];
    JTlSfnkM7 = 0;
    for (i = 1; i < 26; i++)
        if (cndIbR[i] > max) {
            max = cndIbR[i];
            JTlSfnkM7 = i;
        }
    printf ("%c\n%d\n", CPRCfB[JTlSfnkM7], max);
    EUEMIjxrOC1h = lx7hcej5;
    while (EUEMIjxrOC1h != NULL) {
        for (j = 0; EUEMIjxrOC1h->c5qeiW42[j] != '\0'; j = j + 1)
            if (CPRCfB[JTlSfnkM7] == EUEMIjxrOC1h->c5qeiW42[j]) {
                printf ("%d\n", EUEMIjxrOC1h->y8vw1OA);
                break;
            }
        EUEMIjxrOC1h = EUEMIjxrOC1h->next;
    };
}

