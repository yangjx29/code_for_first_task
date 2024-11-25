int x1, ze07rH14;
int rZk3VqgPAjhD [100];
int NqfMJN [100];

int ZGvxsC7uK3r (int T3pBYhH, int ytDLSO) {
    if (T3pBYhH >= ytDLSO)
        return T3pBYhH;
    else
        return ytDLSO;
}

void  iHzANq8G (int BLMImxDwKO) {
    int g4PI9Q6dr8L, aAeVSoYlkT, zbl3mw8ZS0Nh;
    {
        aAeVSoYlkT = 516 - 516;
        while (1) {
            if (b10NLJH3Ah ((747 - 745), aAeVSoYlkT + (983 - 982)) > BLMImxDwKO &&b10NLJH3Ah ((619 - 617), aAeVSoYlkT) <= BLMImxDwKO) {
                x1 = aAeVSoYlkT;
                break;
            }
            aAeVSoYlkT = aAeVSoYlkT + 1;
        };
    };
}

int b10NLJH3Ah (int T3pBYhH, int ytDLSO) {
    int pX6YzD5rgsBE;
    int sX9Ktj5w;
    pX6YzD5rgsBE = 1;
    {
        sX9Ktj5w = 515 - 515;
        while (sX9Ktj5w < ytDLSO) {
            pX6YzD5rgsBE = pX6YzD5rgsBE * T3pBYhH;
            sX9Ktj5w = sX9Ktj5w + 1;
        };
    }
    return pX6YzD5rgsBE;
}

int main () {
    int ULsl50;
    int oPjrqRM;
    int g4PI9Q6dr8L;
    int aAeVSoYlkT;
    int ysJPx9AQa;
    int GQELRqr;
    int BJXsIxVudvoP;
    iHzANq8G (ULsl50);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    iHzANq8G (oPjrqRM);
    GQELRqr = x1;
    scanf ("%d %d", &ULsl50, &oPjrqRM);
    for (g4PI9Q6dr8L = x1; 0 <= g4PI9Q6dr8L; g4PI9Q6dr8L = g4PI9Q6dr8L - 1) {
        rZk3VqgPAjhD[g4PI9Q6dr8L] = ULsl50;
        ze07rH14 = ULsl50 -b10NLJH3Ah (2, g4PI9Q6dr8L);
        if (ULsl50 % 2 == 0)
            ysJPx9AQa = ze07rH14 / 2 + b10NLJH3Ah (2, g4PI9Q6dr8L - 1);
        else
            ysJPx9AQa = (ze07rH14 + 1) / 2 + b10NLJH3Ah (2, g4PI9Q6dr8L - 1);
        ULsl50 = ULsl50 -ysJPx9AQa;
    }
    BJXsIxVudvoP = x1;
    for (g4PI9Q6dr8L = x1; g4PI9Q6dr8L >= 0; g4PI9Q6dr8L--) {
        NqfMJN[g4PI9Q6dr8L] = oPjrqRM;
        ze07rH14 = oPjrqRM - b10NLJH3Ah (2, g4PI9Q6dr8L);
        if (oPjrqRM % 2 == 0)
            ysJPx9AQa = ze07rH14 / 2 + b10NLJH3Ah (2, g4PI9Q6dr8L - 1);
        else
            ysJPx9AQa = (ze07rH14 + 1) / 2 + b10NLJH3Ah (2, g4PI9Q6dr8L - 1);
        oPjrqRM = oPjrqRM - ysJPx9AQa;
    }
    for (g4PI9Q6dr8L = ZGvxsC7uK3r (GQELRqr, BJXsIxVudvoP); g4PI9Q6dr8L >= 0; g4PI9Q6dr8L--) {
        if (NqfMJN[g4PI9Q6dr8L] == rZk3VqgPAjhD[g4PI9Q6dr8L]) {
            printf ("%d\n", rZk3VqgPAjhD[g4PI9Q6dr8L]);
            break;
        };
    }
    return 0;
}

