struct   patients {
    int Mo95JATW;
    char hPJ7Yf [10];
    int Qe15UJd;
};
int main () {
    struct   patients KLPrbv9 [(413 - 313)], wrdaePt [100], tqLvPc [100];
    int fvmLsS1jR, ppmPyBkGx, HRJht7iBY, FlIJgdAo6cE, DVykxeEM;
    DVykxeEM = 0;
    scanf ("%d", &fvmLsS1jR);
    for (ppmPyBkGx = 0; fvmLsS1jR > ppmPyBkGx; ppmPyBkGx++) {
        KLPrbv9[ppmPyBkGx].Mo95JATW = ppmPyBkGx;
        scanf ("%s %d", KLPrbv9[ppmPyBkGx].hPJ7Yf, &KLPrbv9[ppmPyBkGx].Qe15UJd);
    }
    FlIJgdAo6cE = 0;
    for (ppmPyBkGx = 0; ppmPyBkGx < fvmLsS1jR; ppmPyBkGx++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (KLPrbv9[ppmPyBkGx].Qe15UJd >= 60) {
            tqLvPc[DVykxeEM] = KLPrbv9[ppmPyBkGx];
            DVykxeEM = DVykxeEM +1;
        }
        else {
            wrdaePt[FlIJgdAo6cE] = KLPrbv9[ppmPyBkGx];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            FlIJgdAo6cE++;
        };
    }
    for (ppmPyBkGx = 1; DVykxeEM > ppmPyBkGx; ppmPyBkGx++) {
        for (HRJht7iBY = 0; DVykxeEM -ppmPyBkGx > HRJht7iBY; HRJht7iBY++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (tqLvPc[HRJht7iBY].Qe15UJd < tqLvPc[HRJht7iBY +1].Qe15UJd) {
                struct   patients check;
                check = tqLvPc[HRJht7iBY];
                tqLvPc[HRJht7iBY] = tqLvPc[HRJht7iBY +1];
                tqLvPc[HRJht7iBY +1] = check;
            };
        };
    }
    for (ppmPyBkGx = 0; DVykxeEM > ppmPyBkGx; ppmPyBkGx++) {
        printf ("%s\n", tqLvPc[ppmPyBkGx].hPJ7Yf);
    }
    for (ppmPyBkGx = 0; ppmPyBkGx < FlIJgdAo6cE; ppmPyBkGx++) {
        printf ("%s\n", wrdaePt[ppmPyBkGx].hPJ7Yf);
    }
    return 0;
}

