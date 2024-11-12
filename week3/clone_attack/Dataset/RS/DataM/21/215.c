main () {
    float DPKWLO [300], b [300], QmNekpyIJg = (958 - 958), BQthCFycS, wF3zUlVeow, Xftj4r2dBg, mmIekvwY4LDc;
    int KbANiqK6, qks3zgVYT6, mS8T5VmrhgCM;
    scanf ("%d", &KbANiqK6);
    for (qks3zgVYT6 = 0; KbANiqK6 > qks3zgVYT6; qks3zgVYT6 = qks3zgVYT6 + 1) {
        scanf ("%f", &DPKWLO[qks3zgVYT6]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        QmNekpyIJg = QmNekpyIJg +DPKWLO[qks3zgVYT6];
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
    BQthCFycS = QmNekpyIJg / KbANiqK6;
    for (qks3zgVYT6 = 0; qks3zgVYT6 < KbANiqK6; qks3zgVYT6 = qks3zgVYT6 + 1) {
        wF3zUlVeow = DPKWLO[qks3zgVYT6] - BQthCFycS;
        if (0 <= wF3zUlVeow)
            b[qks3zgVYT6] = wF3zUlVeow;
        else
            b[qks3zgVYT6] = -wF3zUlVeow;
    }
    for (qks3zgVYT6 = 0; KbANiqK6 -1 > qks3zgVYT6; qks3zgVYT6 = qks3zgVYT6 + 1) {
        mS8T5VmrhgCM = qks3zgVYT6 + 1;
        while (KbANiqK6 > mS8T5VmrhgCM) {
            if (b[mS8T5VmrhgCM] > b[qks3zgVYT6]) {
                Xftj4r2dBg = b[qks3zgVYT6];
                b[qks3zgVYT6] = b[mS8T5VmrhgCM];
                mmIekvwY4LDc = DPKWLO[qks3zgVYT6];
                b[mS8T5VmrhgCM] = Xftj4r2dBg;
                DPKWLO[qks3zgVYT6] = DPKWLO[mS8T5VmrhgCM];
                DPKWLO[mS8T5VmrhgCM] = mmIekvwY4LDc;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            mS8T5VmrhgCM = mS8T5VmrhgCM + 1;
        };
    }
    printf ("%.0f", DPKWLO[0]);
    for (qks3zgVYT6 = 0; qks3zgVYT6 < KbANiqK6 -1; qks3zgVYT6 = qks3zgVYT6 + 1) {
        if (b[qks3zgVYT6] == b[qks3zgVYT6 + 1])
            printf (",%.0f", DPKWLO[qks3zgVYT6 + 1]);
        else
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    };
}

