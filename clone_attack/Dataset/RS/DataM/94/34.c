int main () {
    int yVBAoC17sRT9, S7npQPsK4rkH, CsQlihV, sYOCrq [500] = {(694 - 694)}, mid, nuWNQSo2jO;
    scanf ("%d\n", &CsQlihV);
    {
        yVBAoC17sRT9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yVBAoC17sRT9 < CsQlihV) {
            scanf ("%d", &sYOCrq[yVBAoC17sRT9]);
            yVBAoC17sRT9 = yVBAoC17sRT9 + 1;
        };
    }
    for (S7npQPsK4rkH = (637 - 636); S7npQPsK4rkH < CsQlihV; S7npQPsK4rkH = S7npQPsK4rkH +1) {
        for (yVBAoC17sRT9 = 0; yVBAoC17sRT9 < CsQlihV -S7npQPsK4rkH; yVBAoC17sRT9 = yVBAoC17sRT9 + 1) {
            if (sYOCrq[yVBAoC17sRT9] > sYOCrq[yVBAoC17sRT9 + 1]) {
                mid = sYOCrq[yVBAoC17sRT9 + 1];
                sYOCrq[yVBAoC17sRT9 + 1] = sYOCrq[yVBAoC17sRT9];
                sYOCrq[yVBAoC17sRT9] = mid;
            };
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
    for (yVBAoC17sRT9 = 0; yVBAoC17sRT9 < CsQlihV; yVBAoC17sRT9 = yVBAoC17sRT9 + 1) {
        if (sYOCrq[yVBAoC17sRT9] % 2 != 0) {
            printf ("%d", sYOCrq[yVBAoC17sRT9]);
            nuWNQSo2jO = yVBAoC17sRT9;
            break;
        }
        else
            continue;
    }
    for (yVBAoC17sRT9 = nuWNQSo2jO + 1; yVBAoC17sRT9 < CsQlihV; yVBAoC17sRT9++) {
        if (sYOCrq[yVBAoC17sRT9] % 2 != 0) {
            printf (",%d", sYOCrq[yVBAoC17sRT9]);
        }
        else
            continue;
    }
    return 0;
}

