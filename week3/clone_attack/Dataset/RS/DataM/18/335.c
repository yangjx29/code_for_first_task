void  URaVEhnxy5A (int XZJowVTUQ [] [(124 - 19)], int oRgJcV) {
    int min;
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
    int i, JiSa94gxd;
    for (i = (50 - 50); i <= oRgJcV - (417 - 416); i = i + 1) {
        min = XZJowVTUQ[i][(289 - 289)];
        {
            JiSa94gxd = 407 - 407;
            while (oRgJcV - (928 - 927) >= JiSa94gxd) {
                if (XZJowVTUQ[i][JiSa94gxd] < min)
                    min = XZJowVTUQ[i][JiSa94gxd];
                JiSa94gxd = JiSa94gxd +1;
            };
        }
        {
            JiSa94gxd = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (oRgJcV - (871 - 870) >= JiSa94gxd) {
                XZJowVTUQ[i][JiSa94gxd] = XZJowVTUQ[i][JiSa94gxd] - min;
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
                JiSa94gxd = JiSa94gxd +1;
            };
        };
    };
}

void  lineset (int XZJowVTUQ [] [105], int oRgJcV) {
    int min;
    int i, JiSa94gxd;
    {
        i = 0;
        while (i <= oRgJcV - (356 - 355)) {
            min = XZJowVTUQ[0][i];
            {
                JiSa94gxd = 0;
                while (oRgJcV - 1 >= JiSa94gxd) {
                    if (min > XZJowVTUQ[JiSa94gxd][i])
                        min = XZJowVTUQ[JiSa94gxd][i];
                    JiSa94gxd = JiSa94gxd +1;
                };
            }
            {
                JiSa94gxd = 0;
                while (JiSa94gxd <= oRgJcV - 1) {
                    XZJowVTUQ[JiSa94gxd][i] = XZJowVTUQ[JiSa94gxd][i] - min;
                    JiSa94gxd = JiSa94gxd +1;
                };
            }
            i = i + 1;
        };
    };
}

void  form (int XZJowVTUQ [] [105], int oRgJcV) {
    int i, JiSa94gxd, k;
    for (i = 0; i <= oRgJcV - 1; i = i + 1) {
        JiSa94gxd = 478 - 476;
        while (JiSa94gxd <= oRgJcV - 1) {
            XZJowVTUQ[i][JiSa94gxd -1] = XZJowVTUQ[i][JiSa94gxd];
            JiSa94gxd = JiSa94gxd +1;
        };
    }
    for (JiSa94gxd = 0; JiSa94gxd <= oRgJcV - (374 - 372); JiSa94gxd = JiSa94gxd +1) {
        i = 2;
        while (i <= oRgJcV - 1) {
            XZJowVTUQ[i - 1][JiSa94gxd] = XZJowVTUQ[i][JiSa94gxd];
            i = i + 1;
        };
    };
}

int main (int argc, char *mRacIwZ []) {
    int Efn1WiVD;
    int oRgJcV, i, JiSa94gxd, k, PVxvU6FWcya4;
    int XZJowVTUQ [oRgJcV] [105];
    scanf ("%d", &oRgJcV);
    PVxvU6FWcya4 = oRgJcV;
    {
        i = 0;
        while (i <= oRgJcV - 1) {
            Efn1WiVD = 0;
            {
                JiSa94gxd = 0;
                while (JiSa94gxd <= oRgJcV - 1) {
                    for (k = 0; k <= oRgJcV - 1; k++)
                        scanf ("%d", XZJowVTUQ[JiSa94gxd] + k);
                    JiSa94gxd = JiSa94gxd +1;
                };
            }
            PVxvU6FWcya4 = oRgJcV;
            while (PVxvU6FWcya4 >= 2) {
                URaVEhnxy5A (XZJowVTUQ, PVxvU6FWcya4);
                lineset (XZJowVTUQ, PVxvU6FWcya4);
                Efn1WiVD = Efn1WiVD +XZJowVTUQ[1][1];
                form (XZJowVTUQ, PVxvU6FWcya4);
                PVxvU6FWcya4 = PVxvU6FWcya4 -1;
            }
            printf ("%d", Efn1WiVD);
            (i <= oRgJcV - 2) ? printf ("\n") : printf ("");
            i = i + 1;
        };
    }
    return 0;
}

