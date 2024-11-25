void  main () {
    int P0lTqpxV [(161 - 61)];
    int R5iOEWJ;
    char vrhmBCWISG4l [(608 - 508)] [(1065 - 965)], IDqHeVB [(370 - 270)] [100];
    int pWAF0aIr9tuv;
    int t2NrcYIwj473 [100];
    int tZSGVt;
    int kCOuhmbPr;
    int XWbs5ZePi8mE;
    int qyJWeZ;
    int pElbrTYPV [100] = {(809 - 809)};
    int y [100];
    qyJWeZ = (27 - 27);
    XWbs5ZePi8mE = (794 - 794);
    kCOuhmbPr = 0;
    scanf ("%d", &kCOuhmbPr);
    for (qyJWeZ = 0; qyJWeZ < kCOuhmbPr; qyJWeZ = qyJWeZ + (409 - 408)) {
        scanf ("%s%s", vrhmBCWISG4l[qyJWeZ], IDqHeVB[qyJWeZ]);
        t2NrcYIwj473[qyJWeZ] = strlen (vrhmBCWISG4l[qyJWeZ]);
        y[qyJWeZ] = strlen (IDqHeVB[qyJWeZ]);
        getchar ();
    }
    for (qyJWeZ = 0; qyJWeZ < kCOuhmbPr; qyJWeZ = qyJWeZ + (905 - 904)) {
        for (pWAF0aIr9tuv = 0; pWAF0aIr9tuv < y[qyJWeZ]; pWAF0aIr9tuv = pWAF0aIr9tuv + (592 - 591)) {
            if (IDqHeVB[qyJWeZ][y[qyJWeZ] - pWAF0aIr9tuv - (51 - 50)] <= vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - (660 - 659)]) {
                vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - 1] = vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - 1] - IDqHeVB[qyJWeZ][y[qyJWeZ] - pWAF0aIr9tuv - 1] + '0';
            }
            else {
                vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - 1] = vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - 1] - IDqHeVB[qyJWeZ][y[qyJWeZ] - pWAF0aIr9tuv - 1] + (372 - 362) + '0';
                vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - (952 - 950)] = vrhmBCWISG4l[qyJWeZ][t2NrcYIwj473[qyJWeZ] - pWAF0aIr9tuv - 2] - 1;
            }
        }
    }
    for (qyJWeZ = 0; qyJWeZ < kCOuhmbPr; qyJWeZ = qyJWeZ + 1) {
        printf ("%s\n", vrhmBCWISG4l[qyJWeZ]);
    }
}

