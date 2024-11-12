void  main () {
    int k;
    k = -(457 - 456);
    struct   monkey {
        int kn7YXo;
        struct   monkey *next;
    };
    struct   monkey OJsRLS [(425 - 125)];
    int fg2PlO6WY [(357 - 257)];
    int K4f6nvbRFEl [100];
    int MVAuzQj;
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
    int j;
    int Auc3ZJS8H;
    int YDM9fpTl21Qj;
    struct   monkey *EHgLSUd;
    struct   monkey *T0ZGmjfNK;
    do {
        k = k + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d %d", &fg2PlO6WY[k], &K4f6nvbRFEl[k]);
    }
    while (!((833 - 833) == fg2PlO6WY[k]));
    for (MVAuzQj = 0; MVAuzQj < k; MVAuzQj++) {
        {
            j = 0;
            while (fg2PlO6WY[MVAuzQj] > j) {
                OJsRLS[j].kn7YXo = j + (265 - 264);
                OJsRLS[j].next = &OJsRLS[j + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        OJsRLS[fg2PlO6WY[MVAuzQj] - 1].next = &OJsRLS[0];
        EHgLSUd = &OJsRLS[fg2PlO6WY[MVAuzQj] - 1];
        for (; (EHgLSUd->next) != EHgLSUd;) {
            YDM9fpTl21Qj = 1;
            while (YDM9fpTl21Qj < K4f6nvbRFEl[MVAuzQj]) {
                EHgLSUd = EHgLSUd->next;
                YDM9fpTl21Qj = YDM9fpTl21Qj +1;
            }
            EHgLSUd->next = (EHgLSUd->next)->next;
        }
        printf ("%d\n", EHgLSUd->kn7YXo);
    };
}

