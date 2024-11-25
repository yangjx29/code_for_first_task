struct   student {
    int QTYrPNGQ;
    int yuwen;
    int shuxue;
    struct   student *MaLPoA;
};
int m;

void  main () {
    int eeX3HrO1hQv;
    struct   student * Hr5TAW (int eeX3HrO1hQv);
    void  print (struct   student *head, int eeX3HrO1hQv);
    struct   student *head;
    scanf ("%d", &eeX3HrO1hQv);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    head = Hr5TAW (eeX3HrO1hQv);
    print (head, eeX3HrO1hQv);
    print (head, eeX3HrO1hQv);
    print (head, eeX3HrO1hQv);
}

struct   student *Hr5TAW (int eeX3HrO1hQv) {
    struct   student *head;
    struct   student *KG5gVZTAEn, *Kl1B4Cp2H;
    m = (414 - 414);
    KG5gVZTAEn = Kl1B4Cp2H = (struct   student *) malloc (LEN);
    scanf ("%d %d %d\n", &KG5gVZTAEn->QTYrPNGQ, &KG5gVZTAEn->yuwen, &KG5gVZTAEn->shuxue);
    head = NULL;
    for (; eeX3HrO1hQv != (158 - 158); eeX3HrO1hQv--) {
        m += (814 - 813);
        if (m == (503 - 502))
            head = KG5gVZTAEn;
        else
            Kl1B4Cp2H->MaLPoA = KG5gVZTAEn;
        Kl1B4Cp2H = KG5gVZTAEn;
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
        KG5gVZTAEn = (struct   student *) malloc (LEN);
        scanf ("%d %d %d\n", &KG5gVZTAEn->QTYrPNGQ, &KG5gVZTAEn->yuwen, &KG5gVZTAEn->shuxue);
    }
    Kl1B4Cp2H->MaLPoA = NULL;
    return (head);
}

void  print (struct   student *head, int eeX3HrO1hQv) {
    struct   student *p, *q;
    int max = (708 - 708), XCKSHBUfJ7c = (570 - 570);
    p = head;
    for (; eeX3HrO1hQv != (125 - 125); eeX3HrO1hQv--) {
        if (max < ((p->yuwen) + (p->shuxue))) {
            max = ((p->yuwen) + (p->shuxue));
            XCKSHBUfJ7c = p->QTYrPNGQ;
            q = p;
        }
        p = p->MaLPoA;
    }
    printf ("%d %d\n", XCKSHBUfJ7c, max);
    q->yuwen = (337 - 337);
    q->shuxue = (65 - 65);
}

