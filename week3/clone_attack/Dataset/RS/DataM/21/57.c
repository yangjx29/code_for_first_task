int main (int argc, char *UuAZW3 []) {
    int GqaGPI, sBhYj6Qg2HVq, AvEcj7nB [300], s, j, b, c;
    double  txqXdIJYQFuR, nvjrEfWUnh [300], uSYLEsU8FKl;
    scanf ("%d", &sBhYj6Qg2HVq);
    s = 0;
    {
        GqaGPI = 0;
        while (sBhYj6Qg2HVq > GqaGPI) {
            scanf ("%d", &AvEcj7nB[GqaGPI]);
            s = s + AvEcj7nB[GqaGPI];
            GqaGPI = GqaGPI +1;
        };
    }
    txqXdIJYQFuR = (double ) s / sBhYj6Qg2HVq;
    {
        GqaGPI = 0;
        while (sBhYj6Qg2HVq > GqaGPI) {
            if (AvEcj7nB[GqaGPI] < txqXdIJYQFuR) {
                nvjrEfWUnh[GqaGPI] = txqXdIJYQFuR - AvEcj7nB[GqaGPI];
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
            else {
                nvjrEfWUnh[GqaGPI] = AvEcj7nB[GqaGPI] - txqXdIJYQFuR;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            GqaGPI = GqaGPI +1;
        };
    }
    {
        GqaGPI = 0;
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
        while (sBhYj6Qg2HVq - 1 > GqaGPI) {
            {
                j = GqaGPI +1;
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
                while (j < sBhYj6Qg2HVq) {
                    if (nvjrEfWUnh[j] > nvjrEfWUnh[GqaGPI]) {
                        uSYLEsU8FKl = nvjrEfWUnh[j];
                        nvjrEfWUnh[j] = nvjrEfWUnh[GqaGPI];
                        nvjrEfWUnh[GqaGPI] = uSYLEsU8FKl;
                        b = AvEcj7nB[j];
                        AvEcj7nB[j] = AvEcj7nB[GqaGPI];
                        AvEcj7nB[GqaGPI] = b;
                    }
                    j++;
                };
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
            GqaGPI++;
        };
    }
    if (!(nvjrEfWUnh[GqaGPI +1] != nvjrEfWUnh[GqaGPI]) && AvEcj7nB[GqaGPI] > AvEcj7nB[GqaGPI +1]) {
        c = AvEcj7nB[GqaGPI];
        AvEcj7nB[GqaGPI] = AvEcj7nB[j];
        AvEcj7nB[j] = c;
    }
    printf ("%d", AvEcj7nB[0]);
    {
        GqaGPI = 0;
        while (sBhYj6Qg2HVq - 1 > GqaGPI) {
            if (nvjrEfWUnh[GqaGPI] == nvjrEfWUnh[GqaGPI +1] && AvEcj7nB[GqaGPI] > AvEcj7nB[GqaGPI +1]) {
                c = AvEcj7nB[GqaGPI];
                AvEcj7nB[GqaGPI] = AvEcj7nB[j];
                AvEcj7nB[j] = c;
            }
            else if (nvjrEfWUnh[GqaGPI] > nvjrEfWUnh[GqaGPI +1]) {
                break;
            }
            GqaGPI++;
            printf (",%d", AvEcj7nB[GqaGPI +1]);
        };
    }
    printf ("\n");
    return 0;
}

