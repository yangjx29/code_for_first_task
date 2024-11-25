void  main () {
    int n;
    int k;
    int *a6pm0y;
    int i;
    int *jkeScGR;
    int L3YTlWM8AaGy [100];
    scanf ("%d%d", &n, &k);
    {
        i = 0;
        while (100 > i) {
            L3YTlWM8AaGy[i] = -1;
            i++;
        };
    }
    for (i = 0; n > i; i++)
        scanf ("%d", &L3YTlWM8AaGy[i]);
    jkeScGR = L3YTlWM8AaGy +n - k;
    for (a6pm0y = jkeScGR; *a6pm0y != -1; a6pm0y++)
        printf ("%d ", *a6pm0y);
    for (a6pm0y = L3YTlWM8AaGy; a6pm0y != jkeScGR; a6pm0y++) {
        printf ("%d", *a6pm0y);
        if ((a6pm0y + 1) != jkeScGR)
            ;
    };
}

