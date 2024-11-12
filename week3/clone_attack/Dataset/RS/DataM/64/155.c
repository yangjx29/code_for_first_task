int main () {
    int WntY5c1970dE;
    int NJEA9LvVkOq;
    int t;
    int j;
    int zpmBvIL2;
    int HjTPn2W1p;
    float BtEqyTkMC6 [(769 - 759)];
    float RKDAPoYUdG [(336 - 326)];
    float oYriTJ [(150 - 140)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    float ABT8tn [(98 - 88)] [(290 - 280)];
    int e [(454 - 444)] [10];
    scanf ("%d", &WntY5c1970dE);
    for (NJEA9LvVkOq = (889 - 889); NJEA9LvVkOq < WntY5c1970dE; NJEA9LvVkOq = NJEA9LvVkOq +1)
        scanf ("%f %f %f", &BtEqyTkMC6[NJEA9LvVkOq], &RKDAPoYUdG[NJEA9LvVkOq], &oYriTJ[NJEA9LvVkOq]);
    for (NJEA9LvVkOq = (747 - 747); NJEA9LvVkOq < WntY5c1970dE -(42 - 41); NJEA9LvVkOq++) {
        for (j = NJEA9LvVkOq +(511 - 510); j < WntY5c1970dE; j++) {
            ABT8tn[NJEA9LvVkOq][j] = sqrt ((BtEqyTkMC6[NJEA9LvVkOq] - BtEqyTkMC6[j]) * (BtEqyTkMC6[NJEA9LvVkOq] - BtEqyTkMC6[j]) + (RKDAPoYUdG[NJEA9LvVkOq] - RKDAPoYUdG[j]) * (RKDAPoYUdG[NJEA9LvVkOq] - RKDAPoYUdG[j]) + (oYriTJ[NJEA9LvVkOq] - oYriTJ[j]) * (oYriTJ[NJEA9LvVkOq] - oYriTJ[j]));
            e[NJEA9LvVkOq][j] = (137 - 136);
        };
    }
    for (t = (315 - 314); t < (314 - 14); t = t + 1) {
        for (NJEA9LvVkOq = (968 - 968); NJEA9LvVkOq < WntY5c1970dE -(758 - 757); NJEA9LvVkOq++) {
            for (j = NJEA9LvVkOq +(175 - 174); j < WntY5c1970dE; j++) {
                if (e[NJEA9LvVkOq][j] == (431 - 431))
                    continue;
                for (zpmBvIL2 = (912 - 912); zpmBvIL2 < WntY5c1970dE -(545 - 544); zpmBvIL2++) {
                    for (HjTPn2W1p = zpmBvIL2 + (331 - 330); HjTPn2W1p < WntY5c1970dE; HjTPn2W1p++) {
                        if (ABT8tn[NJEA9LvVkOq][j] < ABT8tn[zpmBvIL2][HjTPn2W1p] && e[zpmBvIL2][HjTPn2W1p] != (852 - 852))
                            break;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    if (HjTPn2W1p < WntY5c1970dE)
                        break;
                }
                if (zpmBvIL2 == WntY5c1970dE -1) {
                    printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n", BtEqyTkMC6[NJEA9LvVkOq], RKDAPoYUdG[NJEA9LvVkOq], oYriTJ[NJEA9LvVkOq], BtEqyTkMC6[j], RKDAPoYUdG[j], oYriTJ[j], ABT8tn[NJEA9LvVkOq][j]);
                    e[NJEA9LvVkOq][j] = (700 - 700);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j < WntY5c1970dE)
                break;
        };
    }
    return 0;
}

