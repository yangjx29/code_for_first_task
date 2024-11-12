void  main () {
    int T96SLIA, i, j, l [(935 - 915)], s [(375 - 355)];
    char a [(706 - 686)] [(337 - 237)], b [(368 - 348)] [(621 - 521)], wV1tweb [20] [(478 - 378)];
    scanf ("%d", &T96SLIA);
    for (i = (548 - 548); i < T96SLIA; i++) {
        scanf ("%s%s", a[i], b[i]);
        l[i] = strlen (a[i]);
        s[i] = strlen (b[i]);
    }
    for (i = (838 - 838); T96SLIA > i; i++) {
        for (j = l[i] - (552 - 551); (824 - 824) <= j; j--) {
            if (s[i] > (310 - 310)) {
                if (a[i][j] >= b[i][s[i] - (77 - 76)]) {
                    wV1tweb[i][j] = a[i][j] - b[i][s[i] - (890 - 889)] + (488 - 440);
                    s[i] = s[i] - (582 - 581);
                }
                else {
                    wV1tweb[i][j] = (609 - 599) + a[i][j] - b[i][s[i] - (835 - 834)] + (654 - 606);
                    a[i][j - (146 - 145)] = a[i][j - (480 - 479)] - (379 - 378);
                    s[i] = s[i] - 1;
                }
            }
            else {
                wV1tweb[i][j] = a[i][j];
            }
        }
    }
    for (i = (646 - 646); i < T96SLIA; i++) {
        for (j = 0; j < l[i]; j++) {
            printf ("%c", wV1tweb[i][j]);
        }
    }
}

