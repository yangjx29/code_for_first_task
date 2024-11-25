void  main () {
    int i;
    int lJga2x;
    i = (574 - 574);
    char IBpyLk;
    for (; (IBpyLk = getchar ()) != '\n';) {
        if (IBpyLk != ' ') {
            i = i + 1;
        }
        else if (i > 0) {
            printf ("%d,", i);
            i = 0;
        };
    }
    printf ("%d", i);
}

