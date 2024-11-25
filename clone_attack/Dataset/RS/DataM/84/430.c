void  main () {
    int k, fCMnflQjY, a, qGtj7kAf0SHc, cYuCbsi36, DDL6jMf, YnZgTUvwQk, Hg8LARFnO9Y;
    scanf ("%d %d %d", &k, &a, &qGtj7kAf0SHc);
    if (qGtj7kAf0SHc < a)
        YnZgTUvwQk = a, Hg8LARFnO9Y = qGtj7kAf0SHc;
    else
        YnZgTUvwQk = qGtj7kAf0SHc, Hg8LARFnO9Y = a;
    {
        fCMnflQjY = 1;
        while (k - 2 >= fCMnflQjY) {
            fCMnflQjY++;
            scanf ("%d", &cYuCbsi36);
            if (cYuCbsi36 > YnZgTUvwQk)
                DDL6jMf = YnZgTUvwQk, YnZgTUvwQk = cYuCbsi36, Hg8LARFnO9Y = DDL6jMf;
            else if (cYuCbsi36 > Hg8LARFnO9Y)
                Hg8LARFnO9Y = cYuCbsi36;
        };
    }
    printf ("%d\n", YnZgTUvwQk);
    printf ("%d\n", Hg8LARFnO9Y);
}

