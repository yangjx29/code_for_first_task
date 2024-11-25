struct   student {
    int DN7B4vWKr, K5kqWSYQs, i7nWvMNoPU;
    char yaUT6LsfiPQ [50], R4QzSMobxasY, b4AdiIP;
    struct   student *fEYxSmialeg;
};
int amTA52WwczO;

struct   student *nifoRKLW8U (void ) {
    struct   student *no5cSN26, *wQxKB7Pc3, *oRxhkP3GV;
    int idZ9MkK;
    int A8wm432Q7K;
    no5cSN26 = NULL;
    wQxKB7Pc3 = oRxhkP3GV = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", &wQxKB7Pc3->yaUT6LsfiPQ, &wQxKB7Pc3->K5kqWSYQs, &wQxKB7Pc3->i7nWvMNoPU, &wQxKB7Pc3->b4AdiIP, &wQxKB7Pc3->R4QzSMobxasY, &wQxKB7Pc3->DN7B4vWKr);
    idZ9MkK = 1;
    for (; 1;) {
        if (!(1 != idZ9MkK))
            no5cSN26 = wQxKB7Pc3;
        else
            oRxhkP3GV->fEYxSmialeg = wQxKB7Pc3;
        if (!(amTA52WwczO != idZ9MkK))
            break;
        idZ9MkK++;
        oRxhkP3GV = wQxKB7Pc3;
        wQxKB7Pc3 = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", &wQxKB7Pc3->yaUT6LsfiPQ, &wQxKB7Pc3->K5kqWSYQs, &wQxKB7Pc3->i7nWvMNoPU, &wQxKB7Pc3->b4AdiIP, &wQxKB7Pc3->R4QzSMobxasY, &wQxKB7Pc3->DN7B4vWKr);
    }
    oRxhkP3GV->fEYxSmialeg = NULL;
    return (no5cSN26);
}

void  main () {
    int idZ9MkK, A8wm432Q7K, *xg2msaQC9DkE, WnxKDlJ, AZKNE1;
    char (*K1eiu7) [50];
    struct   student *no5cSN26;
    struct   student *wQxKB7Pc3;
    struct   student *oRxhkP3GV;
    scanf ("%d", &amTA52WwczO);
    idZ9MkK = 0;
    A8wm432Q7K = 0;
    WnxKDlJ = 0;
    no5cSN26 = nifoRKLW8U ();
    wQxKB7Pc3 = oRxhkP3GV = no5cSN26;
    xg2msaQC9DkE = (int *) malloc (100 * sizeof (int));
    AZKNE1 = *xg2msaQC9DkE;
    K1eiu7 = (char (*) [50]) calloc (100, 50 * sizeof (char));
    for (; wQxKB7Pc3 != NULL;) {
        *(xg2msaQC9DkE + idZ9MkK) = 0;
        if (wQxKB7Pc3->K5kqWSYQs > 80 && 0 < wQxKB7Pc3->DN7B4vWKr)
            *(xg2msaQC9DkE + idZ9MkK) = *(xg2msaQC9DkE + idZ9MkK) + 8000;
        if (wQxKB7Pc3->K5kqWSYQs > 85 && 80 < wQxKB7Pc3->i7nWvMNoPU)
            *(xg2msaQC9DkE + idZ9MkK) = *(xg2msaQC9DkE + idZ9MkK) + 4000;
        if (90 < wQxKB7Pc3->K5kqWSYQs)
            *(xg2msaQC9DkE + idZ9MkK) = *(xg2msaQC9DkE + idZ9MkK) + 2000;
        if (85 < wQxKB7Pc3->K5kqWSYQs && wQxKB7Pc3->R4QzSMobxasY == 'Y')
            *(xg2msaQC9DkE + idZ9MkK) = *(xg2msaQC9DkE + idZ9MkK) + 1000;
        if (80 < wQxKB7Pc3->i7nWvMNoPU && wQxKB7Pc3->b4AdiIP == 'Y')
            *(xg2msaQC9DkE + idZ9MkK) = *(xg2msaQC9DkE + idZ9MkK) + 850;
        strcpy (*(K1eiu7 +idZ9MkK), wQxKB7Pc3->yaUT6LsfiPQ);
        wQxKB7Pc3 = wQxKB7Pc3->fEYxSmialeg;
        idZ9MkK++;
    }
    {
        idZ9MkK = 0;
        for (; amTA52WwczO > idZ9MkK;) {
            WnxKDlJ = WnxKDlJ +(*(xg2msaQC9DkE + idZ9MkK));
            idZ9MkK++;
        }
    }
    {
        idZ9MkK = 1;
        for (; amTA52WwczO > idZ9MkK;) {
            if (*(xg2msaQC9DkE + idZ9MkK) > AZKNE1) {
                AZKNE1 = *(xg2msaQC9DkE + idZ9MkK);
                A8wm432Q7K = idZ9MkK;
            }
            idZ9MkK++;
        }
    }
    printf ("%s\n", *(K1eiu7 +A8wm432Q7K));
    printf ("%d\n", AZKNE1);
    printf ("%d\n", WnxKDlJ);
}

