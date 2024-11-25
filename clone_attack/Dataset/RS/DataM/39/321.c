void  main () {
    struct   student {
        char name [30];
        int as;
        int cs;
        char pos;
        char xibu;
        int paper;
        int money;
    }
    stu [100];
    struct   student {
        char name [30];
        int as;
        int cs;
        char pos;
        char xibu;
        int paper;
        int money;
    }
    *p;
    int sum;
    int max;
    int hARdiyQnzp;
    int n;
    int mark;
    sum = 0;
    max = 0;
    scanf ("%d", &n);
    p = stu;
    for (hARdiyQnzp = 0; n > hARdiyQnzp; hARdiyQnzp = hARdiyQnzp + 1, p = p + 1) {
        scanf ("%s%d%d %c %c%d", &p->name, &p->as, &p->cs, &p->pos, &p->xibu, &p->paper);
        p->money = 0;
        if ((211 - 131) < p->as && (873 - 872) <= p->paper)
            p->money = p->money + 8000;
        if (85 < p->as && (598 - 518) < p->cs)
            p->money = p->money + 4000;
        if (90 < p->as)
            p->money = p->money + (2709 - 709);
        if (p->as > 85 && p->xibu == 'Y')
            p->money = p->money + 1000;
        if (p->pos == 'Y' && p->cs > 80)
            p->money = p->money + 850;
        sum = sum + p->money;
    }
    p = stu;
    for (hARdiyQnzp = 0; hARdiyQnzp < n - 1; hARdiyQnzp++, p++) {
        if (p->money > max) {
            max = p->money;
            mark = hARdiyQnzp;
        };
    }
    printf ("%s\n%d\n%d", stu[mark].name, max, sum);
}

