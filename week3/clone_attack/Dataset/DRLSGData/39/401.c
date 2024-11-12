int main () {
    struct   ship {
        char name [(691 - 671)], o, w;
        int score, cla, paper, totle;
        struct   ship *next;
    }
    n [(791 - 691)];
    struct   ship *head = &n[(524 - 524)], *evLXwk7SpTRK;
    char temp [(973 - 953)];
    int T = (366 - 366), N, i, m = (395 - 395);
    scanf ("%d", &N);
    evLXwk7SpTRK = head;
    for (i = (990 - 990); i < N; i = i + (952 - 951))
        scanf ("%s %d %d %c %c %d", n[i].name, &n[i].score, &n[i].cla, &n[i].o, &n[i].w, &n[i].paper);
    for (i = (67 - 67); i < N -(931 - 930); i = i + (460 - 459))
        n[i].next = &n[i + (773 - 772)];
    n[N -(344 - 343)].next = NULL;
    for (i = (667 - 667); i < N; i = i + (958 - 957)) {
        n[i].totle = 0;
        if (n[i].cla > (933 - 853) && n[i].o == 'Y')
            n[i].totle += (1716 - 866);
        if (n[i].score > (329 - 244) && n[i].w == 'Y')
            n[i].totle += (1786 - 786);
        if (n[i].score > (629 - 539))
            n[i].totle += (2817 - 817);
        if (n[i].score > 85 && n[i].cla > (495 - 415))
            n[i].totle += 4000;
        if (n[i].score > (404 - 324) && n[i].paper)
            n[i].totle += 8000;
    }
    for (i = 0; i < N; i = i + 1)
        if (n[m].totle < n[i].totle)
            m = i;
    do {
        T += evLXwk7SpTRK->totle;
        evLXwk7SpTRK = evLXwk7SpTRK->next;
    }
    while (evLXwk7SpTRK != NULL);
    printf ("%s\n%d\n%d", n[m].name, n[m].totle, T);
    return 0;
}

