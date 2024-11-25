void  main () {
    int n;
    int ViybMClcGTe;
    int a [(20226 - 221)], mark [100] = {0}, print = 0;
    scanf ("%d", &n);
    {
        ViybMClcGTe = 0;
        while (n > ViybMClcGTe) {
            scanf ("%d", a + ViybMClcGTe);
            ViybMClcGTe = ViybMClcGTe +1;
        };
    }
    for (ViybMClcGTe = 0; ViybMClcGTe < n; ViybMClcGTe++) {
        if (mark[a[ViybMClcGTe]] == 1)
            continue;
        else {
            if (print)
                printf (" ");
            printf ("%d", a[ViybMClcGTe]);
            mark[a[ViybMClcGTe]]++;
            print = 1;
        };
    }
    putchar (10);
}

