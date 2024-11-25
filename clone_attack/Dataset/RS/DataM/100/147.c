void  main () {
    char qo2PFKCQ [300];
    char c;
    int A08xgoyw;
    int RXFKDe;
    int t;
    A08xgoyw = 0;
    int Dz3dDb1Wo9q6 [26] = {0};
    int DM6r0lv39sHF [26] = {0};
    scanf ("%s", &qo2PFKCQ);
    {
        RXFKDe = 0;
        while (1) {
            if (qo2PFKCQ[RXFKDe] == '\0')
                break;
            else {
                if (qo2PFKCQ[RXFKDe] >= 'a' && qo2PFKCQ[RXFKDe] <= 'z') {
                    A08xgoyw = 1;
                    t = qo2PFKCQ[RXFKDe] - 'a';
                    Dz3dDb1Wo9q6[t]++;
                }
                if (qo2PFKCQ[RXFKDe] >= 'A' && qo2PFKCQ[RXFKDe] <= 'Z') {
                    A08xgoyw = 1;
                    t = qo2PFKCQ[RXFKDe] - 'A';
                    DM6r0lv39sHF[t]++;
                };
            }
            RXFKDe = RXFKDe +1;
        };
    }
    if (A08xgoyw == 0) {
    }
    else {
        {
            RXFKDe = 0;
            while (RXFKDe < 26) {
                if (DM6r0lv39sHF[RXFKDe] != 0) {
                    c = 'A' + RXFKDe;
                    printf ("%c=%d\n", c, DM6r0lv39sHF[RXFKDe]);
                }
                RXFKDe++;
            };
        }
        {
            RXFKDe = 0;
            while (RXFKDe < 26) {
                if (Dz3dDb1Wo9q6[RXFKDe] != 0) {
                    c = 'a' + RXFKDe;
                    printf ("%c=%d\n", c, Dz3dDb1Wo9q6[RXFKDe]);
                }
                RXFKDe++;
            };
        };
    };
}

