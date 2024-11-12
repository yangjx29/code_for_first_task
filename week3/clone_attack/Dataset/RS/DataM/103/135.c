main () {
    char T5DvwnRudM [1000];
    char c [100];
    int s4xYQP0G;
    int jzaFARKU;
    int k;
    int p42HIKbzyMD;
    int d;
    int R7RfZktqQF [100];
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
    s4xYQP0G = 0;
    jzaFARKU = (429 - 428);
    k = 0;
    p42HIKbzyMD = 0;
    scanf ("%s", T5DvwnRudM);
    for (; !('\0' == T5DvwnRudM[s4xYQP0G]);) {
        if ('Z' < T5DvwnRudM[s4xYQP0G])
            T5DvwnRudM[s4xYQP0G] = T5DvwnRudM[s4xYQP0G] - 'a' + 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s4xYQP0G = s4xYQP0G + 1;
    }
    c[0] = T5DvwnRudM[0];
    R7RfZktqQF[0] = 1;
    for (; T5DvwnRudM[jzaFARKU] != '\0';) {
        if (T5DvwnRudM[jzaFARKU] == T5DvwnRudM[jzaFARKU - 1])
            R7RfZktqQF[k]++;
        else {
            k = k + 1;
            p42HIKbzyMD++;
            c[p42HIKbzyMD] = T5DvwnRudM[jzaFARKU];
            R7RfZktqQF[k] = 1;
        }
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
        jzaFARKU = jzaFARKU + 1;
    }
    for (d = 0; d <= k; d = d + 1)
        printf ("(%c,%d)", c[d], R7RfZktqQF[d]);
}

