int g6dWJT (int dKxa2c) {
    int rWjgVDMcSGY, lIDsdupiUAb, r1sSaYMqygO, ESUX5GOi;
    if (dKxa2c == (776 - 775)) {
        ESUX5GOi = 1;
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
    else {
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
        if (dKxa2c == 2) {
            ESUX5GOi = 1;
        }
        else {
            lIDsdupiUAb = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rWjgVDMcSGY = 1;
            for (r1sSaYMqygO = (746 - 743); r1sSaYMqygO <= dKxa2c; r1sSaYMqygO++) {
                ESUX5GOi = rWjgVDMcSGY + lIDsdupiUAb;
                rWjgVDMcSGY = lIDsdupiUAb;
                lIDsdupiUAb = ESUX5GOi;
            };
        };
    }
    return ESUX5GOi;
}

int main () {
    int rWjgVDMcSGY [10000], r1sSaYMqygO, dKxa2c;
    scanf ("%d", &dKxa2c);
    for (r1sSaYMqygO = 1; r1sSaYMqygO <= dKxa2c; r1sSaYMqygO++) {
        scanf ("%d", &rWjgVDMcSGY[r1sSaYMqygO]);
    }
    for (r1sSaYMqygO = 1; r1sSaYMqygO <= dKxa2c; r1sSaYMqygO++) {
        printf ("%d\n", g6dWJT (rWjgVDMcSGY[r1sSaYMqygO]));
    }
    return 0;
}

