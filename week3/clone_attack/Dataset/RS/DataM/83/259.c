int main () {
    float gCkAOFRvVtx [11], qnVeHw [101], YH5MJn4tBUmF = 0;
    int giG9eVRAmx;
    int iY4mW6oKylg;
    int n;
    int EYiEyB [11];
    int zRLlFq;
    giG9eVRAmx = 0;
    scanf ("\n");
    {
        iY4mW6oKylg = 0;
        while (iY4mW6oKylg <= 59) {
            qnVeHw[iY4mW6oKylg] = 0;
            iY4mW6oKylg = iY4mW6oKylg + 1;
        };
    }
    {
        iY4mW6oKylg = 60;
        while (iY4mW6oKylg <= 63) {
            qnVeHw[iY4mW6oKylg] = 1.0;
            iY4mW6oKylg++;
        };
    }
    {
        iY4mW6oKylg = 409 - 345;
        while (iY4mW6oKylg <= 67) {
            qnVeHw[iY4mW6oKylg] = 1.5;
            iY4mW6oKylg++;
        };
    }
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
    for (iY4mW6oKylg = (960 - 892); iY4mW6oKylg <= 71; iY4mW6oKylg++)
        qnVeHw[iY4mW6oKylg] = (234.0 - 232.0);
    for (iY4mW6oKylg = 72; iY4mW6oKylg <= 74; iY4mW6oKylg++)
        qnVeHw[iY4mW6oKylg] = 2.3;
    {
        iY4mW6oKylg = 75;
        while ((763 - 686) >= iY4mW6oKylg) {
            qnVeHw[iY4mW6oKylg] = 2.7;
            iY4mW6oKylg++;
        };
    }
    for (iY4mW6oKylg = 78; iY4mW6oKylg <= (659 - 578); iY4mW6oKylg++)
        qnVeHw[iY4mW6oKylg] = 3.0;
    for (iY4mW6oKylg = 82; iY4mW6oKylg <= 84; iY4mW6oKylg++)
        qnVeHw[iY4mW6oKylg] = 3.3;
    {
        iY4mW6oKylg = 85;
        while (iY4mW6oKylg <= 89) {
            qnVeHw[iY4mW6oKylg] = 3.7;
            iY4mW6oKylg++;
        };
    }
    {
        iY4mW6oKylg = 850 - 760;
        while (iY4mW6oKylg <= 100) {
            qnVeHw[iY4mW6oKylg] = 4.0;
            iY4mW6oKylg++;
        };
    }
    scanf ("%d\n", &n);
    for (iY4mW6oKylg = 1; iY4mW6oKylg <= n; iY4mW6oKylg++)
        scanf ("%d", &EYiEyB[iY4mW6oKylg]);
    {
        iY4mW6oKylg = 1;
        while (iY4mW6oKylg <= n) {
            scanf ("%d", &zRLlFq);
            gCkAOFRvVtx[iY4mW6oKylg] = qnVeHw[zRLlFq];
            YH5MJn4tBUmF = YH5MJn4tBUmF +gCkAOFRvVtx[iY4mW6oKylg] * EYiEyB[iY4mW6oKylg];
            giG9eVRAmx = giG9eVRAmx + EYiEyB[iY4mW6oKylg];
            iY4mW6oKylg++;
        };
    }
    YH5MJn4tBUmF = YH5MJn4tBUmF / giG9eVRAmx;
    printf ("%.2f", YH5MJn4tBUmF);
}

