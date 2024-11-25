int main () {
    int vI5kNfcnx [Number_children] [Number];
    int oegSAa;
    int WRabrlgz, uzkXl8, VUWcQz8vkR, PPcmSYDlB, SEamGKVR;
    scanf ("%d", &oegSAa);
    for (WRabrlgz = 0; oegSAa > WRabrlgz; WRabrlgz = WRabrlgz +1) {
        uzkXl8 = 0;
        while (Number > uzkXl8) {
            vI5kNfcnx[WRabrlgz][uzkXl8] = 0;
            uzkXl8 = uzkXl8 + 1;
        };
    }
    {
        WRabrlgz = 0;
        while (oegSAa > WRabrlgz) {
            scanf ("%d", &vI5kNfcnx[WRabrlgz][0]);
            for (uzkXl8 = 1; 1 + vI5kNfcnx[WRabrlgz][0] > uzkXl8; uzkXl8 = uzkXl8 + 1)
                scanf ("%d", &vI5kNfcnx[WRabrlgz][uzkXl8]);
            WRabrlgz = WRabrlgz +1;
        };
    }
    {
        WRabrlgz = 0;
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
        while (oegSAa > WRabrlgz) {
            {
                SEamGKVR = 1;
                PPcmSYDlB = 0;
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
                VUWcQz8vkR = 0;
                uzkXl8 = 1;
                while ((60 >= PPcmSYDlB) && (vI5kNfcnx[WRabrlgz][0] >= uzkXl8)) {
                    if ((!(0 != vI5kNfcnx[WRabrlgz][1])) || (vI5kNfcnx[WRabrlgz][1] >= 60)) {
                        SEamGKVR = 0;
                        printf ("%d\n", 60);
                        break;
                    }
                    VUWcQz8vkR = vI5kNfcnx[WRabrlgz][uzkXl8];
                    PPcmSYDlB = vI5kNfcnx[WRabrlgz][uzkXl8] + 3 * uzkXl8;
                    uzkXl8 = uzkXl8 + 1;
                };
            }
            if (SEamGKVR == 0)
                continue;
            else {
                if (PPcmSYDlB < 60) {
                    VUWcQz8vkR = VUWcQz8vkR +60 - PPcmSYDlB;
                    printf ("%d\n", VUWcQz8vkR);
                    continue;
                }
                if (PPcmSYDlB > 63) {
                    VUWcQz8vkR = 60 - (uzkXl8 - 2) * 3;
                    printf ("%d\n", VUWcQz8vkR);
                    continue;
                }
                VUWcQz8vkR = 60 - (uzkXl8 - 2) * 3 - (3 - (PPcmSYDlB -60));
                printf ("%d\n", VUWcQz8vkR);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            WRabrlgz = WRabrlgz +1;
        };
    }
    return 0;
}

