struct   student {
    int num;
    int G9fcX7qZ;
    int m;
    int No8zhkJC;
    struct   student *Zh0IKAsM;
};
void  main () {
    struct   student *gpRGoxQd2N, *p0, *p, *q;
    int n;
    int bwySt7j4;
    int j;
    gpRGoxQd2N = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d", &n);
    gpRGoxQd2N->Zh0IKAsM = NULL;
    for (bwySt7j4 = 0; n > bwySt7j4; bwySt7j4++) {
        p0 = gpRGoxQd2N;
        q = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d %d %d", &q->num, &q->G9fcX7qZ, &q->m);
        q->No8zhkJC = q->G9fcX7qZ + q->m;
        q->Zh0IKAsM = NULL;
        p = p0->Zh0IKAsM;
        j = 0;
        for (; p != NULL &&q->No8zhkJC <= p->No8zhkJC;) {
            j++;
            if (3 < j)
                goto A;
            p0 = p;
            p = p->Zh0IKAsM;
        }
        p0->Zh0IKAsM = q;
        q->Zh0IKAsM = p;
    A :
        continue;
    }
    p = gpRGoxQd2N->Zh0IKAsM;
    {
        bwySt7j4 = 0;
        while (bwySt7j4 < 3) {
            bwySt7j4++;
            printf ("%d %d\n", p->num, p->No8zhkJC);
            p = p->Zh0IKAsM;
        };
    };
}

