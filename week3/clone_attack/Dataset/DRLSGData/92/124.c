void  main () {
    int LZcvMG, QnWFOm [1001], i7LaHqfy [1001], gwb1YCdkLX, zLdbscF1kv, vPO8uIS, draw, fBpnqi, JukPMI4, VcO48HSD, qxPAFQrDne, W58HjBkL2;
    scanf ("%d", &LZcvMG);
    for (; LZcvMG != 0;) {
        vPO8uIS = 0;
        draw = 0;
        fBpnqi = 0;
        W58HjBkL2 = -9999;
        {
            gwb1YCdkLX = 1;
            while (gwb1YCdkLX <= LZcvMG) {
                scanf ("%d", &QnWFOm[gwb1YCdkLX]);
                gwb1YCdkLX = gwb1YCdkLX + 1;
            }
        }
        {
            gwb1YCdkLX = 1;
            while (gwb1YCdkLX <= LZcvMG) {
                scanf ("%d", &i7LaHqfy[gwb1YCdkLX]);
                gwb1YCdkLX = gwb1YCdkLX + 1;
            }
        }
        {
            gwb1YCdkLX = 1;
            while (gwb1YCdkLX <= LZcvMG -1) {
                {
                    zLdbscF1kv = 1;
                    while (zLdbscF1kv <= LZcvMG -gwb1YCdkLX) {
                        if (QnWFOm[zLdbscF1kv] < QnWFOm[zLdbscF1kv + 1]) {
                            JukPMI4 = QnWFOm[zLdbscF1kv];
                            QnWFOm[zLdbscF1kv] = QnWFOm[zLdbscF1kv + 1];
                            QnWFOm[zLdbscF1kv + 1] = JukPMI4;
                        }
                        if (i7LaHqfy[zLdbscF1kv] < i7LaHqfy[zLdbscF1kv + 1]) {
                            JukPMI4 = i7LaHqfy[zLdbscF1kv];
                            i7LaHqfy[zLdbscF1kv] = i7LaHqfy[zLdbscF1kv + 1];
                            i7LaHqfy[zLdbscF1kv + 1] = JukPMI4;
                        }
                        zLdbscF1kv = zLdbscF1kv + 1;
                    }
                }
                gwb1YCdkLX = gwb1YCdkLX + 1;
            }
        }
        {
            gwb1YCdkLX = 0;
            while (gwb1YCdkLX <= LZcvMG -1) {
                {
                    zLdbscF1kv = 1;
                    while (zLdbscF1kv <= LZcvMG) {
                        if (zLdbscF1kv + gwb1YCdkLX > LZcvMG)
                            VcO48HSD = zLdbscF1kv + gwb1YCdkLX - LZcvMG;
                        else
                            VcO48HSD = zLdbscF1kv + gwb1YCdkLX;
                        if (QnWFOm[VcO48HSD] > i7LaHqfy[zLdbscF1kv])
                            vPO8uIS = vPO8uIS + 1;
                        else if (QnWFOm[VcO48HSD] == i7LaHqfy[zLdbscF1kv])
                            draw = draw + 1;
                        else
                            fBpnqi = fBpnqi + 1;
                        zLdbscF1kv = zLdbscF1kv + 1;
                    }
                }
                draw = 0;
                qxPAFQrDne = 200 * (vPO8uIS - fBpnqi);
                fBpnqi = 0;
                vPO8uIS = 0;
                if (qxPAFQrDne > W58HjBkL2)
                    W58HjBkL2 = qxPAFQrDne;
                gwb1YCdkLX = gwb1YCdkLX + 1;
            }
        }
        scanf ("%d", &LZcvMG);
        printf ("%d\n", W58HjBkL2);
    }
}

