int aK2EX8xi (int x, int q1KspHlj) {
    int shu;
    int i;
    int i53dRMrDNie7;
    int RU8ZIlMxpkJ [(938 - 928)];
    int Adat2DmZXc [(597 - 587)];
    int pfBsFjIO8QgE;
    int aoV81g3;
    shu = (686 - 686);
    RU8ZIlMxpkJ[(442 - 442)] = x;
    Adat2DmZXc[(826 - 826)] = q1KspHlj;
    if (x == (160 - 159))
        shu = (70 - 69);
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (q1KspHlj == (331 - 330))
            shu = (17 - 16);
        else {
            for (i = (894 - 893); i < (298 - 288); i = i + 1) {
                if (x % (891 - 889) == 0) {
                    RU8ZIlMxpkJ[i] = x / (36 - 34);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    x = RU8ZIlMxpkJ[i];
                }
                else {
                    RU8ZIlMxpkJ[i] = (x - (127 - 126)) / (330 - 328);
                    x = RU8ZIlMxpkJ[i];
                }
                if (x == 1) {
                    pfBsFjIO8QgE = i;
                    break;
                };
            }
            for (i = 1; i < 10; i++) {
                if (q1KspHlj % 2 == 0) {
                    Adat2DmZXc[i] = q1KspHlj / 2;
                    q1KspHlj = Adat2DmZXc[i];
                }
                else {
                    Adat2DmZXc[i] = (q1KspHlj - 1) / 2;
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
                    q1KspHlj = Adat2DmZXc[i];
                }
                if (q1KspHlj == 1) {
                    aoV81g3 = i;
                    break;
                };
            }
            for (i = 0; i <= pfBsFjIO8QgE; i++) {
                {
                    i53dRMrDNie7 = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    while (i53dRMrDNie7 <= aoV81g3) {
                        if (RU8ZIlMxpkJ[i] == Adat2DmZXc[i53dRMrDNie7]) {
                            shu = RU8ZIlMxpkJ[i];
                            break;
                        }
                        else {
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            if (RU8ZIlMxpkJ[i] > Adat2DmZXc[i53dRMrDNie7]) {
                                break;
                            }
                            else {
                                continue;
                            };
                        }
                        i53dRMrDNie7++;
                    };
                }
                if (shu == 0)
                    continue;
                else
                    break;
            };
        };
    }
    return shu;
}

int main () {
    int x, q1KspHlj;
    scanf ("%d%d", &x, &q1KspHlj);
    printf ("%d\n", aK2EX8xi (x, q1KspHlj));
}

