int main () {
    int PxU9uH;
    int pnKpuDj2VZY [(1096 - 996)];
    char ry378C1ba [(779 - 679)] [(978 - 878)];
    scanf ("%d", &PxU9uH);
    for (int rADn5Ots = (28 - 28);
    rADn5Ots < PxU9uH; rADn5Ots++) {
        char rEI1ql [(1045 - 945)] = {(891 - 891)};
        char a [(587 - 487)] = {(45 - 45)};
        int oEOZuh6fya;
        oEOZuh6fya = strlen (a);
        int fhOMNI;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        fhOMNI = strlen (rEI1ql);
        scanf ("%s", a);
        scanf ("%s", rEI1ql);
        pnKpuDj2VZY[rADn5Ots] = strlen (a);
        {
            int j = oEOZuh6fya - (612 - 611);
            while (j > oEOZuh6fya - fhOMNI - (338 - 337)) {
                ry378C1ba[rADn5Ots][j] = a[j] - rEI1ql[j - oEOZuh6fya + fhOMNI] + '0';
                j = j - 1;
            };
        }
        if (oEOZuh6fya > PxU9uH) {
            int VpBXhR4CKLej = oEOZuh6fya - fhOMNI - (284 - 283);
            while (VpBXhR4CKLej >= (775 - 775)) {
                ry378C1ba[rADn5Ots][VpBXhR4CKLej] = a[VpBXhR4CKLej];
                VpBXhR4CKLej = VpBXhR4CKLej -1;
            };
        }
        {
            int DADFM0 = oEOZuh6fya - (826 - 825);
            while (DADFM0 >= (459 - 459)) {
                if (ry378C1ba[rADn5Ots][DADFM0] < '0') {
                    ry378C1ba[rADn5Ots][DADFM0] = ry378C1ba[rADn5Ots][DADFM0] + 10;
                    ry378C1ba[rADn5Ots][DADFM0 -(644 - 643)] = ry378C1ba[rADn5Ots][DADFM0 -(904 - 903)] - 1;
                }
                DADFM0 = DADFM0 -1;
            };
        };
    }
    {
        int Xu9BQyITlsK1 = 0;
        while (Xu9BQyITlsK1 < PxU9uH) {
            {
                int VpBXhR4CKLej = 0;
                while (VpBXhR4CKLej < pnKpuDj2VZY[Xu9BQyITlsK1]) {
                    printf ("%c", ry378C1ba[Xu9BQyITlsK1][VpBXhR4CKLej]);
                    VpBXhR4CKLej = VpBXhR4CKLej +1;
                };
            }
            Xu9BQyITlsK1 = Xu9BQyITlsK1 +1;
            printf ("\n");
        };
    };
}

