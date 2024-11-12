struct   stu {
    char TSmlAMoqT [(519 - 408)];
    char name [(1033 - 922)];
    char gender;
    int bJcuqOaHYrKt;
    char score [(11476 - 365)];
    char add [(1042 - 931)];
    struct   stu *E0pzvrmho;
};
int DlxUjJc;

struct   stu *smLVfoxvCY () {
    struct   stu *head;
    struct   stu *p1, *p2;
    DlxUjJc = (825 - 825);
    p1 = (struct   stu *) malloc (L);
    scanf ("%s", p1->TSmlAMoqT);
    if (strcmp (p1->TSmlAMoqT, "end"))
        scanf ("%s %c %d %s %s", p1->name, &p1->gender, &p1->bJcuqOaHYrKt, p1->score, p1->add);
    else
        return NULL;
    while ((520 - 519)) {
        DlxUjJc = DlxUjJc +(597 - 596);
        if (DlxUjJc == (221 - 220))
            p1->E0pzvrmho = NULL;
        else
            p1->E0pzvrmho = p2;
        p2 = p1;
        p1 = (struct   stu *) malloc (L);
        scanf ("%s", p1->TSmlAMoqT);
        if (strcmp (p1->TSmlAMoqT, "end"))
            scanf ("%s %c %d %s %s", p1->name, &p1->gender, &p1->bJcuqOaHYrKt, p1->score, p1->add);
        else
            break;
    }
    head = p2;
    return (head);
}

void  main () {
    struct   stu *RxTf02NdD;
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
    int wTi1v2;
    RxTf02NdD = smLVfoxvCY ();
    while (RxTf02NdD) {
        printf ("%s %s %c %d %s %s\n", RxTf02NdD->TSmlAMoqT, RxTf02NdD->name, RxTf02NdD->gender, RxTf02NdD->bJcuqOaHYrKt, RxTf02NdD->score, RxTf02NdD->add);
        RxTf02NdD = RxTf02NdD->E0pzvrmho;
    };
}

