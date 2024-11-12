void  main () {
    int rzDxBiNJ [(377 - 369)] [(175 - 167)];
    int H5dpea;
    int Tm1X86;
    int cDN3GUhAxw;
    int JP0ZhYr3J64U;
    int GV2HBXx0CG;
    int j93oWJDO1F;
    int iNBl6eqHi;
    int qli9bzTu0aN;
    int Lq0Wd1wCk;
    H5dpea = (452 - 452);
    Tm1X86 = (269 - 269);
    scanf ("%d,%d", &j93oWJDO1F, &iNBl6eqHi);
    {
        cDN3GUhAxw = 600 - 600;
        while (j93oWJDO1F > cDN3GUhAxw) {
            {
                JP0ZhYr3J64U = 767 - 767;
                while (iNBl6eqHi > JP0ZhYr3J64U) {
                    scanf ("%d", &rzDxBiNJ[cDN3GUhAxw][JP0ZhYr3J64U]);
                    JP0ZhYr3J64U = JP0ZhYr3J64U +1;
                }
            }
            cDN3GUhAxw = cDN3GUhAxw + 1;
        }
    }
    {
        cDN3GUhAxw = 335 - 335;
        while (cDN3GUhAxw < j93oWJDO1F) {
            Lq0Wd1wCk = (571 - 571);
            qli9bzTu0aN = rzDxBiNJ[cDN3GUhAxw][(189 - 189)];
            {
                JP0ZhYr3J64U = 327 - 327;
                while (JP0ZhYr3J64U < iNBl6eqHi) {
                    if (rzDxBiNJ[cDN3GUhAxw][JP0ZhYr3J64U] > qli9bzTu0aN) {
                        qli9bzTu0aN = rzDxBiNJ[cDN3GUhAxw][JP0ZhYr3J64U];
                        H5dpea = JP0ZhYr3J64U;
                    }
                    JP0ZhYr3J64U++;
                }
            }
            {
                GV2HBXx0CG = 116 - 116;
                while (j93oWJDO1F > GV2HBXx0CG) {
                    if (qli9bzTu0aN > rzDxBiNJ[GV2HBXx0CG][H5dpea])
                        Lq0Wd1wCk = Lq0Wd1wCk +1;
                    GV2HBXx0CG++;
                }
            }
            if (Lq0Wd1wCk == 0)
                printf ("%d+%d\n", cDN3GUhAxw, H5dpea);
            else
                Tm1X86 = Tm1X86 +1;
            cDN3GUhAxw++;
        }
    }
    if (Tm1X86 == j93oWJDO1F)
        printf ("No");
}

