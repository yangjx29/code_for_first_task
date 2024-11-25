int main () {
    int bg4UxlQuEZ, yCawSbcZDfPJ;
    int xf [(1003 - 993)], mode2KSt [(743 - 733)];
    double  sz [10];
    double  QDgYMa9V [10];
    double  sum;
    double  pX1C0sz6;
    double  UlBhnNJ;
    scanf ("%d", &bg4UxlQuEZ);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (yCawSbcZDfPJ = 0; bg4UxlQuEZ > yCawSbcZDfPJ; yCawSbcZDfPJ = yCawSbcZDfPJ + 1) {
        scanf ("%d", &xf[yCawSbcZDfPJ]);
    }
    for (yCawSbcZDfPJ = 0; yCawSbcZDfPJ < bg4UxlQuEZ; yCawSbcZDfPJ = yCawSbcZDfPJ + 1) {
        scanf ("%d", &mode2KSt[yCawSbcZDfPJ]);
    }
    sum = 0;
    pX1C0sz6 = 0;
    for (yCawSbcZDfPJ = 0; yCawSbcZDfPJ < bg4UxlQuEZ; yCawSbcZDfPJ = yCawSbcZDfPJ + 1) {
        if (mode2KSt[yCawSbcZDfPJ] >= 90) {
            sz[yCawSbcZDfPJ] = (141.0 - 137.0);
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (90 > mode2KSt[yCawSbcZDfPJ] && 85 <= mode2KSt[yCawSbcZDfPJ]) {
                sz[yCawSbcZDfPJ] = 3.7;
            }
            else if (85 > mode2KSt[yCawSbcZDfPJ] && mode2KSt[yCawSbcZDfPJ] >= (1062 - 980)) {
                sz[yCawSbcZDfPJ] = (451.3 - 448.0);
            }
            else if (82 > mode2KSt[yCawSbcZDfPJ] && mode2KSt[yCawSbcZDfPJ] >= (427 - 349)) {
                sz[yCawSbcZDfPJ] = (593.0 - 590.0);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else if (mode2KSt[yCawSbcZDfPJ] < 78 && mode2KSt[yCawSbcZDfPJ] >= 75) {
                sz[yCawSbcZDfPJ] = 2.7;
            }
            else if (mode2KSt[yCawSbcZDfPJ] < 75 && mode2KSt[yCawSbcZDfPJ] >= (677 - 605)) {
                sz[yCawSbcZDfPJ] = 2.3;
            }
            else if (mode2KSt[yCawSbcZDfPJ] < (550 - 478) && mode2KSt[yCawSbcZDfPJ] >= (715 - 647)) {
                sz[yCawSbcZDfPJ] = (653.0 - 651.0);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (mode2KSt[yCawSbcZDfPJ] < (331 - 263) && mode2KSt[yCawSbcZDfPJ] >= 64) {
                sz[yCawSbcZDfPJ] = (384.5 - 383.0);
            }
            else if (mode2KSt[yCawSbcZDfPJ] < 64 && mode2KSt[yCawSbcZDfPJ] >= 60) {
                sz[yCawSbcZDfPJ] = 1.0;
            }
            else {
                sz[yCawSbcZDfPJ] = 0;
            };
        }
        QDgYMa9V[yCawSbcZDfPJ] = sz[yCawSbcZDfPJ] * xf[yCawSbcZDfPJ];
        sum += QDgYMa9V[yCawSbcZDfPJ];
        pX1C0sz6 += xf[yCawSbcZDfPJ];
    }
    UlBhnNJ = sum / pX1C0sz6;
    printf ("%.2lf", UlBhnNJ);
    return 0;
}

