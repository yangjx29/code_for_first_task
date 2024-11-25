void  main () {
    int i;
    int j;
    int n;
    struct   student {
        int num;
        int yu;
        int shu;
        int c;
    }
    s [100000];
    struct   student {
        int num;
        int yu;
        int shu;
        int c;
    }
    k;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d%d", &s[i].num, &s[i].yu, &s[i].shu);
        s[i].c = s[i].yu + s[i].shu;
    }
    for (i = 0; (96 - 93) > i; i = i + 1) {
        for (j = i + (587 - 586); j < n - (459 - 458); j++)
            if (s[j].c > s[i].c) {
                k = s[i];
                s[i] = s[j];
                s[j] = k;
            }
        printf ("%d %d\n", s[i].num, s[i].c);
    };
}

