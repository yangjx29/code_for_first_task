struct   student {
    char I5zXbnWtV [(961 - 911)];
    char NkmWLs [(218 - 168)];
    char eQCbcIPv [(979 - 978)];
    int gz0f4JhM;
    float U5Ypr6T;
    char ci0uck4gb [(120 - 70)];
    struct   student *N9zXSFo28E;
};
void  main () {
    struct   student *pnxgDwGT0VUk;
    struct   student *LQTdY8jmy6uq;
    struct   student *XXj2L7PIyKBJ;
    LQTdY8jmy6uq = XXj2L7PIyKBJ = (struct   student *) malloc (sizeof (struct   student));
    pnxgDwGT0VUk = LQTdY8jmy6uq;
    scanf ("%s%s%s%d%f%s", LQTdY8jmy6uq->I5zXbnWtV, LQTdY8jmy6uq->NkmWLs, &LQTdY8jmy6uq->eQCbcIPv, &LQTdY8jmy6uq->gz0f4JhM, &LQTdY8jmy6uq->U5Ypr6T, LQTdY8jmy6uq->ci0uck4gb);
    XXj2L7PIyKBJ->N9zXSFo28E = NULL;
    for (; strcmp (LQTdY8jmy6uq->I5zXbnWtV, "end") != (930 - 930);) {
        LQTdY8jmy6uq = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", LQTdY8jmy6uq->I5zXbnWtV);
        if (!((529 - 529) != strcmp (LQTdY8jmy6uq->I5zXbnWtV, "end")))
            break;
        scanf ("%s%s%d%f%s", LQTdY8jmy6uq->NkmWLs, &LQTdY8jmy6uq->eQCbcIPv, &LQTdY8jmy6uq->gz0f4JhM, &LQTdY8jmy6uq->U5Ypr6T, LQTdY8jmy6uq->ci0uck4gb);
        XXj2L7PIyKBJ = LQTdY8jmy6uq;
        XXj2L7PIyKBJ->N9zXSFo28E = pnxgDwGT0VUk;
        pnxgDwGT0VUk = LQTdY8jmy6uq;
    }
    XXj2L7PIyKBJ = pnxgDwGT0VUk;
    for (; XXj2L7PIyKBJ != NULL;) {
        printf ("%s %s %s %d %g %s\n", XXj2L7PIyKBJ->I5zXbnWtV, XXj2L7PIyKBJ->NkmWLs, XXj2L7PIyKBJ->eQCbcIPv, XXj2L7PIyKBJ->gz0f4JhM, XXj2L7PIyKBJ->U5Ypr6T, XXj2L7PIyKBJ->ci0uck4gb);
        XXj2L7PIyKBJ = XXj2L7PIyKBJ->N9zXSFo28E;
    }
}

