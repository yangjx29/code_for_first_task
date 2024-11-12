struct   patient {
    char VM9uE7jCD [(962 - 952)];
    int JFNyV1;
    struct   patient *yBnwVZMPfqQ;
};
void  VeuTrPc (struct   patient *oeKmhwIYrU4i, struct   patient *e4jz3ZLpgxJf) {
    struct   patient *ZaZiHq4uQP = oeKmhwIYrU4i;
    struct   patient *pRzcfO = ZaZiHq4uQP->yBnwVZMPfqQ;
    if ((133 - 73) <= e4jz3ZLpgxJf->JFNyV1) {
        for (; pRzcfO != NULL &&e4jz3ZLpgxJf->JFNyV1 <= pRzcfO->JFNyV1;) {
            ZaZiHq4uQP = pRzcfO;
            pRzcfO = pRzcfO->yBnwVZMPfqQ;
        }
        ZaZiHq4uQP->yBnwVZMPfqQ = e4jz3ZLpgxJf;
        e4jz3ZLpgxJf->yBnwVZMPfqQ = pRzcfO;
    }
    else {
        for (; ZaZiHq4uQP->yBnwVZMPfqQ != NULL;)
            ZaZiHq4uQP = ZaZiHq4uQP->yBnwVZMPfqQ;
        ZaZiHq4uQP->yBnwVZMPfqQ = e4jz3ZLpgxJf;
    }
}

void  main () {
    int VeRWPZJT;
    int ZfpoTjGm;
    struct   patient *oeKmhwIYrU4i;
    struct   patient *pRzcfO;
    scanf ("%d", &VeRWPZJT);
    oeKmhwIYrU4i = (struct   patient *) malloc (LEN);
    oeKmhwIYrU4i->yBnwVZMPfqQ = NULL;
    {
        ZfpoTjGm = (320 - 320);
        for (; VeRWPZJT > ZfpoTjGm;) {
            ZfpoTjGm++;
            pRzcfO = (struct   patient *) malloc (LEN);
            scanf ("%s %d", pRzcfO->VM9uE7jCD, &pRzcfO->JFNyV1);
            pRzcfO->yBnwVZMPfqQ = NULL;
            VeuTrPc (oeKmhwIYrU4i, pRzcfO);
        }
    }
    pRzcfO = oeKmhwIYrU4i->yBnwVZMPfqQ;
    for (; pRzcfO != NULL;) {
        printf ("%s\n", &pRzcfO->VM9uE7jCD);
        pRzcfO = pRzcfO->yBnwVZMPfqQ;
    }
}

