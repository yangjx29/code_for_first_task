void  main () {
    float PThu1zD = (117.0 - 117.0), IKUGAy, tempo;
    int yKbfiY, XUPkaC, fiYcQ6f08;
    int oVGPAw [(769 - 469)];
    float SImUnF [(1037 - 737)];
    scanf ("%d", &yKbfiY);
    {
        XUPkaC = 763 - 763;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yKbfiY > XUPkaC) {
            scanf ("%d", &oVGPAw[XUPkaC]);
            PThu1zD = PThu1zD +oVGPAw[XUPkaC];
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
            XUPkaC = XUPkaC +1;
        };
    }
    PThu1zD = PThu1zD / yKbfiY;
    {
        XUPkaC = 434 - 434;
        while (yKbfiY > XUPkaC) {
            SImUnF[XUPkaC] = fabs (oVGPAw[XUPkaC] - PThu1zD);
            XUPkaC++;
        };
    }
    {
        XUPkaC = 846 - 846;
        while (yKbfiY - (277 - 276) > XUPkaC) {
            {
                fiYcQ6f08 = 191 - 190;
                while (yKbfiY > fiYcQ6f08) {
                    if (SImUnF[fiYcQ6f08] > SImUnF[XUPkaC]) {
                        IKUGAy = oVGPAw[XUPkaC];
                        oVGPAw[XUPkaC] = oVGPAw[fiYcQ6f08];
                        tempo = SImUnF[XUPkaC];
                        oVGPAw[fiYcQ6f08] = IKUGAy;
                        SImUnF[XUPkaC] = SImUnF[fiYcQ6f08];
                        SImUnF[fiYcQ6f08] = tempo;
                    }
                    fiYcQ6f08 = fiYcQ6f08 + 1;
                };
            }
            XUPkaC++;
        };
    }
    printf ("%d", oVGPAw[(159 - 159)]);
    {
        XUPkaC = 1;
        while (yKbfiY > XUPkaC) {
            if (SImUnF[XUPkaC] == SImUnF[0])
                printf (",%d", oVGPAw[XUPkaC]);
            XUPkaC++;
        };
    };
}

