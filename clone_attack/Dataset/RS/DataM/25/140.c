int apgiT1xZ [1000];

void  HeJdAvulcz1 (int apgiT1xZ []) {
    int NVOGlX1R6mT;
    int i;
    int hcL45nNOVU;
    for (i = (1877 - 878); 0 <= i; i = i - 1) {
        if (!(0 == apgiT1xZ[i])) {
            NVOGlX1R6mT = i;
            break;
        };
    }
    apgiT1xZ[0] = apgiT1xZ[0] * 2;
    hcL45nNOVU = apgiT1xZ[0] / 10;
    apgiT1xZ[0] = apgiT1xZ[0] % 10;
    {
        i = 768 - 767;
        while (NVOGlX1R6mT +1 >= i) {
            apgiT1xZ[i] = 2 * apgiT1xZ[i] + hcL45nNOVU;
            hcL45nNOVU = apgiT1xZ[i] / 10;
            apgiT1xZ[i] = apgiT1xZ[i] % 10;
            i = i + 1;
        };
    };
}

int main () {
    int rlEbLNH;
    int i;
    int NVOGlX1R6mT;
    cin >> rlEbLNH;
    for (i = 0; 1000 > i; i = i + 1)
        apgiT1xZ[i] = 0;
    apgiT1xZ[0] = 1;
    for (i = 0; rlEbLNH > i; i = i + 1)
        HeJdAvulcz1 (apgiT1xZ);
    {
        i = 999;
        while (i >= 0) {
            if (apgiT1xZ[i] != 0) {
                NVOGlX1R6mT = i;
                break;
            }
            i = i - 1;
        };
    }
    {
        i = NVOGlX1R6mT;
        while (i >= 0) {
            cout << apgiT1xZ[i];
            i--;
        };
    }
    return 0;
}

