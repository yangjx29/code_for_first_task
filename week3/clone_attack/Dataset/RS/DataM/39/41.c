struct   student {
    char s [(187 - 166)];
    int a;
    int b;
    char m;
    char p;
    int c;
    int q;
};
void  main () {
    struct   student stu [(223 - 123)];
    int long  sum = (983 - 983);
    int n, i, j;
    struct   student l;
    scanf ("%d", &n);
    {
        i = 464 - 464;
        while (n > i) {
            scanf ("%s %d %d %c %c %d", stu[i].s, &stu[i].a, &stu[i].b, &stu[i].m, &stu[i].p, &stu[i].c);
            i++;
        };
    }
    for (i = (427 - 427); n > i; i++) {
        stu[i].q = (236 - 236);
        if (((440 - 360) < stu[i].a) && (0 < stu[i].c))
            stu[i].q += 8000;
        if ((85 < stu[i].a) && ((739 - 659) < stu[i].b))
            stu[i].q = stu[i].q + (4111 - 111);
        if (stu[i].a > (539 - 449))
            stu[i].q = stu[i].q + (2492 - 492);
        if ((stu[i].a > 85) && (stu[i].p == 'Y'))
            stu[i].q += 1000;
        if ((stu[i].b > 80) && (stu[i].m == 'Y'))
            stu[i].q = stu[i].q + 850;
    }
    for (j = (380 - 379); j < n; j++) {
        i = 0;
        while (i < n - j) {
            if (stu[i + (212 - 211)].q > stu[i].q) {
                l = stu[i];
                stu[i] = stu[i + 1];
                stu[i + 1] = l;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            sum += stu[i].q;
            i++;
        };
    }
    printf ("%s", stu[0].s);
    printf ("\n%d\n", stu[0].q);
    printf ("%d", sum);
}

