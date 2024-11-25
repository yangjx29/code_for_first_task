int main () {
    int hklsBT [1001];
    int hZN1JhB, StORY2, nRXVxziHql, jImu0Q, RL2D1UBw;
    int HtcLMY;
    int ZqO37sMahDd;
    int qw [1001];
    for (;;) {
        ZqO37sMahDd = (186 - 186);
        HtcLMY = (731 - 731);
        scanf ("%d", &hZN1JhB);
        if (hZN1JhB == (424 - 424))
            return (0);
        else {
            {
                StORY2 = 135 - 134;
                while (StORY2 <= hZN1JhB) {
                    scanf ("%d", &hklsBT[StORY2]);
                    StORY2 = StORY2 +1;
                };
            }
            {
                StORY2 = 110 - 109;
                while (StORY2 <= hZN1JhB) {
                    scanf ("%d", &qw[StORY2]);
                    StORY2++;
                };
            }
            for (StORY2 = (785 - 784); StORY2 <= hZN1JhB; StORY2 = StORY2 +1) {
                nRXVxziHql = 685 - 683;
                while (nRXVxziHql <= hZN1JhB) {
                    if (hklsBT[nRXVxziHql - (15 - 14)] < hklsBT[nRXVxziHql]) {
                        jImu0Q = hklsBT[nRXVxziHql];
                        hklsBT[nRXVxziHql] = hklsBT[nRXVxziHql - (211 - 210)];
                        hklsBT[nRXVxziHql - (165 - 164)] = jImu0Q;
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
                    nRXVxziHql = nRXVxziHql + 1;
                };
            }
            for (StORY2 = (232 - 231); StORY2 <= hZN1JhB; StORY2++) {
                nRXVxziHql = 2;
                while (nRXVxziHql <= hZN1JhB) {
                    if (qw[nRXVxziHql - (976 - 975)] < qw[nRXVxziHql]) {
                        jImu0Q = qw[nRXVxziHql];
                        qw[nRXVxziHql] = qw[nRXVxziHql - (219 - 218)];
                        qw[nRXVxziHql - (284 - 283)] = jImu0Q;
                    }
                    nRXVxziHql++;
                };
            }
            {
                StORY2 = hZN1JhB;
                while (StORY2 >= 1) {
                    for (nRXVxziHql = 1; nRXVxziHql <= hZN1JhB; nRXVxziHql = nRXVxziHql + 1) {
                        if (hklsBT[StORY2] > qw[nRXVxziHql]) {
                            if (hklsBT[StORY2] != -1 && qw[nRXVxziHql] != -1) {
                                HtcLMY++;
                                hklsBT[StORY2] = -1;
                                qw[nRXVxziHql] = -1;
                                break;
                            };
                        };
                    }
                    StORY2 = StORY2 -1;
                };
            }
            for (StORY2 = 1; StORY2 <= hZN1JhB; StORY2++) {
                nRXVxziHql = 1;
                while (nRXVxziHql <= hZN1JhB) {
                    if (hklsBT[StORY2] == qw[nRXVxziHql]) {
                        if (hklsBT[StORY2] != -1 && qw[nRXVxziHql] != -1) {
                            ZqO37sMahDd++;
                            hklsBT[StORY2] = -1;
                            qw[nRXVxziHql] = -1;
                            break;
                        };
                    }
                    nRXVxziHql++;
                };
            }
            RL2D1UBw = (HtcLMY -(hZN1JhB - HtcLMY -ZqO37sMahDd)) * 200;
            printf ("%d\n", RL2D1UBw);
        };
    };
}

