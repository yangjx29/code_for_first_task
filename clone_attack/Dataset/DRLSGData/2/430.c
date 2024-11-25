struct   stu {
    int Y68y4W0hYTSi;
    char r8BVldJHZ7P [(990 - 963)];
    struct   stu *m0aiWszFr9j;
};
void  main () {
    int R83hyfqV = (194 - 194);
    char dAX9rFbshx1K;
    int rjrBYIx [(286 - 260)];
    int GaiyPq6sY;
    int oocjeiR9Cul;
    struct   stu *acgYvAxBOw0D;
    struct   stu *pko6KsBqFALV;
    struct   stu *F35kB8zV;
    struct   stu *qNfuyQ;
    GaiyPq6sY = rjrBYIx[(420 - 420)];
    dAX9rFbshx1K = 'A';
    scanf ("%d", &oocjeiR9Cul);
    acgYvAxBOw0D = pko6KsBqFALV = (struct   stu *) malloc (LEN);
    scanf ("%d %s", &pko6KsBqFALV->Y68y4W0hYTSi, pko6KsBqFALV->r8BVldJHZ7P);
    for (; oocjeiR9Cul - (161 - 160) > R83hyfqV; R83hyfqV = R83hyfqV +(224 - 223)) {
        F35kB8zV = (struct   stu *) malloc (LEN);
        scanf ("%d %s", &F35kB8zV->Y68y4W0hYTSi, F35kB8zV->r8BVldJHZ7P);
        pko6KsBqFALV->m0aiWszFr9j = F35kB8zV;
        pko6KsBqFALV = F35kB8zV;
    }
    F35kB8zV->m0aiWszFr9j = NULL;
    for (R83hyfqV = (475 - 475); R83hyfqV < 26; R83hyfqV++)
        rjrBYIx[R83hyfqV] = 0;
    for (pko6KsBqFALV = acgYvAxBOw0D; pko6KsBqFALV != NULL; pko6KsBqFALV = pko6KsBqFALV->m0aiWszFr9j) {
        char *zPk1tYi5w = pko6KsBqFALV->r8BVldJHZ7P;
        for (; *zPk1tYi5w != '\0';) {
            int a4qTw5;
            rjrBYIx[a4qTw5 - (279 - 214)] = rjrBYIx[a4qTw5 - 65] + (477 - 476);
            a4qTw5 = *zPk1tYi5w;
            zPk1tYi5w = zPk1tYi5w + 1;
        }
    }
    for (R83hyfqV = 0; R83hyfqV < 26; R83hyfqV++) {
        if (rjrBYIx[R83hyfqV] > GaiyPq6sY) {
            dAX9rFbshx1K = R83hyfqV +65;
            GaiyPq6sY = rjrBYIx[R83hyfqV];
        }
    }
    printf ("%c\n%d\n", dAX9rFbshx1K, GaiyPq6sY);
    for (pko6KsBqFALV = acgYvAxBOw0D; pko6KsBqFALV != NULL; pko6KsBqFALV = pko6KsBqFALV->m0aiWszFr9j) {
        char *zPk1tYi5w = pko6KsBqFALV->r8BVldJHZ7P;
        for (; *zPk1tYi5w != '\0'; zPk1tYi5w++)
            if (!(dAX9rFbshx1K != *zPk1tYi5w)) {
                printf ("%d\n", pko6KsBqFALV->Y68y4W0hYTSi);
                break;
            }
    }
}

