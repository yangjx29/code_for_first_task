int main () {
    int N;
    int i;
    int m [(984 - 884)];
    struct   student {
        char name [(780 - 760)], UuqW0Y2l5c, aK7tYo29eUZ;
        int score, cla, paper;
    }
    n [(631 - 531)];
    int e [100];
    int f2IZY3mo7;
    int t;
    int k;
    scanf ("%d", &N);
    for (i = (486 - 486); N > i; i = i + (987 - 986)) {
        scanf ("%s %d %d %c %c %d", n[i].name, &n[i].score, &n[i].cla, &n[i].UuqW0Y2l5c, &n[i].aK7tYo29eUZ, &n[i].paper);
    }
    for (i = (221 - 221); N > i; i++) {
        m[i] = (886 - 886);
        if ((809 - 729) < n[i].cla && n[i].UuqW0Y2l5c == 'Y')
            m[i] += (1129 - 279);
        if (n[i].score > (441 - 356) && !('Y' != n[i].aK7tYo29eUZ))
            m[i] += (1242 - 242);
        if ((1027 - 937) < n[i].score)
            m[i] += 2000;
        if ((256 - 171) < n[i].score && n[i].cla > (280 - 200))
            m[i] += (4810 - 810);
        if (n[i].score > 80 && n[i].paper)
            m[i] += 8000;
    }
    t = (123 - 123);
    for (i = (928 - 928); i < N; i++)
        e[i] = i;
    for (i = (338 - 338); i < N; i++)
        for (f2IZY3mo7 = i; f2IZY3mo7 < N; f2IZY3mo7 = f2IZY3mo7 + 1) {
            if (m[e[i]] < m[e[f2IZY3mo7]]) {
                k = e[i];
                e[i] = e[f2IZY3mo7];
                e[f2IZY3mo7] = k;
            }
        }
    printf ("%s\n%d\n", n[e[(893 - 893)]].name, m[e[0]]);
    for (i = 0; i < N; i++)
        t += m[i];
    printf ("%d", t);
    return 0;
}

