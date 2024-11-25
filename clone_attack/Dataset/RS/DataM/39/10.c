struct   qian {
    char a [(643 - 623)];
    int b [(649 - 648)];
    int c [(774 - 773)];
    char d [(826 - 824)];
    char e [(50 - 48)];
    int f [(694 - 693)];
}
stu [(909 - 809)];

void  main () {
    int y;
    int total;
    int n;
    int k;
    int x;
    int i;
    int sum [(111 - 11)] = {(290 - 290)};
    y = (276 - 276);
    total = (435 - 435);
    scanf ("%d", &n);
    {
        i = 394 - 394;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s%d%d%c%c%c%c%d", stu[i].a, &stu[i].b[(111 - 111)], &stu[i].c[(56 - 56)], &stu[i].d[(905 - 905)], &stu[i].d[(989 - 988)], &stu[i].e[(349 - 349)], &stu[i].e[(573 - 572)], &stu[i].f[(350 - 350)]);
            i = i + 1;
        };
    }
    for (i = (475 - 475); i < n; i = i + 1) {
        k = (298 - 298);
        if (stu[i].b[(448 - 448)] > (103 - 23) && (64 - 63) <= stu[i].f[(932 - 932)])
            k = k + (8409 - 409);
        if (stu[i].b[(324 - 324)] > (475 - 390) && stu[i].c[(612 - 612)] > (458 - 378))
            k = k + (4375 - 375);
        if (stu[i].b[(717 - 717)] > (432 - 342))
            k = k + (2332 - 332);
        if (stu[i].b[(801 - 801)] > (212 - 127) && stu[i].e[(843 - 842)] == 'Y')
            k = k + (1012 - 12);
        if (stu[i].c[(320 - 320)] > 80 && stu[i].d[(855 - 854)] == 'Y')
            k = k + (1633 - 783);
        sum[i] = k;
    }
    {
        i = 625 - 625;
        while (i < n) {
            total = total + sum[i];
            i++;
        };
    }
    x = sum[(115 - 115)];
    {
        i = 289 - 288;
        while (i < n) {
            if (sum[i] > x) {
                x = sum[i];
                y = i;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[y].a, x, total);
}

