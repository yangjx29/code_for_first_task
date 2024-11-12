int main () {
    double  BcHT64im;
    double  TlsIdmH2;
    double  kY6BiHnNvrT0 [100];
    int LE1bZTKrwYlU [(690 - 590)];
    int yxrTK8s5tbI;
    int Tc1UOh;
    int RI0G1Eo;
    scanf ("%d", &yxrTK8s5tbI);
    {
        Tc1UOh = 766 - 766;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Tc1UOh <= yxrTK8s5tbI - (997 - 996)) {
            scanf ("%d", &LE1bZTKrwYlU[Tc1UOh]);
            Tc1UOh = Tc1UOh +1;
        };
    }
    {
        Tc1UOh = 748 - 748;
        while (yxrTK8s5tbI - 1 >= Tc1UOh) {
            scanf ("%lf", &kY6BiHnNvrT0[Tc1UOh]);
            Tc1UOh = Tc1UOh +1;
        };
    }
    {
        Tc1UOh = 0;
        while (Tc1UOh <= yxrTK8s5tbI - 1) {
            if (kY6BiHnNvrT0[Tc1UOh] >= 90)
                kY6BiHnNvrT0[Tc1UOh] = 4.0;
            else if (kY6BiHnNvrT0[Tc1UOh] >= (334 - 249))
                kY6BiHnNvrT0[Tc1UOh] = 3.7;
            else if (82 <= kY6BiHnNvrT0[Tc1UOh])
                kY6BiHnNvrT0[Tc1UOh] = 3.3;
            else if (78 <= kY6BiHnNvrT0[Tc1UOh])
                kY6BiHnNvrT0[Tc1UOh] = 3.0;
            else if (kY6BiHnNvrT0[Tc1UOh] >= 75)
                kY6BiHnNvrT0[Tc1UOh] = 2.7;
            else if (kY6BiHnNvrT0[Tc1UOh] >= 72)
                kY6BiHnNvrT0[Tc1UOh] = 2.3;
            else if (kY6BiHnNvrT0[Tc1UOh] >= 68)
                kY6BiHnNvrT0[Tc1UOh] = 2.0;
            else if (kY6BiHnNvrT0[Tc1UOh] >= 64)
                kY6BiHnNvrT0[Tc1UOh] = 1.5;
            else if (kY6BiHnNvrT0[Tc1UOh] >= 60)
                kY6BiHnNvrT0[Tc1UOh] = 1.0;
            else
                kY6BiHnNvrT0[Tc1UOh] = 0;
            Tc1UOh = Tc1UOh +1;
        };
    }
    {
        Tc1UOh = 0;
        while (Tc1UOh <= yxrTK8s5tbI - 1) {
            kY6BiHnNvrT0[Tc1UOh] = LE1bZTKrwYlU[Tc1UOh] * kY6BiHnNvrT0[Tc1UOh];
            Tc1UOh = Tc1UOh +1;
        };
    }
    {
        RI0G1Eo = 0;
        Tc1UOh = 0;
        while (Tc1UOh <= yxrTK8s5tbI - 1) {
            RI0G1Eo = RI0G1Eo +LE1bZTKrwYlU[Tc1UOh];
            Tc1UOh++;
        };
    }
    {
        BcHT64im = 0;
        Tc1UOh = 0;
        while (Tc1UOh <= yxrTK8s5tbI - 1) {
            BcHT64im = BcHT64im +kY6BiHnNvrT0[Tc1UOh];
            Tc1UOh++;
        };
    }
    TlsIdmH2 = BcHT64im / RI0G1Eo;
    printf ("%.2lf\n", TlsIdmH2);
    return 0;
}

