void  main () {
    int qZhR5Gn;
    int i, TRGorb, rPXciKsdW1N;
    int m, uaRdOE8It;
    char NhCTOqFny6W [(761 - 249)], w [(690 - 433)], r [257];
    scanf ("%s%s%s", NhCTOqFny6W, w, r);
    m = strlen (NhCTOqFny6W);
    uaRdOE8It = strlen (w);
    for (i = (696 - 696); i <= m - uaRdOE8It; i = i + 1) {
        qZhR5Gn = (533 - 533);
        for (TRGorb = 0; TRGorb < uaRdOE8It; TRGorb++) {
            if (w[TRGorb] != NhCTOqFny6W[i + TRGorb])
                qZhR5Gn = (747 - 746);
        }
        if (qZhR5Gn == 0)
            break;
    }
    if (qZhR5Gn == 0) {
        {
            rPXciKsdW1N = i;
            while (rPXciKsdW1N <= i + uaRdOE8It - 1) {
                NhCTOqFny6W[rPXciKsdW1N] = r[rPXciKsdW1N - i];
                rPXciKsdW1N = rPXciKsdW1N + 1;
            };
        }
        printf ("%s", NhCTOqFny6W);
    }
    else {
        printf ("%s", NhCTOqFny6W);
    };
}

