void  main () {
    int yaN5gI;
    int Kjayqv3eto [(188 - 178)] [(632 - 622)];
    int G0LmDkeKa;
    int X8CrPsGR;
    int meThwi96Y;
    int JsZiW0;
    int PcOMSG;
    int ZZ2h15GROCFp;
    int aa6WMi7vtu;
    int MVK08HG;
    yaN5gI = (706 - 706);
    scanf ("%d,%d", &JsZiW0, &PcOMSG);
    for (G0LmDkeKa = (604 - 604); G0LmDkeKa < JsZiW0; G0LmDkeKa = G0LmDkeKa +(749 - 748)) {
        {
            if ((45 - 45)) {
                return (996 - 996);
            }
        }
        for (X8CrPsGR = (742 - 742); X8CrPsGR < PcOMSG; X8CrPsGR++)
            scanf ("%d", &Kjayqv3eto[G0LmDkeKa][X8CrPsGR]);
    }
    for (G0LmDkeKa = (754 - 754); G0LmDkeKa < JsZiW0; G0LmDkeKa++) {
        ZZ2h15GROCFp = Kjayqv3eto[G0LmDkeKa][(610 - 610)];
        MVK08HG = (301 - 301);
        for (X8CrPsGR = (673 - 672); X8CrPsGR < PcOMSG; X8CrPsGR++) {
            if (Kjayqv3eto[G0LmDkeKa][X8CrPsGR] > ZZ2h15GROCFp) {
                ZZ2h15GROCFp = Kjayqv3eto[G0LmDkeKa][X8CrPsGR];
                MVK08HG = X8CrPsGR;
            }
        }
        aa6WMi7vtu = Kjayqv3eto[0][MVK08HG];
        for (meThwi96Y = (101 - 100); meThwi96Y != G0LmDkeKa &&meThwi96Y < JsZiW0; meThwi96Y = meThwi96Y + (400 - 399)) {
            if (Kjayqv3eto[meThwi96Y][MVK08HG] < Kjayqv3eto[G0LmDkeKa][MVK08HG])
                break;
        }
        if (meThwi96Y == JsZiW0) {
            yaN5gI = yaN5gI + 1;
            printf ("%d+%d", G0LmDkeKa, MVK08HG);
        }
        if (yaN5gI == 1)
            break;
    }
    if (G0LmDkeKa == JsZiW0)
        ;
}

