void  main () {
    int PptIWUeG1Z8s;
    int lunGZRhCvHk;
    int Lc6WLtw1bI;
    int syCMFbZB2;
    int i;
    int acl4EKZGXtyM [302];
    int TT9nZXzi [301];
    scanf ("%d", &Lc6WLtw1bI);
    for (i = 1; i <= Lc6WLtw1bI; i++)
        scanf ("%d", &TT9nZXzi[i]);
    lunGZRhCvHk = 0;
    for (i = 0; i <= Lc6WLtw1bI; i++) {
        PptIWUeG1Z8s = 1;
        for (syCMFbZB2 = 0; i > syCMFbZB2; syCMFbZB2++) {
            if (TT9nZXzi[i] == TT9nZXzi[syCMFbZB2])
                PptIWUeG1Z8s = 0;
        }
        if (PptIWUeG1Z8s) {
            lunGZRhCvHk = lunGZRhCvHk + 1;
            acl4EKZGXtyM[lunGZRhCvHk] = TT9nZXzi[i];
        }
    }
    for (i = 2; i <= lunGZRhCvHk; i++) {
        printf ("%d", acl4EKZGXtyM[i]);
        if (i != lunGZRhCvHk)
            ;
    }
}

