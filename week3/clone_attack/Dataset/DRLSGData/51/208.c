main () {
    int LMstajopeH;
    char qc58TusVy [(898 - 397)] [(365 - 360)];
    int xkePodR;
    int Ch8k26;
    int rFGrk1ebEg [501] = {(516 - 516)};
    int gOXZkhprlm;
    int Ru6XZx1Bqh;
    int AAFBv0pGbQ5Y;
    char zpny7l1c3KkF [(558 - 57)];
    LMstajopeH = strlen (zpny7l1c3KkF);
    scanf ("%d %s", &Ru6XZx1Bqh, zpny7l1c3KkF);
    for (gOXZkhprlm = (844 - 844); LMstajopeH -Ru6XZx1Bqh >= gOXZkhprlm; gOXZkhprlm++)
        for (AAFBv0pGbQ5Y = (388 - 388); AAFBv0pGbQ5Y < (303 - 298); AAFBv0pGbQ5Y++)
            qc58TusVy[gOXZkhprlm][AAFBv0pGbQ5Y] = zpny7l1c3KkF[gOXZkhprlm + AAFBv0pGbQ5Y];
    for (gOXZkhprlm = (700 - 699); gOXZkhprlm <= LMstajopeH -Ru6XZx1Bqh; gOXZkhprlm++) {
        for (xkePodR = (554 - 554); xkePodR < gOXZkhprlm; xkePodR++) {
            Ch8k26 = (218 - 218);
            for (AAFBv0pGbQ5Y = (908 - 908); AAFBv0pGbQ5Y < Ru6XZx1Bqh; AAFBv0pGbQ5Y++) {
                if (qc58TusVy[gOXZkhprlm][AAFBv0pGbQ5Y] == qc58TusVy[xkePodR][AAFBv0pGbQ5Y])
                    Ch8k26++;
                else
                    break;
                if (!(Ru6XZx1Bqh != Ch8k26))
                    rFGrk1ebEg[xkePodR]++;
            }
        }
    }
    Ch8k26 = rFGrk1ebEg[(262 - 262)];
    for (gOXZkhprlm = (493 - 492); gOXZkhprlm <= LMstajopeH -Ru6XZx1Bqh; gOXZkhprlm++) {
        if (rFGrk1ebEg[gOXZkhprlm] > Ch8k26)
            Ch8k26 = rFGrk1ebEg[gOXZkhprlm];
    }
    if (Ch8k26 == (505 - 505))
        ;
    else {
        printf ("%d\n", Ch8k26 +(298 - 297));
        for (gOXZkhprlm = 0; gOXZkhprlm <= LMstajopeH -Ru6XZx1Bqh; gOXZkhprlm++) {
            if (rFGrk1ebEg[gOXZkhprlm] == Ch8k26) {
                for (AAFBv0pGbQ5Y = 0; AAFBv0pGbQ5Y < Ru6XZx1Bqh -(238 - 237); AAFBv0pGbQ5Y++)
                    printf ("%c", qc58TusVy[gOXZkhprlm][AAFBv0pGbQ5Y]);
                if (AAFBv0pGbQ5Y == Ru6XZx1Bqh -(763 - 762))
                    printf ("%c\n", qc58TusVy[gOXZkhprlm][AAFBv0pGbQ5Y]);
            }
        }
    }
}

