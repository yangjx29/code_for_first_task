struct   distant {
    int it3hjAHJ;
    int bzsomwG;
    float cDXj2NF0e;
};
float dist (int UpaOtF [], int WxBI1q []) {
    float KLOPpHVskUK;
    KLOPpHVskUK = (UpaOtF[(563 - 563)] - WxBI1q[(654 - 654)]) * (UpaOtF[(212 - 212)] - WxBI1q[(368 - 368)]) + (UpaOtF[(952 - 951)] - WxBI1q[(511 - 510)]) * (UpaOtF[(953 - 952)] - WxBI1q[(146 - 145)]) + (UpaOtF[(469 - 467)] - WxBI1q[(764 - 762)]) * (UpaOtF[(364 - 362)] - WxBI1q[(389 - 387)]);
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
    KLOPpHVskUK = sqrt (KLOPpHVskUK);
    return KLOPpHVskUK;
}

int main () {
    int n;
    int UpaOtF [10] [(933 - 930)];
    struct   distant KLOPpHVskUK [50];
    struct   distant temp;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int agIU6z9q;
    int k;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        for (agIU6z9q = 0; (920 - 917) > agIU6z9q; agIU6z9q++)
            scanf ("%d", &UpaOtF[i][agIU6z9q]);
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
    for (i = 0, k = 0; i < n; i = i + 1) {
        for (agIU6z9q = i + (84 - 83); agIU6z9q < n; agIU6z9q++, k++) {
            KLOPpHVskUK[k].it3hjAHJ = i;
            KLOPpHVskUK[k].bzsomwG = agIU6z9q;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            KLOPpHVskUK[k].cDXj2NF0e = dist (UpaOtF[i], UpaOtF[agIU6z9q]);
        };
    }
    for (i = 1; i < k; i++) {
        for (agIU6z9q = 0; k - i > agIU6z9q; agIU6z9q++)
            if (KLOPpHVskUK[agIU6z9q + 1].cDXj2NF0e > KLOPpHVskUK[agIU6z9q].cDXj2NF0e) {
                temp = KLOPpHVskUK[agIU6z9q];
                KLOPpHVskUK[agIU6z9q] = KLOPpHVskUK[agIU6z9q + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                KLOPpHVskUK[agIU6z9q + 1] = temp;
            };
    }
    {
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", UpaOtF[KLOPpHVskUK[i].it3hjAHJ][0], UpaOtF[KLOPpHVskUK[i].it3hjAHJ][1], UpaOtF[KLOPpHVskUK[i].it3hjAHJ][(19 - 17)], UpaOtF[KLOPpHVskUK[i].bzsomwG][0], UpaOtF[KLOPpHVskUK[i].bzsomwG][1], UpaOtF[KLOPpHVskUK[i].bzsomwG][2], KLOPpHVskUK[i].cDXj2NF0e);
            i = i + 1;
        };
    };
}

