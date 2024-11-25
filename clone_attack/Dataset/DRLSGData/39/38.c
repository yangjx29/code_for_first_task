struct   student {
    char AxengDAqO [50];
    int K394GjMf;
    int rpG1FkzqjT;
    char ayWJnOmlx;
    char Xlfi3D;
    int p8jifeC3a;
    int idvxAci;
    struct   student *NTk9KHm1bO;
};
void  main () {
    int lua153pDv, pplaMHy0A, sum = 0;
    struct   student *muvEZoRfOlq4, *ghTSEXl4V, *bJCzZyslS0;
    scanf ("%d", &lua153pDv);
    muvEZoRfOlq4 = (struct   student *) malloc (sizeof (struct   student));
    muvEZoRfOlq4->NTk9KHm1bO = NULL;
    ghTSEXl4V = muvEZoRfOlq4;
    {
        pplaMHy0A = 0;
        for (; lua153pDv > pplaMHy0A;) {
            pplaMHy0A = pplaMHy0A + 1;
            bJCzZyslS0 = (struct   student *) malloc (sizeof (struct   student));
            bJCzZyslS0->NTk9KHm1bO = NULL;
            scanf ("%s %d %d %c %c %d", bJCzZyslS0->AxengDAqO, &bJCzZyslS0->K394GjMf, &bJCzZyslS0->rpG1FkzqjT, &bJCzZyslS0->ayWJnOmlx, &bJCzZyslS0->Xlfi3D, &bJCzZyslS0->p8jifeC3a);
            bJCzZyslS0->idvxAci = 0;
            if (bJCzZyslS0->K394GjMf > 80 && bJCzZyslS0->p8jifeC3a > 0)
                bJCzZyslS0->idvxAci = bJCzZyslS0->idvxAci + 8000;
            if (bJCzZyslS0->K394GjMf > 85 && bJCzZyslS0->rpG1FkzqjT > 80)
                bJCzZyslS0->idvxAci = bJCzZyslS0->idvxAci + 4000;
            if (bJCzZyslS0->K394GjMf > 90)
                bJCzZyslS0->idvxAci = bJCzZyslS0->idvxAci + 2000;
            if (bJCzZyslS0->K394GjMf > 85 && bJCzZyslS0->Xlfi3D == 'Y')
                bJCzZyslS0->idvxAci = bJCzZyslS0->idvxAci + 1000;
            if (bJCzZyslS0->rpG1FkzqjT > 80 && bJCzZyslS0->ayWJnOmlx == 'Y')
                bJCzZyslS0->idvxAci = bJCzZyslS0->idvxAci + 850;
            sum = sum + bJCzZyslS0->idvxAci;
            ghTSEXl4V->NTk9KHm1bO = bJCzZyslS0;
            ghTSEXl4V = bJCzZyslS0;
        }
    }
    ghTSEXl4V = muvEZoRfOlq4->NTk9KHm1bO;
    bJCzZyslS0 = ghTSEXl4V->NTk9KHm1bO;
    for (; bJCzZyslS0 != NULL;) {
        if (ghTSEXl4V->idvxAci < bJCzZyslS0->idvxAci)
            muvEZoRfOlq4->NTk9KHm1bO = bJCzZyslS0;
        bJCzZyslS0 = bJCzZyslS0->NTk9KHm1bO;
        ghTSEXl4V = muvEZoRfOlq4->NTk9KHm1bO;
    }
    ghTSEXl4V = muvEZoRfOlq4->NTk9KHm1bO;
    printf ("%s\n", ghTSEXl4V->AxengDAqO);
    printf ("%d\n", ghTSEXl4V->idvxAci);
    printf ("%d\n", sum);
}

