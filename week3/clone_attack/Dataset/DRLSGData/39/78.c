struct   student {
    char xVM4CwJ [20];
    int JLAwYKctUQB1, cNZJqt;
    char w5SzEju, xibu;
    int MxP7nVpf3;
};
void  main () {
    int n, MfjVJcaqDp;
    struct   student *p;
    int upE2C0M9S = (819 - 819), max = 0, gh68vHS, single = 0;
    scanf ("%d", &n);
    p = (struct   student *) malloc (n * sizeof (struct   student));
    {
        MfjVJcaqDp = 0;
        for (; MfjVJcaqDp < n;) {
            scanf ("%s", &p[MfjVJcaqDp].xVM4CwJ);
            scanf ("%d%d", &p[MfjVJcaqDp].JLAwYKctUQB1, &p[MfjVJcaqDp].cNZJqt);
            scanf (" %c %c", &p[MfjVJcaqDp].w5SzEju, &p[MfjVJcaqDp].xibu);
            scanf ("%d", &p[MfjVJcaqDp].MxP7nVpf3);
            if (p[MfjVJcaqDp].JLAwYKctUQB1 > 80 && p[MfjVJcaqDp].MxP7nVpf3)
                single += 8000;
            if (85 < p[MfjVJcaqDp].JLAwYKctUQB1 && p[MfjVJcaqDp].cNZJqt > 80)
                single += 4000;
            if ((824 - 734) < p[MfjVJcaqDp].JLAwYKctUQB1)
                single += 2000;
            if (p[MfjVJcaqDp].JLAwYKctUQB1 > 85 && p[MfjVJcaqDp].xibu == 'Y')
                single += (1676 - 676);
            if (p[MfjVJcaqDp].cNZJqt > 80 && p[MfjVJcaqDp].w5SzEju == 'Y')
                single += 850;
            if (single > max) {
                gh68vHS = MfjVJcaqDp;
                max = single;
            }
            upE2C0M9S += single;
            single = 0;
            MfjVJcaqDp = MfjVJcaqDp +1;
        }
    }
    printf ("%s\n", p[gh68vHS].xVM4CwJ);
    printf ("%d\n", max);
    printf ("%d\n", upE2C0M9S);
}

