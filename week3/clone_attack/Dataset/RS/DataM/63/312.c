main () {
    int clMzrohv;
    int ONOMpVu72mGE;
    int vCvahG1mq;
    int PaEd25x;
    int hbmKdis6x9p;
    int m0MQycOu3jf;
    int k;
    int YDrhRZ;
    int LjTAzh2y;
    int VQGNOwefo1r [clMzrohv] [ONOMpVu72mGE];
    int CWsBoRA [vCvahG1mq] [PaEd25x];
    int oJrfuIwdVMPs [clMzrohv] [PaEd25x];
    scanf ("%d %d", &clMzrohv, &ONOMpVu72mGE);
    for (YDrhRZ = 0; clMzrohv > YDrhRZ; YDrhRZ = YDrhRZ +1) {
        for (LjTAzh2y = 0; ONOMpVu72mGE > LjTAzh2y; LjTAzh2y = LjTAzh2y +1)
            scanf ("%d", &VQGNOwefo1r[YDrhRZ][LjTAzh2y]);
    }
    scanf ("%d %d", &vCvahG1mq, &PaEd25x);
    for (YDrhRZ = 0; vCvahG1mq > YDrhRZ; YDrhRZ = YDrhRZ +1) {
        for (LjTAzh2y = 0; PaEd25x > LjTAzh2y; LjTAzh2y = LjTAzh2y +1)
            scanf ("%d", &CWsBoRA[YDrhRZ][LjTAzh2y]);
    }
    for (hbmKdis6x9p = 0; clMzrohv > hbmKdis6x9p; hbmKdis6x9p = hbmKdis6x9p + 1) {
        for (m0MQycOu3jf = 0; PaEd25x > m0MQycOu3jf; m0MQycOu3jf = m0MQycOu3jf + 1) {
            oJrfuIwdVMPs[hbmKdis6x9p][m0MQycOu3jf] = 0;
        };
    }
    {
        hbmKdis6x9p = 0;
        while (clMzrohv > hbmKdis6x9p) {
            for (m0MQycOu3jf = 0; m0MQycOu3jf < PaEd25x; m0MQycOu3jf = m0MQycOu3jf + 1) {
                k = 0;
                while (ONOMpVu72mGE > k) {
                    oJrfuIwdVMPs[hbmKdis6x9p][m0MQycOu3jf] += VQGNOwefo1r[hbmKdis6x9p][k] * CWsBoRA[k][m0MQycOu3jf];
                    k = k + 1;
                };
            }
            hbmKdis6x9p = hbmKdis6x9p + 1;
        };
    }
    for (hbmKdis6x9p = 0; clMzrohv > hbmKdis6x9p; hbmKdis6x9p = hbmKdis6x9p + 1) {
        for (m0MQycOu3jf = 0; m0MQycOu3jf < PaEd25x; m0MQycOu3jf = m0MQycOu3jf + 1) {
            printf ("%d", oJrfuIwdVMPs[hbmKdis6x9p][m0MQycOu3jf]);
            if (m0MQycOu3jf < PaEd25x -1)
                ;
        }
        if (clMzrohv - 1 > hbmKdis6x9p)
            printf ("\n");
    };
}

