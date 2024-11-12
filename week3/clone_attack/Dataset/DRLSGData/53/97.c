void  main () {
    int i, NJwGhAuF, k, oV5b2mKjf, CdLVUGg0zO;
    int c0dU5Q [300];
    int b7w6NACgpy [100] = {0};
    scanf ("%d", &oV5b2mKjf);
    for (i = 0; i < oV5b2mKjf; i++)
        scanf ("%d", &c0dU5Q[i]);
    CdLVUGg0zO = 0;
    k = 0;
    for (i = oV5b2mKjf - 1; 0 <= i; i--)
        for (NJwGhAuF = 0; NJwGhAuF < i; NJwGhAuF++)
            if (!(c0dU5Q[NJwGhAuF] != c0dU5Q[i]) && i != NJwGhAuF)
                b7w6NACgpy[i]++;
    for (i = 0; i < oV5b2mKjf; i++)
        if (!(0 != b7w6NACgpy[i]))
            k++;
    for (NJwGhAuF = 0; oV5b2mKjf > NJwGhAuF; NJwGhAuF++) {
        if (b7w6NACgpy[NJwGhAuF] == 0) {
            printf ("%d", c0dU5Q[NJwGhAuF]);
            CdLVUGg0zO++;
            if (CdLVUGg0zO < k)
                ;
        }
    }
}

