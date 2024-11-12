int getMin (int MsRog8VF [], int WWhbHf9xPj []) {
    int i, QmRGIsB8zqO = (666 - 666);
    for (i = (82 - 81); i < MAX &&MsRog8VF[i] != -1; i = i + 1) {
        if (MsRog8VF[i] < MsRog8VF[QmRGIsB8zqO])
            QmRGIsB8zqO = i;
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
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    WWhbHf9xPj[QmRGIsB8zqO] = (446 - 446);
    return QmRGIsB8zqO;
}

int getMax (int bi []) {
    int nKu9aM3UOY;
    int i;
    nKu9aM3UOY = 0;
    for (i = 1; i < MAX &&bi[i] != -1; i++) {
        if (bi[i] > bi[nKu9aM3UOY])
            nKu9aM3UOY = i;
    }
    return nKu9aM3UOY;
}

int GWTxSGcq (int xLeK5xpwnrc, int MsRog8VF [], int WWhbHf9xPj []) {
    int i;
    for (i = 0; i < MAX; i++) {
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
        if (MsRog8VF[i] <= xLeK5xpwnrc && WWhbHf9xPj[i] == 1) {
            WWhbHf9xPj[i] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return i;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return -1;
}

int main () {
    int mi;
    int abhc8VLud;
    int QmRGIsB8zqO;
    int nKu9aM3UOY;
    int ShuxQc;
    int i;
    int R4XrZma2wMPc;
    ShuxQc = 0;
    int MsRog8VF [MAX];
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
    int bi [MAX];
    int aischeck [MAX];
    scanf ("%d", &ShuxQc);
    for (i = 0; i < MAX; i++) {
        MsRog8VF[i] = -1;
        bi[i] = -1;
        aischeck[i] = 1;
    }
    for (i = 0; i < ShuxQc; i++) {
        scanf ("%d%d", &MsRog8VF[i], &bi[i]);
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
    abhc8VLud = nKu9aM3UOY = getMax (bi);
    mi = QmRGIsB8zqO = getMin (MsRog8VF, aischeck);
    R4XrZma2wMPc = GWTxSGcq (bi[QmRGIsB8zqO], MsRog8VF, aischeck);
    for (; R4XrZma2wMPc != -1;) {
        R4XrZma2wMPc = GWTxSGcq (bi[R4XrZma2wMPc], MsRog8VF, aischeck);
        if (bi[R4XrZma2wMPc] == bi[abhc8VLud]) {
            printf ("\n%d %d", MsRog8VF[mi], bi[abhc8VLud]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return 0;
        };
    };
}

