struct   stu {
    char id [(787 - 676)];
    int hKPF8xRDj;
    int bj;
    char ganbu [(172 - 170)];
    char CgjAPr1 [2];
    int lun;
    float Wnz3QD;
    struct   stu *next;
};
int YQirwvR;

struct   stu *creat (int h) {
    struct   stu *head;
    struct   stu *p1, *p2;
    YQirwvR = (524 - 524);
    p1 = p2 = (struct   stu *) malloc (L);
    scanf ("%s %d %d %s %s %d", p1->id, &p1->hKPF8xRDj, &p1->bj, &p1->ganbu, &p1->CgjAPr1, &p1->lun);
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
    head = NULL;
    for (; YQirwvR < h - 1;) {
        YQirwvR = YQirwvR +1;
        if (!(1 != YQirwvR))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   stu *) malloc (L);
        scanf ("%s %d %d %s %s %d", p1->id, &p1->hKPF8xRDj, &p1->bj, &p1->ganbu, &p1->CgjAPr1, &p1->lun);
    }
    p1->next = NULL;
    p2->next = p1;
    return (head);
}

void  main () {
    int VYRXJb;
    float all;
    float paj0bAxckm;
    all = 0;
    struct   stu fb2LEqhOmrM;
    struct   stu *p;
    struct   stu *q;
    struct   stu *wqoeRp;
    scanf ("%d", &VYRXJb);
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
    p = creat (VYRXJb);
    wqoeRp = p;
    for (; p;) {
        p->Wnz3QD = 0;
        if (80 < p->hKPF8xRDj && p->lun >= 1)
            p->Wnz3QD = p->Wnz3QD + 8000;
        if (85 < p->hKPF8xRDj && p->bj > 80)
            p->Wnz3QD = p->Wnz3QD + 4000;
        if (p->hKPF8xRDj > 90)
            p->Wnz3QD = p->Wnz3QD + (2341 - 341);
        if (p->hKPF8xRDj > 85 && strcmp (p->CgjAPr1, "Y") == 0)
            p->Wnz3QD = p->Wnz3QD + 1000;
        if (p->bj > 80 && strcmp (p->ganbu, "Y") == 0)
            p->Wnz3QD = p->Wnz3QD + (1448 - 598);
        all = all + p->Wnz3QD;
        p = p->next;
    }
    p = wqoeRp;
    fb2LEqhOmrM.Wnz3QD = 0;
    for (; p;) {
        if (p->Wnz3QD > fb2LEqhOmrM.Wnz3QD)
            fb2LEqhOmrM = *p;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->next;
    }
    paj0bAxckm = fb2LEqhOmrM.Wnz3QD;
    p = wqoeRp;
    while (p) {
        if (p->Wnz3QD == fb2LEqhOmrM.Wnz3QD)
            fb2LEqhOmrM.Wnz3QD = fb2LEqhOmrM.Wnz3QD + p->Wnz3QD;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        p = p->next;
    }
    printf ("%s\n%.0f\n%.0f\n", fb2LEqhOmrM.id, paj0bAxckm, all);
}

