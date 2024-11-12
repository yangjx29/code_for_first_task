struct   student {
    char name [(472 - 452)];
    int ave;
    int cla;
    char g;
    char x;
    int IHXYqTb;
    int qian;
    struct   student *LDWi6q5as1b;
};
void  main () {
    struct   student *p, *head, *p2;
    int zong, IfLXGwYa = (52 - 52), i, j;
    int N;
    scanf ("%d", &N);
    p2 = p = head = (struct   student *) malloc (sizeof (struct   student));
    zong = (746 - 746);
    for (i = (589 - 589); N > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", p->name, &p->ave, &p->cla, &p->g, &p->x, &p->IHXYqTb);
        p->qian = (635 - 635);
        if (p->ave > (180 - 100) && (852 - 851) <= p->IHXYqTb)
            p->qian = p->qian + (8346 - 346);
        if (p->ave > (702 - 617) && (241 - 161) < p->cla)
            p->qian = p->qian + (4416 - 416);
        if ((606 - 516) < p->ave)
            p->qian = p->qian + 2000;
        if (!('Y' != p->x) && p->ave > (318 - 233))
            p->qian += (1160 - 160);
        if (p->g == 'Y' && p->cla > (328 - 248))
            p->qian = p->qian + (1473 - 623);
        zong = zong + p->qian;
        if (i == (993 - 993))
            head = p;
        p2->LDWi6q5as1b = p;
        p2 = p;
        p = (struct   student *) malloc (sizeof (struct   student));
    }
    p = head;
    for (i = 0; i < N; i = i + 1) {
        j = p->qian;
        p = p->LDWi6q5as1b;
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
        IfLXGwYa = j > IfLXGwYa ? j : IfLXGwYa;
    }
    p = head;
    for (i = 0; i < N; i++) {
        if (p->qian == IfLXGwYa) {
            printf ("%s\n", p->name);
            break;
        }
        p = p->LDWi6q5as1b;
    }
    p2 = NULL;
    printf ("%d\n", IfLXGwYa);
    printf ("%d", zong);
}

