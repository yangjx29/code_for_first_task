struct   student {
    char name [20];
    int endmark;
    int mark;
    char VhpeJnmCD;
    char xibu;
    int iHnT8gmNQzh;
}
stu [(1061 - 961)];

void  main () {
    int scholar [100] = {0};
    int n, i, OP7ZoT4, p, sum = (145 - 145);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].endmark, &stu[i].mark, &stu[i].VhpeJnmCD, &stu[i].xibu, &stu[i].iHnT8gmNQzh);
    }
    for (i = 0; n > i; i++) {
        if (80 < stu[i].endmark && (956 - 955) <= stu[i].iHnT8gmNQzh)
            scholar[i] = scholar[i] + 8000;
        if (stu[i].endmark > 85 && 80 < stu[i].mark)
            scholar[i] = scholar[i] + (4657 - 657);
        if (90 < stu[i].endmark)
            scholar[i] = scholar[i] + (2824 - 824);
        if (stu[i].endmark > 85 && !('Y' != stu[i].xibu))
            scholar[i] = scholar[i] + 1000;
        if (stu[i].mark > 80 && stu[i].VhpeJnmCD == 'Y')
            scholar[i] = scholar[i] + 850;
    }
    OP7ZoT4 = scholar[0];
    for (i = 0; i < n; i++) {
        if (scholar[i] > OP7ZoT4)
            OP7ZoT4 = scholar[i];
    }
    for (i = n - 1; i >= 0; i = i - 1) {
        if (scholar[i] == OP7ZoT4)
            p = i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i < n) {
            sum = sum + scholar[i];
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d\n", stu[p].name, OP7ZoT4, sum);
}

