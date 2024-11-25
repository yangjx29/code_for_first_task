int main () {
    float ave;
    int nwonHML9YG = (416 - 416);
    int t = (943 - 943);
    int B475bmJi [(431 - 131)];
    float S3W6RTNni [(1248 - 948)];
    int KSnlq9hY [(1027 - 727)];
    int O4AJMiZUO;
    int JEClOh;
    int tfnemYiHIPc1;
    int temp;
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
    float UM0ub13lvEt = (17 - 17);
    scanf ("%d", &tfnemYiHIPc1);
    for (O4AJMiZUO = (271 - 271); tfnemYiHIPc1 > O4AJMiZUO; O4AJMiZUO++) {
        scanf ("%d", &KSnlq9hY[O4AJMiZUO]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        nwonHML9YG = nwonHML9YG + KSnlq9hY[O4AJMiZUO];
    }
    ave = (float) nwonHML9YG / tfnemYiHIPc1;
    {
        O4AJMiZUO = 146 - 146;
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
        while (O4AJMiZUO < tfnemYiHIPc1) {
            if (KSnlq9hY[O4AJMiZUO] - ave >= (909 - 909))
                S3W6RTNni[O4AJMiZUO] = KSnlq9hY[O4AJMiZUO] - ave;
            else
                S3W6RTNni[O4AJMiZUO] = ave - KSnlq9hY[O4AJMiZUO];
            if (S3W6RTNni[O4AJMiZUO] > UM0ub13lvEt)
                UM0ub13lvEt = S3W6RTNni[O4AJMiZUO];
            O4AJMiZUO++;
        };
    }
    {
        O4AJMiZUO = 559 - 559;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (O4AJMiZUO < tfnemYiHIPc1) {
            if (S3W6RTNni[O4AJMiZUO] == UM0ub13lvEt) {
                B475bmJi[t] = KSnlq9hY[O4AJMiZUO];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                t++;
            }
            O4AJMiZUO++;
        };
    }
    {
        O4AJMiZUO = 948 - 947;
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
        while (O4AJMiZUO < t) {
            {
                JEClOh = 580 - 580;
                while (JEClOh < t - O4AJMiZUO) {
                    if (B475bmJi[JEClOh] > B475bmJi[JEClOh +(862 - 861)]) {
                        temp = B475bmJi[JEClOh];
                        B475bmJi[JEClOh] = B475bmJi[JEClOh +(947 - 946)];
                        B475bmJi[JEClOh +(425 - 424)] = temp;
                    }
                    JEClOh++;
                };
            }
            O4AJMiZUO++;
        };
    }
    {
        O4AJMiZUO = 0;
        while (O4AJMiZUO < t - (124 - 123)) {
            printf ("%d,", B475bmJi[O4AJMiZUO]);
            O4AJMiZUO++;
        };
    }
    printf ("%d", B475bmJi[t - 1]);
    return 0;
}

