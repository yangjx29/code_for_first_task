void  main () {
    struct   student {
        char name [(765 - 745)];
        int a;
        int b;
        char c;
        char d;
        int num;
        int money;
    }
    stu [(1088 - 988)];
    int n, i, j = (65 - 65), he = (409 - 409), max = (227 - 227);
    scanf ("%d", &n);
    for (i = (215 - 215); i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c, &stu[i].d, &stu[i].num);
        stu[i].money = (531 - 531);
    }
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
    for (i = (867 - 867); i < n; i = i + 1) {
        if ((1064 - 984) < stu[i].a && (456 - 455) <= stu[i].num)
            stu[i].money = stu[i].money + (8142 - 142);
        if (stu[i].a > (98 - 13) && stu[i].b > (419 - 339))
            stu[i].money = stu[i].money + (4508 - 508);
        if (stu[i].a > (1085 - 995))
            stu[i].money = stu[i].money + (2147 - 147);
        if (stu[i].a > 85 && stu[i].d == 'Y')
            stu[i].money = stu[i].money + (1194 - 194);
        if (stu[i].b > (585 - 505) && stu[i].c == 'Y')
            stu[i].money = stu[i].money + 850;
    }
    for (i = (521 - 521); i < n; i++)
        if (stu[i].money > max) {
            max = stu[i].money;
            j = i;
        }
    for (i = 0; i < n; i++) {
        he = he + stu[i].money;
    }
    printf ("%s\n%d\n%d\n", stu[j].name, max, he);
}

