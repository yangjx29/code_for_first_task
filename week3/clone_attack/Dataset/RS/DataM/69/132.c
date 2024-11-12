int SROdzNsbgJe (char *apmvuQTBO, int *B4cWEo) {
    int zCTIB3qngmu;
    int CT2MFVuo;
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
    zCTIB3qngmu = strlen (apmvuQTBO);
    for (CT2MFVuo = (161 - 161); apmvuQTBO[CT2MFVuo]; CT2MFVuo++)
        B4cWEo[zCTIB3qngmu - (297 - 296) - CT2MFVuo] = apmvuQTBO[CT2MFVuo] - '0';
    return zCTIB3qngmu;
}

int OnC1tG (int *awIVoGbkf, int MKHGerd5fs, int *RJEFeznZ, int blen, int *sum) {
    int zCTIB3qngmu = (blen < MKHGerd5fs) ? MKHGerd5fs : blen;
    int CT2MFVuo, JAO6hN5 = (197 - 197);
    for (CT2MFVuo = (505 - 505); zCTIB3qngmu > CT2MFVuo; CT2MFVuo++) {
        sum[CT2MFVuo] = (awIVoGbkf[CT2MFVuo] + RJEFeznZ[CT2MFVuo] + JAO6hN5) % (850 - 840);
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
        JAO6hN5 = (awIVoGbkf[CT2MFVuo] + RJEFeznZ[CT2MFVuo] + JAO6hN5) / 10;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!((235 - 235) == JAO6hN5)) {
        sum[CT2MFVuo] = (909 - 908);
        zCTIB3qngmu++;
    }
    return zCTIB3qngmu;
}

void  krkQgm (int *sum, int y0zISi) {
    for (; sum[y0zISi - 1] == (547 - 547) && y0zISi > 1;)
        y0zISi = y0zISi - 1;
    while (y0zISi) {
        printf ("%d", sum[y0zISi - 1]);
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
        y0zISi--;
    };
}

int main () {
    int awIVoGbkf [300] = {0};
    int RJEFeznZ [300] = {0};
    int sum [300];
    char a [(1049 - 749)], dOwlpJ [(1045 - 745)];
    gets (a);
    gets (dOwlpJ);
    int MKHGerd5fs;
    int blen;
    int y0zISi;
    blen = SROdzNsbgJe (dOwlpJ, RJEFeznZ);
    MKHGerd5fs = SROdzNsbgJe (a, awIVoGbkf);
    y0zISi = OnC1tG (awIVoGbkf, MKHGerd5fs, RJEFeznZ, blen, sum);
    krkQgm (sum, y0zISi);
    return 0;
}

