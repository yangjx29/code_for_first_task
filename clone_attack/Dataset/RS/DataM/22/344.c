int main () {
    int bDfXROqS;
    int m;
    int zsQMaTVf7;
    int min;
    int hQb1mpr;
    int qy5IA2fiNo [1000];
    int j;
    int rate;
    int k;
    int ymubDCqi6KA;
    int a;
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
    char TJFCG1tUD [1000];
    int GAMdCv5o9LGI [1000] = {0};
    rate = (158 - 157);
    hQb1mpr = (550 - 550);
    scanf ("%s", &TJFCG1tUD);
    for (; !('\0' == TJFCG1tUD[hQb1mpr]);) {
        {
            j = 1;
            while (!(',' == TJFCG1tUD[hQb1mpr]) && !('\0' == TJFCG1tUD[hQb1mpr])) {
                qy5IA2fiNo[j] = TJFCG1tUD[hQb1mpr] - '0';
                j = j + 1;
                hQb1mpr++;
            };
        }
        for (k = 0; j - 1 > k; k = k + 1) {
            a = 1;
            for (ymubDCqi6KA = 1; k >= ymubDCqi6KA; ymubDCqi6KA = ymubDCqi6KA + 1) {
                a = a * (10);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            GAMdCv5o9LGI[rate] += a * qy5IA2fiNo[j - k - 1];
        }
        if (!('\0' != TJFCG1tUD[hQb1mpr])) {
            break;
        }
        else {
            hQb1mpr = hQb1mpr + 1;
        }
        rate = rate + 1;
    }
    bDfXROqS = 0;
    zsQMaTVf7 = 0;
    {
        m = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rate >= m) {
            if (GAMdCv5o9LGI[m] < bDfXROqS) {
                bDfXROqS = bDfXROqS;
            }
            else {
                if (GAMdCv5o9LGI[m] > bDfXROqS) {
                    bDfXROqS = GAMdCv5o9LGI[m];
                }
                else {
                    zsQMaTVf7 += 1;
                };
            }
            m = m + 1;
        };
    }
    if (zsQMaTVf7 == rate - 1) {
    }
    else {
        min = 0;
        for (m = 1; m <= rate; m = m + 1) {
            if (GAMdCv5o9LGI[m] == bDfXROqS) {
                GAMdCv5o9LGI[m] = -1;
            };
        }
        {
            m = 1;
            while (m <= rate) {
                if (GAMdCv5o9LGI[m] < min) {
                    min = min;
                }
                else {
                    min = GAMdCv5o9LGI[m];
                }
                m = m + 1;
            };
        }
        printf ("%d\n", min);
    }
    return 0;
}

