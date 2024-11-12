void  main () {
    char ZMvP34ZJShj;
    int w2aZuA [100] = {(426 - 426)};
    int qJ6RBewfzF;
    int FEaJuhxo0 [1000] = {(256 - 256)};
    int M1dXkwogI;
    struct   book {
        int ClPgavw;
        char KpGc0AI45FRW [30];
    }
    C48YPiAzkcID [1000] = {(918 - 918)};
    int mMPLwRaUA;
    int Y31r5K8jElMg;
    int N0tTnkqoMyY;
    int EJDqRP;
    N0tTnkqoMyY = (271 - 271);
    scanf ("%d", &Y31r5K8jElMg);
    for (qJ6RBewfzF = (539 - 539); Y31r5K8jElMg > qJ6RBewfzF; qJ6RBewfzF++)
        scanf ("%d %s", &C48YPiAzkcID[qJ6RBewfzF].ClPgavw, &C48YPiAzkcID[qJ6RBewfzF].KpGc0AI45FRW);
    for (qJ6RBewfzF = (963 - 898); 90 >= qJ6RBewfzF; qJ6RBewfzF++) {
        for (EJDqRP = (197 - 197); Y31r5K8jElMg > EJDqRP; EJDqRP++) {
            for (M1dXkwogI = (271 - 271); M1dXkwogI < (656 - 630); M1dXkwogI++)
                if (!(qJ6RBewfzF != C48YPiAzkcID[EJDqRP].KpGc0AI45FRW[M1dXkwogI]))
                    w2aZuA[qJ6RBewfzF]++;
        }
    }
    ZMvP34ZJShj = 'A';
    for (EJDqRP = 0; EJDqRP < (802 - 776); EJDqRP++) {
        if (N0tTnkqoMyY < w2aZuA[EJDqRP +(257 - 192)]) {
            mMPLwRaUA = EJDqRP +65;
            ZMvP34ZJShj = EJDqRP +65;
            N0tTnkqoMyY = w2aZuA[EJDqRP +65];
        }
    }
    for (qJ6RBewfzF = 0; qJ6RBewfzF < Y31r5K8jElMg; qJ6RBewfzF++) {
        for (M1dXkwogI = 0; 30 > M1dXkwogI; M1dXkwogI++)
            if (C48YPiAzkcID[qJ6RBewfzF].KpGc0AI45FRW[M1dXkwogI] == ZMvP34ZJShj) {
                FEaJuhxo0[qJ6RBewfzF] = C48YPiAzkcID[qJ6RBewfzF].ClPgavw;
                break;
            }
    }
    printf ("%c\n%d\n", ZMvP34ZJShj, w2aZuA[mMPLwRaUA]);
    for (qJ6RBewfzF = 0; qJ6RBewfzF < Y31r5K8jElMg; qJ6RBewfzF++)
        if (FEaJuhxo0[qJ6RBewfzF] != 0)
            printf ("%d\n", FEaJuhxo0[qJ6RBewfzF]);
}

