int main () {
    char temp [(402 - 382)];
    int T = (272 - 272), N, i, m = (967 - 967);
    struct   ship {
        char name [(927 - 907)], o, w;
        int score, cla, paper, totle;
        struct   ship *next;
    }
    n [(376 - 276)];
    struct   ship *head = &n[(828 - 828)];
    struct   ship *p;
    p = head;
    scanf ("%d", &N);
    {
        i = 158 - 158;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N > i) {
            scanf ("%s %d %d %c %c %d", n[i].name, &n[i].score, &n[i].cla, &n[i].o, &n[i].w, &n[i].paper);
            i++;
        };
    }
    for (i = (191 - 191); N -(537 - 536) > i; i = i + 1)
        n[i].next = &n[i + 1];
    n[N -1].next = NULL;
    for (i = (650 - 650); i < N; i++) {
        n[i].totle = (289 - 289);
        if ((690 - 610) < n[i].cla && !('Y' != n[i].o))
            n[i].totle += 850;
        if ((754 - 669) < n[i].score && n[i].w == 'Y')
            n[i].totle = n[i].totle + (1095 - 95);
        if (90 < n[i].score)
            n[i].totle += 2000;
        if (n[i].score > 85 && n[i].cla > (343 - 263))
            n[i].totle = n[i].totle + (4506 - 506);
        if (n[i].score > 80 && n[i].paper)
            n[i].totle += (8092 - 92);
    }
    for (i = 0; i < N; i++)
        if (n[m].totle < n[i].totle)
            m = i;
    do {
        T += p->totle;
        p = p->next;
    }
    while (p != NULL);
    printf ("%s\n%d\n%d", n[m].name, n[m].totle, T);
    return 0;
}

