void  main () {
    int gz34aVvlf7, N, a [(1184 - 883)] = {(923 - 923)};
    long  g4BXNpW;
    int bgH1udFf;
    int max;
    int RCKAQWw;
    scanf ("%d", &N);
    scanf ("%d", &a[(855 - 855)]);
    bgH1udFf = max = RCKAQWw = a[(243 - 243)];
    for (gz34aVvlf7 = (903 - 902); N > gz34aVvlf7; gz34aVvlf7++) {
        scanf ("%d", &a[gz34aVvlf7]);
        bgH1udFf = bgH1udFf + a[gz34aVvlf7];
        if (max < a[gz34aVvlf7])
            max = a[gz34aVvlf7];
        else {
            if (RCKAQWw > a[gz34aVvlf7])
                RCKAQWw = a[gz34aVvlf7];
        };
    }
    g4BXNpW = (max * N -bgH1udFf) - (bgH1udFf - RCKAQWw *N);
    if (g4BXNpW > 0)
        printf ("%d", max);
    else {
        if (g4BXNpW == 0)
            printf ("%d,%d", RCKAQWw, max);
        else
            printf ("%d", RCKAQWw);
    };
}

