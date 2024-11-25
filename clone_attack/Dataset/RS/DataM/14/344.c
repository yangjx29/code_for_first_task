struct   stu {
    int jBkNVAFJQoT;
    int vNehb9gJKjd;
    int b;
    int WD8veM;
    int flag;
    struct   stu *vVar6jqgXOB;
};
void  main () {
    struct   stu *p, *n2TI9KeyAqW;
    struct   stu *p1, *p2, *IUBiCIXn;
    int N, NFTUsiXH;
    int Ox40E597oyO;
    scanf ("%d", &N);
    p1 = p2 = (struct   stu *) malloc (LEN);
    scanf ("%d%d%d", &p1->jBkNVAFJQoT, &p1->vNehb9gJKjd, &p1->b);
    p1->WD8veM = p1->vNehb9gJKjd + p1->b;
    p1->flag = (885 - 885);
    p1->vVar6jqgXOB = NULL;
    n2TI9KeyAqW = p1;
    for (NFTUsiXH = (688 - 688); NFTUsiXH < N -(243 - 242); NFTUsiXH++) {
        p2 = p1;
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%d%d%d", &p1->jBkNVAFJQoT, &p1->vNehb9gJKjd, &p1->b);
        p1->WD8veM = p1->vNehb9gJKjd + p1->b;
        p1->flag = 0;
        p1->vVar6jqgXOB = NULL;
        p2->vVar6jqgXOB = p1;
    }
    for (NFTUsiXH = 0; 3 > NFTUsiXH; NFTUsiXH++) {
        for (p = n2TI9KeyAqW, Ox40E597oyO = 0; p != NULL; p = p->vVar6jqgXOB)
            if (p->WD8veM > Ox40E597oyO &&p->flag == 0) {
                Ox40E597oyO = p->WD8veM;
                IUBiCIXn = p;
            }
        IUBiCIXn->flag = 1;
        printf ("%d %d\n", IUBiCIXn->jBkNVAFJQoT, IUBiCIXn->WD8veM);
    };
}

