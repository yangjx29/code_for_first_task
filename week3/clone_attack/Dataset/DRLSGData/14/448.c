void  main () {
    int NvSkct, FYNLC62o9R, Cv1bcBA4heM, QrHjMR, Yed6iC1QZU = (227 - 227), Cpoz7EcZ14Q = (88 - 88), MGteoxfdQ = (964 - 964), SI1BwPOAlC5, z0ehK3RZlyxt, SaoSTEw2QIH;
    long  int NyOU6sx4gM1;
    struct   student {
        long  int nf6UZYVkg;
        int Mcg02w31BVoX;
        int NAPQkf7a;
    };
    struct   student Tmb6XVnT [100000];
    scanf ("%d", &NyOU6sx4gM1);
    SI1BwPOAlC5 = z0ehK3RZlyxt = SaoSTEw2QIH = 0;
    {
        NvSkct = 0;
        for (; NyOU6sx4gM1 > NvSkct;) {
            {
                if (0) {
                    return 0;
                };
            }
            scanf ("%d %d %d", &Tmb6XVnT[NvSkct].nf6UZYVkg, &Tmb6XVnT[NvSkct].Mcg02w31BVoX, &Tmb6XVnT[NvSkct].NAPQkf7a);
            Cv1bcBA4heM = Tmb6XVnT[NvSkct].Mcg02w31BVoX + Tmb6XVnT[NvSkct].NAPQkf7a;
            if (MGteoxfdQ < Cv1bcBA4heM) {
                MGteoxfdQ = Cv1bcBA4heM;
                SaoSTEw2QIH = Tmb6XVnT[NvSkct].nf6UZYVkg;
            }
            if (MGteoxfdQ > Cpoz7EcZ14Q) {
                QrHjMR = MGteoxfdQ;
                MGteoxfdQ = Cpoz7EcZ14Q;
                Cpoz7EcZ14Q = QrHjMR;
                QrHjMR = SaoSTEw2QIH;
                SaoSTEw2QIH = z0ehK3RZlyxt;
                z0ehK3RZlyxt = QrHjMR;
            }
            if (Cpoz7EcZ14Q > Yed6iC1QZU) {
                QrHjMR = Cpoz7EcZ14Q;
                Cpoz7EcZ14Q = Yed6iC1QZU;
                Yed6iC1QZU = QrHjMR;
                QrHjMR = z0ehK3RZlyxt;
                z0ehK3RZlyxt = SI1BwPOAlC5;
                SI1BwPOAlC5 = QrHjMR;
            }
            NvSkct = NvSkct +1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", SI1BwPOAlC5, Yed6iC1QZU, z0ehK3RZlyxt, Cpoz7EcZ14Q, SaoSTEw2QIH, MGteoxfdQ);
}

