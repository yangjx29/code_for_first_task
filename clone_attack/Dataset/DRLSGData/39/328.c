void  main () {
    int LUdbRLpN6;
    int Xk8SYE6wg;
    int UgwsPOM;
    char IC0SVYWBNnI [(404 - 383)];
    int QzFL1Jh2m;
    int gtXQZ4;
    struct   xuesheng {
        char RYmZFyJ [21];
        int AR6vqLsGfQ;
        int CVbDJjIYzR;
        char PmwdJTIz;
        char vu8ZMx;
        int F0MHhci;
        int vkN4VeGltvC;
    };
    struct   xuesheng RYmZFyJ [(357 - 256)], *gdpwzWJ;
    QzFL1Jh2m = (516 - 516);
    Xk8SYE6wg = (754 - 754);
    scanf ("%d", &LUdbRLpN6);
    {
        UgwsPOM = (182 - 182);
        for (; LUdbRLpN6 > UgwsPOM;) {
            scanf ("%s %d %d %c %c %d\n", &RYmZFyJ[UgwsPOM].RYmZFyJ, &RYmZFyJ[UgwsPOM].AR6vqLsGfQ, &RYmZFyJ[UgwsPOM].CVbDJjIYzR, &RYmZFyJ[UgwsPOM].PmwdJTIz, &RYmZFyJ[UgwsPOM].vu8ZMx, &RYmZFyJ[UgwsPOM].F0MHhci);
            RYmZFyJ[UgwsPOM].vkN4VeGltvC = 0;
            if (RYmZFyJ[UgwsPOM].AR6vqLsGfQ > 80 && RYmZFyJ[UgwsPOM].F0MHhci != 0)
                RYmZFyJ[UgwsPOM].vkN4VeGltvC += 8000;
            if (85 < RYmZFyJ[UgwsPOM].AR6vqLsGfQ && 80 < RYmZFyJ[UgwsPOM].CVbDJjIYzR)
                RYmZFyJ[UgwsPOM].vkN4VeGltvC += 4000;
            if (90 < RYmZFyJ[UgwsPOM].AR6vqLsGfQ)
                RYmZFyJ[UgwsPOM].vkN4VeGltvC += 2000;
            if (RYmZFyJ[UgwsPOM].AR6vqLsGfQ > 85 && !('Y' != RYmZFyJ[UgwsPOM].vu8ZMx))
                RYmZFyJ[UgwsPOM].vkN4VeGltvC += 1000;
            if (RYmZFyJ[UgwsPOM].CVbDJjIYzR > 80 && !('Y' != RYmZFyJ[UgwsPOM].PmwdJTIz))
                RYmZFyJ[UgwsPOM].vkN4VeGltvC += 850;
            Xk8SYE6wg = Xk8SYE6wg +RYmZFyJ[UgwsPOM].vkN4VeGltvC;
            UgwsPOM = UgwsPOM +(221 - 220);
        }
    }
    {
        UgwsPOM = 0;
        for (; UgwsPOM < LUdbRLpN6;) {
            if (QzFL1Jh2m < RYmZFyJ[UgwsPOM].vkN4VeGltvC) {
                strcpy (IC0SVYWBNnI, RYmZFyJ[UgwsPOM].RYmZFyJ);
                QzFL1Jh2m = RYmZFyJ[UgwsPOM].vkN4VeGltvC;
            }
            UgwsPOM = UgwsPOM +1;
        }
    }
    printf ("%s\n%d\n%d", IC0SVYWBNnI, QzFL1Jh2m, Xk8SYE6wg);
}

