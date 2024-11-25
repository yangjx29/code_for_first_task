struct   {
    float a;
    float IRoBk3Psg;
}
bzTDt6mndl [(539 - 138)];

void  main () {
    int fyEGBbgs8A2o;
    float p7iYNHTPvO;
    float AKJVgtruFDS;
    float wioA5Fxu;
    int BqCdQo;
    int sCEj5J9TB;
    float szu84sJ;
    scanf ("%d\n", &BqCdQo);
    wioA5Fxu = (467 - 467);
    AKJVgtruFDS = 0;
    for (fyEGBbgs8A2o = 0; BqCdQo > fyEGBbgs8A2o; fyEGBbgs8A2o = fyEGBbgs8A2o + 1)
        scanf ("%f", &bzTDt6mndl[fyEGBbgs8A2o].a);
    for (fyEGBbgs8A2o = 0; fyEGBbgs8A2o < BqCdQo; fyEGBbgs8A2o = fyEGBbgs8A2o + 1) {
        wioA5Fxu = wioA5Fxu + bzTDt6mndl[fyEGBbgs8A2o].a;
    }
    p7iYNHTPvO = wioA5Fxu / BqCdQo;
    for (fyEGBbgs8A2o = 0; BqCdQo > fyEGBbgs8A2o; fyEGBbgs8A2o = fyEGBbgs8A2o + 1) {
        bzTDt6mndl[fyEGBbgs8A2o].IRoBk3Psg = fabs (bzTDt6mndl[fyEGBbgs8A2o].a - p7iYNHTPvO);
    }
    for (sCEj5J9TB = 0; sCEj5J9TB < BqCdQo -1; sCEj5J9TB = sCEj5J9TB + 1) {
        for (fyEGBbgs8A2o = 0; BqCdQo -1 > fyEGBbgs8A2o; fyEGBbgs8A2o = fyEGBbgs8A2o + 1) {
            if (bzTDt6mndl[fyEGBbgs8A2o + 1].IRoBk3Psg > bzTDt6mndl[fyEGBbgs8A2o].IRoBk3Psg) {
                bzTDt6mndl[400] = bzTDt6mndl[fyEGBbgs8A2o];
                bzTDt6mndl[fyEGBbgs8A2o] = bzTDt6mndl[fyEGBbgs8A2o + 1];
                bzTDt6mndl[fyEGBbgs8A2o + 1] = bzTDt6mndl[400];
            }
        }
    }
    for (fyEGBbgs8A2o = 1; BqCdQo > fyEGBbgs8A2o; fyEGBbgs8A2o = fyEGBbgs8A2o + 1) {
        if (!(bzTDt6mndl[0].IRoBk3Psg != bzTDt6mndl[fyEGBbgs8A2o].IRoBk3Psg))
            AKJVgtruFDS = AKJVgtruFDS +1;
    }
    for (sCEj5J9TB = 0; AKJVgtruFDS -1 > sCEj5J9TB; sCEj5J9TB = sCEj5J9TB + 1) {
        for (fyEGBbgs8A2o = 0; AKJVgtruFDS -1 > fyEGBbgs8A2o; fyEGBbgs8A2o = fyEGBbgs8A2o + 1) {
            if (bzTDt6mndl[fyEGBbgs8A2o].IRoBk3Psg > bzTDt6mndl[fyEGBbgs8A2o + 1].IRoBk3Psg) {
                bzTDt6mndl[400] = bzTDt6mndl[fyEGBbgs8A2o];
                bzTDt6mndl[fyEGBbgs8A2o] = bzTDt6mndl[fyEGBbgs8A2o + 1];
                bzTDt6mndl[fyEGBbgs8A2o + 1] = bzTDt6mndl[400];
            }
        }
    }
    printf ("%.0f", bzTDt6mndl[0].a);
    for (fyEGBbgs8A2o = 1; fyEGBbgs8A2o < AKJVgtruFDS +1; fyEGBbgs8A2o = fyEGBbgs8A2o + 1)
        printf (",%.0f", bzTDt6mndl[fyEGBbgs8A2o].a);
}

