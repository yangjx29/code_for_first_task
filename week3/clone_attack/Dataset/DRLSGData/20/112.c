void  main () {
    int o5sY7bcu;
    char CJ18kHZ7;
    char fCZ2MvnoYXKc;
    char zbrxgcLlF7on [3];
    char ddfc10BOzRy [10];
    int wKJHTVf93v6;
    int dfNOGMit;
    for (; scanf ("%s", ddfc10BOzRy) != EOF;) {
        scanf ("%s", zbrxgcLlF7on);
        wKJHTVf93v6 = strlen (ddfc10BOzRy);
        fCZ2MvnoYXKc = ddfc10BOzRy[0];
        {
            dfNOGMit = 0;
            for (; dfNOGMit <= wKJHTVf93v6 - 1;) {
                if ((int) ddfc10BOzRy[dfNOGMit] > (int) fCZ2MvnoYXKc) {
                    fCZ2MvnoYXKc = ddfc10BOzRy[dfNOGMit];
                    o5sY7bcu = dfNOGMit;
                }
                dfNOGMit++;
            }
        }
        for (dfNOGMit = 0; dfNOGMit <= o5sY7bcu; dfNOGMit++)
            printf ("%c", ddfc10BOzRy[dfNOGMit]);
        printf ("%s", zbrxgcLlF7on);
        for (dfNOGMit = o5sY7bcu + 1; dfNOGMit <= wKJHTVf93v6 - 1; dfNOGMit++)
            printf ("%c", ddfc10BOzRy[dfNOGMit]);
    }
    for (; (CJ18kHZ7 = getchar ()) != EOF;)
        ;
}

