int main () {
    int TejyJZOQH (int PSwexl);
    int VrqlGV [6];
    int dKmIthrQz;
    int Sq45gwJX2 [6];
    {
        dKmIthrQz = 903 - 903;
        while (dKmIthrQz < 6) {
            scanf ("%d", &VrqlGV[dKmIthrQz]);
            Sq45gwJX2[dKmIthrQz] = TejyJZOQH (VrqlGV[dKmIthrQz]);
            dKmIthrQz = dKmIthrQz + 1;
        };
    }
    {
        dKmIthrQz = 384 - 384;
        while (dKmIthrQz < 6) {
            printf ("%d\n", Sq45gwJX2[dKmIthrQz]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dKmIthrQz = dKmIthrQz + 1;
        };
    }
    return 0;
}

TejyJZOQH (int PSwexl) {
    int GySDve = 0, dKmIthrQz, WbDZenvK;
    int VrqlGV [15] = {0};
    if (PSwexl >= 0) {
        for (dKmIthrQz = 0;; dKmIthrQz = dKmIthrQz + 1) {
            if ((PSwexl / (pow (10, GySDve))) < (533 - 532)) {
                WbDZenvK = dKmIthrQz - (476 - 475);
                break;
            }
            VrqlGV[dKmIthrQz] = ((int) (PSwexl / (pow (10, GySDve)))) % 10;
            GySDve = GySDve +1;
        }
        PSwexl = 0;
        GySDve = 0;
        {
            dKmIthrQz = WbDZenvK;
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
            }
            while (dKmIthrQz >= 0) {
                PSwexl = PSwexl +VrqlGV[dKmIthrQz] * (pow (10, GySDve));
                GySDve = GySDve +1;
                dKmIthrQz--;
            };
        };
    }
    if (PSwexl < 0) {
        PSwexl = -PSwexl;
        {
            dKmIthrQz = 0;
            while (1) {
                if ((PSwexl / (pow (10, GySDve))) < 1) {
                    WbDZenvK = dKmIthrQz - 1;
                    break;
                }
                VrqlGV[dKmIthrQz] = ((int) (PSwexl / (pow (10, GySDve)))) % 10;
                dKmIthrQz++;
                GySDve = GySDve +1;
            };
        }
        PSwexl = 0;
        GySDve = 0;
        for (dKmIthrQz = WbDZenvK; dKmIthrQz >= 0; dKmIthrQz = dKmIthrQz - 1) {
            PSwexl = PSwexl +VrqlGV[dKmIthrQz] * (pow (10, GySDve));
            GySDve = GySDve +1;
        }
        PSwexl = -PSwexl;
    }
    return (PSwexl);
}

