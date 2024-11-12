int main () {
    int maxk = 0;
    int PUtsLq3Mo;
    int szsmall [PUtsLq3Mo], szlarge [PUtsLq3Mo], sz [PUtsLq3Mo];
    int IvEzkA = (997 - 997);
    int vXqZsSIvg6P = (911 - 911);
    int yrSPUbnWF3lD = (348 - 348);
    scanf ("%d", &PUtsLq3Mo);
    {
        yrSPUbnWF3lD = 0;
        while (yrSPUbnWF3lD < PUtsLq3Mo) {
            scanf ("%d", &szlarge[yrSPUbnWF3lD]);
            scanf ("%d", &szsmall[yrSPUbnWF3lD]);
            yrSPUbnWF3lD = yrSPUbnWF3lD + 1;
        };
    }
    {
        yrSPUbnWF3lD = 0;
        while (yrSPUbnWF3lD < PUtsLq3Mo) {
            if (szsmall[yrSPUbnWF3lD] <= 90 && szsmall[yrSPUbnWF3lD] >= (542 - 482) && szlarge[yrSPUbnWF3lD] <= (746 - 606) && szlarge[yrSPUbnWF3lD] >= 90) {
                sz[yrSPUbnWF3lD] = (201 - 200);
            }
            else {
                sz[yrSPUbnWF3lD] = 0;
            }
            yrSPUbnWF3lD = yrSPUbnWF3lD + 1;
        };
    }
    while (1) {
        vXqZsSIvg6P = 0;
        for (yrSPUbnWF3lD = IvEzkA; yrSPUbnWF3lD < PUtsLq3Mo; yrSPUbnWF3lD = yrSPUbnWF3lD + 1) {
            if (sz[yrSPUbnWF3lD] == 1) {
                vXqZsSIvg6P = vXqZsSIvg6P + 1;
                IvEzkA = yrSPUbnWF3lD + 1;
                if (IvEzkA == PUtsLq3Mo) {
                    break;
                }
                if (sz[IvEzkA] == 0) {
                    break;
                }
                if (vXqZsSIvg6P > maxk) {
                    maxk = vXqZsSIvg6P;
                };
            }
            else {
                continue;
            };
        }
        if (IvEzkA == PUtsLq3Mo || yrSPUbnWF3lD == PUtsLq3Mo) {
            break;
        };
    }
    printf ("%d", maxk);
    return 0;
}

