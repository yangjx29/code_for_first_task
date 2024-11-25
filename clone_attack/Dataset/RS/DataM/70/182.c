double  EKsCXuf2vcq [2] [100];
double  JBk2wbCL60 (int afFt2Lbo3NWv, int C60UQ134Rzb);

void  main () {
    double  nU3qDvFtA;
    nU3qDvFtA = 0;
    int cFaWz9ART;
    int afFt2Lbo3NWv;
    int C60UQ134Rzb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &cFaWz9ART);
    scanf ("%lf %lf", &EKsCXuf2vcq[0][0], &EKsCXuf2vcq[(758 - 757)][0]);
    {
        afFt2Lbo3NWv = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cFaWz9ART > afFt2Lbo3NWv) {
            scanf ("%lf %lf", &EKsCXuf2vcq[0][afFt2Lbo3NWv], &EKsCXuf2vcq[1][afFt2Lbo3NWv]);
            {
                C60UQ134Rzb = 0;
                while (afFt2Lbo3NWv > C60UQ134Rzb) {
                    if (JBk2wbCL60 (afFt2Lbo3NWv, C60UQ134Rzb) > nU3qDvFtA)
                        nU3qDvFtA = JBk2wbCL60 (afFt2Lbo3NWv, C60UQ134Rzb);
                    C60UQ134Rzb++;
                };
            }
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
            afFt2Lbo3NWv++;
        };
    }
    printf ("%.4lf\n", nU3qDvFtA);
}

double  JBk2wbCL60 (int afFt2Lbo3NWv, int C60UQ134Rzb) {
    double  C2HVKUSmeh0d;
    C2HVKUSmeh0d = EKsCXuf2vcq[0][afFt2Lbo3NWv] - EKsCXuf2vcq[0][C60UQ134Rzb];
    double  PXya0HrV;
    PXya0HrV = EKsCXuf2vcq[1][afFt2Lbo3NWv] - EKsCXuf2vcq[1][C60UQ134Rzb];
    return sqrt (C2HVKUSmeh0d *C2HVKUSmeh0d+PXya0HrV*PXya0HrV);
}

