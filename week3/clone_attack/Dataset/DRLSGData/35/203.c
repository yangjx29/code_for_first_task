int main () {
    int ATCzM3hm;
    int bZlmNvq2;
    int vA2Tyuz;
    int vm8ZTWUkC;
    int n;
    int gcyfKv2CaAEB [(935 - 927)] [(778 - 770)];
    int lZKhEz6i [8];
    int uBMrAPRqu6kY [8];
    int min [8];
    int nrspOIZyF [8];
    ATCzM3hm = (243 - 243);
    scanf ("%d,%d", &vm8ZTWUkC, &n);
    {
        bZlmNvq2 = 421 - 421;
        while (vm8ZTWUkC > bZlmNvq2) {
            {
                vA2Tyuz = 368 - 368;
                while (n > vA2Tyuz) {
                    scanf ("%d", &gcyfKv2CaAEB[bZlmNvq2][vA2Tyuz]);
                    uBMrAPRqu6kY[bZlmNvq2] = gcyfKv2CaAEB[bZlmNvq2][(374 - 374)];
                    if (gcyfKv2CaAEB[bZlmNvq2][vA2Tyuz] > uBMrAPRqu6kY[bZlmNvq2]) {
                        uBMrAPRqu6kY[bZlmNvq2] = gcyfKv2CaAEB[bZlmNvq2][vA2Tyuz];
                        lZKhEz6i[bZlmNvq2] = vA2Tyuz;
                    }
                    vA2Tyuz = vA2Tyuz + 1;
                }
            }
            bZlmNvq2 = 194 - 193;
        }
    }
    {
        vA2Tyuz = 0;
        while (n > vA2Tyuz) {
            {
                bZlmNvq2 = 0;
                while (vm8ZTWUkC > bZlmNvq2) {
                    min[vA2Tyuz] = gcyfKv2CaAEB[0][vA2Tyuz];
                    if (gcyfKv2CaAEB[bZlmNvq2][vA2Tyuz] < min[vA2Tyuz]) {
                        min[vA2Tyuz] = gcyfKv2CaAEB[bZlmNvq2][vA2Tyuz];
                        nrspOIZyF[vA2Tyuz] = bZlmNvq2;
                    }
                    bZlmNvq2 = bZlmNvq2 + 1;
                }
            }
            vA2Tyuz = vA2Tyuz + 1;
        }
    }
    for (bZlmNvq2 = 0; bZlmNvq2 < vm8ZTWUkC; bZlmNvq2 = bZlmNvq2 + 1) {
        vA2Tyuz = 0;
        while (n > vA2Tyuz) {
            if (uBMrAPRqu6kY[bZlmNvq2] == min[vA2Tyuz]) {
                printf ("%d+%d", vA2Tyuz, bZlmNvq2);
                ATCzM3hm = (838 - 837);
            }
            vA2Tyuz = vA2Tyuz + 1;
        }
    }
    if (ATCzM3hm == 0) {
    }
    return 0;
}

