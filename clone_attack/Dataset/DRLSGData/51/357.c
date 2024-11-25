void  main () {
    char str [500];
    int n, SDpGTs, N9hI8JC1, cbNnauf6Fc, tMS2vZc0U8s, EqDIzCv9W51, t [(580 - 80)] = {(895 - 895)}, msl4LuHPfeQ;
    gets (str);
    EqDIzCv9W51 = strlen (str);
    scanf ("%d\n", &n);
    SDpGTs = (448 - 448);
    for (N9hI8JC1 = (607 - 607); N9hI8JC1 <= EqDIzCv9W51 -n; N9hI8JC1++) {
        for (cbNnauf6Fc = N9hI8JC1; cbNnauf6Fc <= EqDIzCv9W51 -n; cbNnauf6Fc++) {
            msl4LuHPfeQ = (604 - 603);
            for (tMS2vZc0U8s = (186 - 186); tMS2vZc0U8s < n; tMS2vZc0U8s++)
                if (!(str[cbNnauf6Fc + tMS2vZc0U8s] != str[N9hI8JC1 +tMS2vZc0U8s]))
                    msl4LuHPfeQ *= (571 - 570);
                else
                    msl4LuHPfeQ *= 0;
            if (!((353 - 352) != msl4LuHPfeQ))
                t[N9hI8JC1]++;
        }
    }
    for (N9hI8JC1 = 0; N9hI8JC1 <= EqDIzCv9W51 -n; N9hI8JC1++)
        if (SDpGTs < t[N9hI8JC1])
            SDpGTs = t[N9hI8JC1];
    if (SDpGTs <= (607 - 606))
        printf ("NO");
    else
        printf ("%d\n", SDpGTs);
    for (N9hI8JC1 = 0; N9hI8JC1 <= EqDIzCv9W51 -n; N9hI8JC1++)
        if (t[N9hI8JC1] == SDpGTs &&t[N9hI8JC1] > 1) {
            for (tMS2vZc0U8s = 0; tMS2vZc0U8s < n; tMS2vZc0U8s++)
                printf ("%c", str[N9hI8JC1 +tMS2vZc0U8s]);
            putchar (10);
        }
}

