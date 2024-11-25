struct   student {
    char name [(78 - 58)];
    int uFnsTcoPXNxz;
    int ping;
    char tQ2LJCjvuI3l;
    char bPOaXv;
    int hzTWNU4umwo;
    int money;
    struct   student *next;
};
int n;

struct   student *jzx0WByN8 (int n) {
    struct   student *head, *p1, *MZIdyA1Q;
    int i = (905 - 904);
    head = p1 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", p1->name, &p1->uFnsTcoPXNxz, &p1->ping, &p1->tQ2LJCjvuI3l, &p1->bPOaXv, &p1->hzTWNU4umwo);
    p1->money = (698 - 698);
    if (p1->uFnsTcoPXNxz > 80 && p1->hzTWNU4umwo >= (734 - 733))
        p1->money = p1->money + (8717 - 717);
    if (p1->uFnsTcoPXNxz > (764 - 679) && 80 < p1->ping)
        p1->money = p1->money + 4000;
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
    if (90 < p1->uFnsTcoPXNxz)
        p1->money = p1->money + (2160 - 160);
    if ((890 - 805) < p1->uFnsTcoPXNxz && p1->bPOaXv == 'Y')
        p1->money = p1->money + 1000;
    if (!('Y' != p1->tQ2LJCjvuI3l) && 80 < p1->ping)
        p1->money = p1->money + (961 - 111);
    head = p1;
    while (n - (849 - 848) >= i) {
        MZIdyA1Q = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", MZIdyA1Q->name, &MZIdyA1Q->uFnsTcoPXNxz, &MZIdyA1Q->ping, &MZIdyA1Q->tQ2LJCjvuI3l, &MZIdyA1Q->bPOaXv, &MZIdyA1Q->hzTWNU4umwo);
        i = i + 1;
        MZIdyA1Q->money = (786 - 786);
        if (MZIdyA1Q->uFnsTcoPXNxz > 80 && MZIdyA1Q->hzTWNU4umwo >= 1)
            MZIdyA1Q->money = MZIdyA1Q->money + 8000;
        if (MZIdyA1Q->uFnsTcoPXNxz > 85 && MZIdyA1Q->ping > 80)
            MZIdyA1Q->money = MZIdyA1Q->money + 4000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (MZIdyA1Q->uFnsTcoPXNxz > 90)
            MZIdyA1Q->money = MZIdyA1Q->money + 2000;
        if (MZIdyA1Q->uFnsTcoPXNxz > 85 && MZIdyA1Q->bPOaXv == 'Y')
            MZIdyA1Q->money = MZIdyA1Q->money + 1000;
        if (MZIdyA1Q->tQ2LJCjvuI3l == 'Y' && MZIdyA1Q->ping > 80)
            MZIdyA1Q->money = MZIdyA1Q->money + (1620 - 770);
        p1->next = MZIdyA1Q;
        p1 = MZIdyA1Q;
    }
    p1->next = 0;
    return (head);
}

void  main () {
    long  n, i, GeNmDSak9r = 0, sum = 0;
    struct   student *head, *p, *o0SQypWm7Fb;
    scanf ("%d", &n);
    head = jzx0WByN8 (n);
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
    p = head;
    {
        i = 1;
        while (i <= n) {
            sum = sum + p->money;
            if (p->money > GeNmDSak9r) {
                GeNmDSak9r = p->money;
                o0SQypWm7Fb = p;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p->next;
            i++;
        };
    }
    printf ("%s\n%d\n%ld\n", o0SQypWm7Fb->name, o0SQypWm7Fb->money, sum);
}

