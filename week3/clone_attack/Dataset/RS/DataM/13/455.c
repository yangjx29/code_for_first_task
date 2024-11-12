void  main () {
    int REsYRxyH, Mom4BWhwY3 [100001], h, da57TceWUD, j;
    char c;
    scanf ("%d\n", &REsYRxyH);
    {
        da57TceWUD = 1;
        while (REsYRxyH >= da57TceWUD) {
            h = 0;
            scanf ("%d%c", &Mom4BWhwY3[da57TceWUD], &c);
            if (!(1 != da57TceWUD))
                printf ("%d", Mom4BWhwY3[da57TceWUD]);
            else {
                {
                    j = 1;
                    while (da57TceWUD > j) {
                        if (Mom4BWhwY3[j] == Mom4BWhwY3[da57TceWUD]) {
                            h = 1;
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (h == 0)
                    printf (" %d", Mom4BWhwY3[da57TceWUD]);
            }
            da57TceWUD = da57TceWUD + 1;
        };
    };
}

