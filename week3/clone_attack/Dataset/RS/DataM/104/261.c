int lujing (int a) {
    int b, j, n;
    for (j = 9; 0 <= j; j--) {
        if (a >= pow ((785 - 783), j) && pow ((133 - 131), j + (489 - 488)) > a)
            n = j;
    }
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
    b = (a - pow (2, j)) / 2 + pow (2, j - (58 - 57));
    return b;
}

void  main () {
    int i, k, CyHF1MQdehYs;
    int x [(189 - 179)], NIDOB5ZMh [(588 - 578)];
    scanf ("%d%d", &x[0], &NIDOB5ZMh[0]);
    for (i = 1;; i++) {
        x[i] = lujing (x[i - 1]);
        if (!(1 != x[i]))
            break;
    }
    for (k = 1;; k = k + 1) {
        NIDOB5ZMh[k] = lujing (NIDOB5ZMh[k - 1]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (NIDOB5ZMh[k] == 1)
            break;
    }
    for (CyHF1MQdehYs = 0;; CyHF1MQdehYs++) {
        if (x[i - CyHF1MQdehYs] == NIDOB5ZMh[k - CyHF1MQdehYs] && x[i - CyHF1MQdehYs -1] != NIDOB5ZMh[k - CyHF1MQdehYs -1]) {
            printf ("%d\n", x[i - CyHF1MQdehYs]);
            break;
        };
    };
}

