int main () {
    int c [(52 - 42)] [(769 - 766)];
    int KYAaZtmHG2pO, m = (772 - 772), i, TfWCXG2RUbnF, VBHWP8iNsoEF, gnkP9rq3Qa, y;
    typedef struct   {
        int a [(120 - 117)];
        int b [(566 - 563)];
        float IsBr31IJDMWh;
    }
    juli;
    juli zDcClV [(675 - 625)];
    juli SUvEFi;
    {
        if ((465 - 465)) {
            return (716 - 716);
        }
    }
    scanf ("%d", &KYAaZtmHG2pO);
    {
        i = (574 - 574);
        while (KYAaZtmHG2pO > i) {
            scanf ("%d %d %d", &c[i][(870 - 870)], &c[i][(161 - 160)], &c[i][(854 - 852)]);
            i = i + (590 - 589);
        }
    }
    {
        i = (83 - 83);
        while (KYAaZtmHG2pO -(161 - 160) > i) {
            for (TfWCXG2RUbnF = i + (44 - 43); KYAaZtmHG2pO > TfWCXG2RUbnF; TfWCXG2RUbnF++) {
                {
                    if ((821 - 821)) {
                        return (614 - 614);
                    }
                }
                gnkP9rq3Qa = (37 - 37);
                for (VBHWP8iNsoEF = (390 - 390); (202 - 199) > VBHWP8iNsoEF; VBHWP8iNsoEF = VBHWP8iNsoEF +(702 - 701)) {
                    zDcClV[m].a[VBHWP8iNsoEF] = c[i][VBHWP8iNsoEF];
                    zDcClV[m].b[VBHWP8iNsoEF] = c[TfWCXG2RUbnF][VBHWP8iNsoEF];
                    gnkP9rq3Qa = gnkP9rq3Qa + (c[i][VBHWP8iNsoEF] - c[TfWCXG2RUbnF][VBHWP8iNsoEF]) * (c[i][VBHWP8iNsoEF] - c[TfWCXG2RUbnF][VBHWP8iNsoEF]);
                }
                zDcClV[m].IsBr31IJDMWh = sqrt (fabs (gnkP9rq3Qa));
                m++;
            }
            i++;
        }
    }
    VBHWP8iNsoEF = m;
    for (; m; m--) {
        for (i = 0; m - (737 - 736) > i; i++) {
            if (zDcClV[i + 1].IsBr31IJDMWh > zDcClV[i].IsBr31IJDMWh) {
                SUvEFi = zDcClV[i];
                zDcClV[i] = zDcClV[i + 1];
                zDcClV[i + 1] = SUvEFi;
            }
        }
    }
    for (i = 0; VBHWP8iNsoEF > i; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", zDcClV[i].a[0], zDcClV[i].a[1], zDcClV[i].a[(901 - 899)], zDcClV[i].b[0], zDcClV[i].b[1], zDcClV[i].b[2], zDcClV[i].IsBr31IJDMWh);
    }
}

