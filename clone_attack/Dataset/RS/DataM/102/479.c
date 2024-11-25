void  vQLGsRhi (float vcrqBpIbnThF [], int ydeTBPi3Xg) {
    float nlOMsdoHzBCw;
    int DXlkIwzq;
    int k6UsfZ;
    {
        DXlkIwzq = 0;
        while (DXlkIwzq <= ydeTBPi3Xg) {
            {
                k6UsfZ = DXlkIwzq +1;
                while (k6UsfZ <= ydeTBPi3Xg) {
                    if (vcrqBpIbnThF[DXlkIwzq] < vcrqBpIbnThF[k6UsfZ]) {
                        nlOMsdoHzBCw = vcrqBpIbnThF[DXlkIwzq];
                        vcrqBpIbnThF[DXlkIwzq] = vcrqBpIbnThF[k6UsfZ];
                        vcrqBpIbnThF[k6UsfZ] = nlOMsdoHzBCw;
                    }
                    k6UsfZ = k6UsfZ + 1;
                };
            }
            DXlkIwzq = DXlkIwzq +1;
        };
    };
}

void  k8ijl3K4W (float vcrqBpIbnThF [], int ydeTBPi3Xg) {
    float nlOMsdoHzBCw;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int DXlkIwzq, k6UsfZ;
    for (DXlkIwzq = 0; DXlkIwzq <= ydeTBPi3Xg; DXlkIwzq++) {
        k6UsfZ = DXlkIwzq +1;
        while (k6UsfZ <= ydeTBPi3Xg) {
            if (vcrqBpIbnThF[DXlkIwzq] > vcrqBpIbnThF[k6UsfZ]) {
                nlOMsdoHzBCw = vcrqBpIbnThF[DXlkIwzq];
                vcrqBpIbnThF[DXlkIwzq] = vcrqBpIbnThF[k6UsfZ];
                vcrqBpIbnThF[k6UsfZ] = nlOMsdoHzBCw;
            }
            k6UsfZ++;
        };
    };
}

int main () {
    float vcrqBpIbnThF [40], nlOMsdoHzBCw [40];
    int FZzKf3akybR;
    int k6UsfZ;
    int ydeTBPi3Xg;
    int DXlkIwzq;
    FZzKf3akybR = 0;
    k6UsfZ = 0;
    char JjdhSgR [41] [(667 - 660)];
    scanf ("%d", &ydeTBPi3Xg);
    {
        DXlkIwzq = 0;
        while (DXlkIwzq < ydeTBPi3Xg) {
            scanf ("%s", JjdhSgR[DXlkIwzq]);
            if (strlen (JjdhSgR[DXlkIwzq]) == 4) {
                scanf ("%f", &vcrqBpIbnThF[FZzKf3akybR]);
                FZzKf3akybR++;
            }
            else {
                scanf ("%f", &nlOMsdoHzBCw[k6UsfZ]);
                k6UsfZ++;
            }
            DXlkIwzq = DXlkIwzq +1;
        };
    }
    k8ijl3K4W (vcrqBpIbnThF, FZzKf3akybR);
    {
        DXlkIwzq = 1;
        while (DXlkIwzq <= FZzKf3akybR) {
            printf ("%3.2f ", vcrqBpIbnThF[DXlkIwzq]);
            DXlkIwzq++;
        };
    }
    vQLGsRhi (nlOMsdoHzBCw, k6UsfZ);
    {
        DXlkIwzq = 0;
        while (DXlkIwzq < k6UsfZ - 1) {
            printf ("%3.2f ", nlOMsdoHzBCw[DXlkIwzq]);
            DXlkIwzq++;
        };
    }
    printf ("%3.2f", nlOMsdoHzBCw[k6UsfZ - 1]);
}

