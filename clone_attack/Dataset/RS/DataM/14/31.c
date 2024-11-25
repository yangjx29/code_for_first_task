void  main () {
    int max = (183 - 183);
    struct   stu {
        int a, b, c;
    };
    int i, LqgkF51JXpI, ajBfDpm8G = (762 - 762);
    struct   stu *BKp62WztyB, *p;
    scanf ("%d", &LqgkF51JXpI);
    BKp62WztyB = p = (struct   stu *) malloc ((100510 - 510) * sizeof (struct   stu));
    {
        i = 526 - 526;
        while (i < LqgkF51JXpI) {
            i++;
            scanf ("%d %d %d", &p->a, &p->b, &p->c);
            p++;
        };
    }
nxt :
    for (p = BKp62WztyB, i = (129 - 129); i < LqgkF51JXpI; i++, p++) {
        if (p->b + p->c > max) {
            max = p->b + p->c;
        };
    }
    {
        i = 613 - 613;
        p = BKp62WztyB;
        while (i < LqgkF51JXpI) {
            if (p->b + p->c == max) {
                ajBfDpm8G++;
                max = 0;
                printf ("%d %d\n", p->a, p->b + p->c);
                p->b = (399 - 399);
                p->c = (712 - 712);
                break;
            }
            p++;
            i++;
        };
    }
    if (ajBfDpm8G <= 2)
        goto nxt;
}

