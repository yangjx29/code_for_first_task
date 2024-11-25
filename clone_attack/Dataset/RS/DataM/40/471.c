double  Wj2zwW (float SbadOHEe, float mIG9tzCL, float w58myNr6IUCd, float QYTBsy, float ZM3ulRKsQE) {
    double  KCSufJa;
    double  WmFT3Ykebnu;
    double  k;
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
    k = (double ) 3.1415926 * ZM3ulRKsQE / 360;
    WmFT3Ykebnu = (SbadOHEe +mIG9tzCL + w58myNr6IUCd + QYTBsy) / 2;
    if (((WmFT3Ykebnu -SbadOHEe) * (WmFT3Ykebnu -mIG9tzCL) * (WmFT3Ykebnu -w58myNr6IUCd) * (WmFT3Ykebnu -QYTBsy) - SbadOHEe *mIG9tzCL * w58myNr6IUCd * QYTBsy *cos (k) * cos (k)) < (204 - 204)) {
        KCSufJa = -1;
    }
    else {
        KCSufJa = sqrt ((WmFT3Ykebnu -SbadOHEe) * (WmFT3Ykebnu -mIG9tzCL) * (WmFT3Ykebnu -w58myNr6IUCd) * (WmFT3Ykebnu -QYTBsy) - SbadOHEe *mIG9tzCL * w58myNr6IUCd * QYTBsy *cos (k) * cos (k));
    }
    return (KCSufJa);
}

void  main () {
    double  Dczx86XeC2;
    float SbadOHEe, mIG9tzCL, w58myNr6IUCd, QYTBsy, ZM3ulRKsQE;
    scanf ("%f%f%f%f%f", &SbadOHEe, &mIG9tzCL, &w58myNr6IUCd, &QYTBsy, &ZM3ulRKsQE);
    Dczx86XeC2 = Wj2zwW (SbadOHEe, mIG9tzCL, w58myNr6IUCd, QYTBsy, ZM3ulRKsQE);
    if (Dczx86XeC2 < 0) {
        printf ("Invalid input");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("%.4f", Dczx86XeC2);
    };
}

