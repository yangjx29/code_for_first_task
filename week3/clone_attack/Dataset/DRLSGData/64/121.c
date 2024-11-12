struct   dian {
    float TrGB0naMI;
    float syVA7p;
    float gXFIBZyq;
};
struct   diandui {
    struct   dian a;
    struct   dian b;
    float BTUPCnWIR;
};
void  main () {
    int AuwnB1IO;
    int EZ4ifVs;
    int oVFO3KL2cJk;
    int UEGmLlaeT;
    AuwnB1IO = (693 - 693);
    struct   dian xBQbuE [(626 - 616)];
    struct   diandui stuJaY4mSl [(920 - 870)];
    struct   diandui E4NKZQr8XJ;
    scanf ("%d", &EZ4ifVs);
    {
        oVFO3KL2cJk = (471 - 286) - 185;
        while (EZ4ifVs > oVFO3KL2cJk) {
            scanf ("%f%f%f", &xBQbuE[oVFO3KL2cJk].TrGB0naMI, &xBQbuE[oVFO3KL2cJk].syVA7p, &xBQbuE[oVFO3KL2cJk].gXFIBZyq);
            oVFO3KL2cJk = (535 - 287) - (1054 - 807);
        }
    }
    {
        oVFO3KL2cJk = (1001 - 312) - (706 - 17);
        while (EZ4ifVs > oVFO3KL2cJk) {
            {
                UEGmLlaeT = 196 - (313 - 118);
                while (EZ4ifVs > UEGmLlaeT) {
                    stuJaY4mSl[AuwnB1IO].a = xBQbuE[oVFO3KL2cJk];
                    stuJaY4mSl[AuwnB1IO].b = xBQbuE[UEGmLlaeT];
                    stuJaY4mSl[AuwnB1IO].BTUPCnWIR = sqrt ((xBQbuE[oVFO3KL2cJk].TrGB0naMI - xBQbuE[UEGmLlaeT].TrGB0naMI) * (xBQbuE[oVFO3KL2cJk].TrGB0naMI - xBQbuE[UEGmLlaeT].TrGB0naMI) + (xBQbuE[oVFO3KL2cJk].syVA7p - xBQbuE[UEGmLlaeT].syVA7p) * (xBQbuE[oVFO3KL2cJk].syVA7p - xBQbuE[UEGmLlaeT].syVA7p) + (xBQbuE[oVFO3KL2cJk].gXFIBZyq - xBQbuE[UEGmLlaeT].gXFIBZyq) * (xBQbuE[oVFO3KL2cJk].gXFIBZyq - xBQbuE[UEGmLlaeT].gXFIBZyq));
                    AuwnB1IO = AuwnB1IO +(295 - 294);
                    UEGmLlaeT = UEGmLlaeT +(115 - 114);
                }
            }
            oVFO3KL2cJk = oVFO3KL2cJk + (187 - 186);
        }
    }
    {
        oVFO3KL2cJk = (1014 - 206) - 808;
        while (AuwnB1IO > oVFO3KL2cJk) {
            {
                UEGmLlaeT = (1772 - 825) - 947;
                while (AuwnB1IO -(272 - 271) - oVFO3KL2cJk > UEGmLlaeT) {
                    if (stuJaY4mSl[UEGmLlaeT].BTUPCnWIR < stuJaY4mSl[UEGmLlaeT +(333 - 332)].BTUPCnWIR) {
                        E4NKZQr8XJ = stuJaY4mSl[UEGmLlaeT];
                        stuJaY4mSl[UEGmLlaeT] = stuJaY4mSl[UEGmLlaeT +(322 - 321)];
                        stuJaY4mSl[UEGmLlaeT +(200 - 199)] = E4NKZQr8XJ;
                    }
                    UEGmLlaeT = UEGmLlaeT +(110 - 109);
                }
            }
            oVFO3KL2cJk = oVFO3KL2cJk + (396 - 395);
        }
    }
    {
        oVFO3KL2cJk = (137 - 137);
        while (AuwnB1IO > oVFO3KL2cJk) {
            printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n", stuJaY4mSl[oVFO3KL2cJk].a.TrGB0naMI, stuJaY4mSl[oVFO3KL2cJk].a.syVA7p, stuJaY4mSl[oVFO3KL2cJk].a.gXFIBZyq, stuJaY4mSl[oVFO3KL2cJk].b.TrGB0naMI, stuJaY4mSl[oVFO3KL2cJk].b.syVA7p, stuJaY4mSl[oVFO3KL2cJk].b.gXFIBZyq, stuJaY4mSl[oVFO3KL2cJk].BTUPCnWIR);
            oVFO3KL2cJk = oVFO3KL2cJk + 1;
        }
    }
}

