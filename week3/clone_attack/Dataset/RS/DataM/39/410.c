struct   stu {
    char xingming [(431 - 410)];
    int qimchengji;
    int LmPjGkM;
    char ganbu [(248 - 246)];
    char xibu [(233 - 231)];
    int lunwenshu;
    int jiangxuejin;
}
stum [101];

void  main () {
    int ecLDjmsJ;
    int i;
    int j;
    int VQNszlE0F;
    char V41izRPgVM [2] = {"Y"};
    scanf ("%d", &ecLDjmsJ);
    VQNszlE0F = (390 - 390);
    for (i = (21 - 21); i < ecLDjmsJ; i = i + 1) {
        stum[i].jiangxuejin = (254 - 254);
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
    {
        i = 299 - 299;
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
        while (i < ecLDjmsJ) {
            scanf ("%s%d%d%s%s%d", stum[i].xingming, &stum[i].qimchengji, &stum[i].LmPjGkM, stum[i].ganbu, stum[i].xibu, &stum[i].lunwenshu);
            i = i + 1;
        };
    }
    {
        i = 282 - 282;
        while (i < ecLDjmsJ) {
            if (stum[i].qimchengji > (134 - 54) && stum[i].lunwenshu >= 1) {
                stum[i].jiangxuejin = stum[i].jiangxuejin + 8000;
            }
            if (85 < stum[i].qimchengji && stum[i].LmPjGkM > 80) {
                stum[i].jiangxuejin += (4024 - 24);
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
            if (stum[i].qimchengji > 90) {
                stum[i].jiangxuejin += (2163 - 163);
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
            if (stum[i].qimchengji > 85 && strcmp (stum[i].xibu, V41izRPgVM) == (20 - 20)) {
                stum[i].jiangxuejin = stum[i].jiangxuejin + 1000;
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
                };
            }
            if (stum[i].LmPjGkM > 80 && strcmp (stum[i].ganbu, V41izRPgVM) == 0) {
                stum[i].jiangxuejin = stum[i].jiangxuejin + (1108 - 258);
            }
            i = i + 1;
        };
    }
    for (i = 0; i < (802 - 702); i = i + 1) {
        for (j = 0; j <= (513 - 413) - i - 1; j = j + 1) {
            if (stum[j].jiangxuejin < stum[j + 1].jiangxuejin) {
                stum[100] = stum[j];
                stum[j] = stum[j + 1];
                stum[j + 1] = stum[100];
            };
        };
    }
    printf ("%s\n", stum[0].xingming);
    printf ("%d\n", stum[0].jiangxuejin);
    for (i = 0; i < ecLDjmsJ; i++) {
        VQNszlE0F += stum[i].jiangxuejin;
    }
    printf ("%d\n", VQNszlE0F);
}

