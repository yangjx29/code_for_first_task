void  main () {
    char wQRzVH1, i;
    int PLW0HjB [N];
    int *p;
    int GOCTgXL;
    int *BlUrCi83Ja;
    scanf ("%d", &wQRzVH1);
    {
        i = 0;
        while (wQRzVH1 > i) {
            scanf ("%d", &PLW0HjB[i]);
            i++;
        };
    }
    GOCTgXL = PLW0HjB[0];
    {
        p = PLW0HjB;
        while (PLW0HjB +wQRzVH1 > p) {
            if (*p > GOCTgXL)
                GOCTgXL = *p;
            p = p + 1;
        };
    }
    printf ("%d\n", GOCTgXL);
    if (!(PLW0HjB[0] == GOCTgXL))
        BlUrCi83Ja = PLW0HjB;
    else
        BlUrCi83Ja = PLW0HjB +1;
    {
        p = PLW0HjB;
        while (p < PLW0HjB +wQRzVH1) {
            if (*p > *BlUrCi83Ja&&*p < GOCTgXL)
                BlUrCi83Ja = p;
            p = p + 1;
        };
    }
    printf ("%d", *BlUrCi83Ja);
}

