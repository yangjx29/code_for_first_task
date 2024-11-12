int main () {
    int OdRsDlBJF;
    int qkidR9z;
    int vdyUwI1HKrGc;
    int fghtdm7Qn1;
    int t3fyOJ0dTFEv;
    qkidR9z = 0;
    vdyUwI1HKrGc = 0;
    double  llON6LAqm [(948 - 908)], HBYTQwmgOcvo [40], Sfm05yBSu [40];
    char ApLvWMC [10];
    double  ZVyO2LpSk;
    scanf ("%d", &fghtdm7Qn1);
    for (t3fyOJ0dTFEv = 0; t3fyOJ0dTFEv < fghtdm7Qn1; t3fyOJ0dTFEv = t3fyOJ0dTFEv + 1) {
        scanf ("%s %lf", ApLvWMC, &llON6LAqm[t3fyOJ0dTFEv]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ApLvWMC[0] == 'm') {
            HBYTQwmgOcvo[qkidR9z++] = llON6LAqm[t3fyOJ0dTFEv];
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
        if (ApLvWMC[0] == 'f') {
            Sfm05yBSu[vdyUwI1HKrGc++] = llON6LAqm[t3fyOJ0dTFEv];
        };
    }
    for (OdRsDlBJF = 1; OdRsDlBJF <= qkidR9z; OdRsDlBJF = OdRsDlBJF +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (t3fyOJ0dTFEv = 0; t3fyOJ0dTFEv < qkidR9z - OdRsDlBJF; t3fyOJ0dTFEv = t3fyOJ0dTFEv + 1) {
            if (HBYTQwmgOcvo[t3fyOJ0dTFEv] > HBYTQwmgOcvo[t3fyOJ0dTFEv + 1]) {
                ZVyO2LpSk = HBYTQwmgOcvo[t3fyOJ0dTFEv + 1];
                HBYTQwmgOcvo[t3fyOJ0dTFEv + 1] = HBYTQwmgOcvo[t3fyOJ0dTFEv];
                HBYTQwmgOcvo[t3fyOJ0dTFEv] = ZVyO2LpSk;
            };
        };
    }
    for (OdRsDlBJF = 1; OdRsDlBJF <= vdyUwI1HKrGc; OdRsDlBJF = OdRsDlBJF +1) {
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
        for (t3fyOJ0dTFEv = 0; t3fyOJ0dTFEv < vdyUwI1HKrGc - OdRsDlBJF; t3fyOJ0dTFEv++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (Sfm05yBSu[t3fyOJ0dTFEv] < Sfm05yBSu[t3fyOJ0dTFEv + 1]) {
                ZVyO2LpSk = Sfm05yBSu[t3fyOJ0dTFEv + 1];
                Sfm05yBSu[t3fyOJ0dTFEv + 1] = Sfm05yBSu[t3fyOJ0dTFEv];
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
                Sfm05yBSu[t3fyOJ0dTFEv] = ZVyO2LpSk;
            };
        };
    }
    {
        OdRsDlBJF = 0;
        while (OdRsDlBJF < qkidR9z) {
            printf ("%.2lf ", HBYTQwmgOcvo[OdRsDlBJF]);
            OdRsDlBJF = OdRsDlBJF +1;
        };
    }
    for (OdRsDlBJF = 0; OdRsDlBJF < vdyUwI1HKrGc; OdRsDlBJF++) {
        if (OdRsDlBJF < vdyUwI1HKrGc - 1)
            printf ("%.2lf ", Sfm05yBSu[OdRsDlBJF]);
        else
            printf ("%.2lf", Sfm05yBSu[OdRsDlBJF]);
    }
    return 0;
}

