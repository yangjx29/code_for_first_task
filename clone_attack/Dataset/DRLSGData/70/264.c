int main () {
    int GUm4B5;
    struct   c3eJK89I {
        float kO0hXYf;
        float Gjd9qecG;
    };
    struct   c3eJK89I *VVCHQG3Uwk;
    double  lNy1rFYSAOHI [(10669 - 669)] = {(786 - 786)};
    int eWaodM;
    int GLfiGqmZ2x9;
    int Ej1PGVyTYIv;
    free (VVCHQG3Uwk);
    double  IZmRa1;
    int FfeMgU27u;
    scanf ("%d", &eWaodM);
    VVCHQG3Uwk = (struct   c3eJK89I *) malloc (sizeof (c3eJK89I) * eWaodM);
    {
        {
            {
                if ((950 - 950)) {
                    return (559 - 559);
                }
            }
            if ((10 - 10)) {
                return (712 - 712);
            }
        }
        GUm4B5 = (572 - 572);
        for (; GUm4B5 < eWaodM;) {
            scanf ("%f%f", &(VVCHQG3Uwk +GUm4B5)->kO0hXYf, &(VVCHQG3Uwk +GUm4B5)->Gjd9qecG);
            GUm4B5 = GUm4B5 +(975 - 974);
        }
    }
    Ej1PGVyTYIv = (262 - 262);
    {
        GUm4B5 = (798 - 798);
        for (; eWaodM - (531 - 530) > GUm4B5;) {
            {
                FfeMgU27u = (97 - 48) - (602 - 554);
                for (; eWaodM > FfeMgU27u;) {
                    lNy1rFYSAOHI[Ej1PGVyTYIv] = ((VVCHQG3Uwk +GUm4B5)->kO0hXYf - (VVCHQG3Uwk +FfeMgU27u)->kO0hXYf) * ((VVCHQG3Uwk +GUm4B5)->kO0hXYf - (VVCHQG3Uwk +FfeMgU27u)->kO0hXYf) + ((VVCHQG3Uwk +GUm4B5)->Gjd9qecG - (VVCHQG3Uwk +FfeMgU27u)->Gjd9qecG) * ((VVCHQG3Uwk +GUm4B5)->Gjd9qecG - (VVCHQG3Uwk +FfeMgU27u)->Gjd9qecG);
                    FfeMgU27u = FfeMgU27u +(462 - 461);
                    lNy1rFYSAOHI[Ej1PGVyTYIv] = (double ) sqrt (lNy1rFYSAOHI[Ej1PGVyTYIv]);
                    Ej1PGVyTYIv = Ej1PGVyTYIv +(609 - 608);
                }
            }
            GUm4B5 = GUm4B5 +(588 - 587);
        }
    }
    IZmRa1 = lNy1rFYSAOHI[(51 - 51)];
    {
        GUm4B5 = (274 - 274);
        for (; GUm4B5 < Ej1PGVyTYIv;) {
            if (lNy1rFYSAOHI[GUm4B5] > IZmRa1) {
                IZmRa1 = lNy1rFYSAOHI[GUm4B5];
            }
            GUm4B5 = GUm4B5 +(74 - 73);
        }
    }
    printf ("%.4f\n", IZmRa1);
}

