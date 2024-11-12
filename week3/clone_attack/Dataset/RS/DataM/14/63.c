struct   student {
    int D28BfVX3SK;
    int yu;
    int shu;
    struct   student *next;
};
void  main () {
    int cjdUtLyXTrNl;
    int S07fLl;
    int trJfnkow;
    int k;
    struct   student *YFhfG1qcOva;
    struct   student *y1QiBc;
    struct   student *z4yBlF1;
    YFhfG1qcOva = y1QiBc = z4yBlF1 = (struct   student *) malloc (LEN);
    scanf ("%d", &cjdUtLyXTrNl);
    scanf ("%d %d %d", &y1QiBc->D28BfVX3SK, &y1QiBc->yu, &y1QiBc->shu);
    {
        S07fLl = 1;
        while (S07fLl < cjdUtLyXTrNl) {
            S07fLl = S07fLl +1;
            y1QiBc = (struct   student *) malloc (LEN);
            scanf ("%d %d %d", &y1QiBc->D28BfVX3SK, &y1QiBc->yu, &y1QiBc->shu);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            z4yBlF1->next = y1QiBc;
            z4yBlF1 = y1QiBc;
        };
    }
    z4yBlF1->next = NULL;
    for (S07fLl = 1; (800 - 797) >= S07fLl; S07fLl++) {
        y1QiBc = z4yBlF1 = YFhfG1qcOva;
        while (y1QiBc != NULL) {
            if (y1QiBc->yu + y1QiBc->shu > z4yBlF1->yu + z4yBlF1->shu)
                z4yBlF1 = y1QiBc;
            y1QiBc = y1QiBc->next;
        }
        printf ("%d %d\n", z4yBlF1->D28BfVX3SK, z4yBlF1->yu + z4yBlF1->shu);
        z4yBlF1->yu = 0;
        z4yBlF1->shu = 0;
    };
}

