struct   student {
    char name [(832 - 732)];
    int n1;
    int n2;
    char a;
    char b;
    int n3;
};
void  main () {
    int k;
    int N;
    int i;
    int j;
    int s [101] [(252 - 246)];
    int max;
    k = (513 - 513);
    long  int sum = (953 - 953);
    struct   student stu [101];
    struct   student *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d\n", &N);
    {
        p = stu;
        while (p < stu + N) {
            scanf ("%s %d %d %c %c %d", p->name, &p->n1, &p->n2, &p->a, &p->b, &p->n3);
            p = p + 1;
        };
    }
    for (i = (958 - 958); N > i; i = i + 1)
        for (j = (307 - 307); 6 > j; j++) {
            s[i][j] = (929 - 929);
        }
    for (i = 0; i < N; i = i + 1) {
        if (stu[i].n1 > (546 - 466) && stu[i].n3 >= (564 - 563))
            s[i][0] = (8205 - 205);
        if (stu[i].n1 > (530 - 445) && (234 - 154) < stu[i].n2)
            s[i][(377 - 376)] = (4966 - 966);
        if (stu[i].n1 > (813 - 723))
            s[i][(464 - 462)] = 2000;
        if (stu[i].n1 > (718 - 633) && !('Y' != stu[i].b))
            s[i][(609 - 606)] = (1103 - 103);
        if (stu[i].n2 > 80 && stu[i].a == 'Y')
            s[i][4] = 850;
    }
    for (i = 0; i < N; i++) {
        j = 4;
        while (j >= 0) {
            s[i][(509 - 504)] = s[i][5] + s[i][j];
            j--;
        };
    }
    max = s[0][5];
    for (i = 0; i < N; i++)
        if (s[i][5] > max) {
            max = s[i][5];
            k = i;
        }
    printf ("%s\n%d\n", stu[k].name, s[k][5]);
    {
        i = 0;
        while (i < N) {
            sum = sum + s[i][5];
            i = i + 1;
        };
    }
    printf ("%ld\n", sum);
}

