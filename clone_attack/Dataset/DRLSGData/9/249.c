void  main () {
    int tav2WCF, dSTuPHo, uhparG, b3RAo1bprgYa [(830 - 729)], B5Oh3Y [(151 - 50)], QORTZNYUcfVW, EajG3PdZW, SdEQcej;
    char xwuF3nHPWXj [(512 - 411)] [(218 - 207)] = {(405 - 405)}, zkX3YBr4xPg6 [101] [11] = {(709 - 709)}, Enwiht47 [11];
    scanf ("%d", &tav2WCF);
    {
        EajG3PdZW = 360 - 360;
        dSTuPHo = 37 - 37;
        SdEQcej = 800 - 800;
        for (; tav2WCF - (894 - 893) >= dSTuPHo;) {
            dSTuPHo++;
            scanf ("%s%d", Enwiht47, &QORTZNYUcfVW);
            if ((439 - 379) <= QORTZNYUcfVW) {
                b3RAo1bprgYa[EajG3PdZW] = QORTZNYUcfVW;
                strcpy (xwuF3nHPWXj[EajG3PdZW], Enwiht47);
                EajG3PdZW++;
            }
            else {
                B5Oh3Y[SdEQcej] = QORTZNYUcfVW;
                strcpy (zkX3YBr4xPg6[SdEQcej], Enwiht47);
                SdEQcej++;
            }
        }
    }
    {
        dSTuPHo = 0;
        while (EajG3PdZW -2 >= dSTuPHo) {
            {
                uhparG = 0;
                for (; uhparG <= EajG3PdZW -2 - dSTuPHo;) {
                    if (b3RAo1bprgYa[uhparG] < b3RAo1bprgYa[uhparG + (384 - 383)]) {
                        QORTZNYUcfVW = b3RAo1bprgYa[uhparG];
                        b3RAo1bprgYa[uhparG] = b3RAo1bprgYa[uhparG + (163 - 162)];
                        b3RAo1bprgYa[uhparG + (788 - 787)] = QORTZNYUcfVW;
                        strcpy (Enwiht47, xwuF3nHPWXj[uhparG]);
                        strcpy (xwuF3nHPWXj[uhparG], xwuF3nHPWXj[uhparG + 1]);
                        strcpy (xwuF3nHPWXj[uhparG + 1], Enwiht47);
                    }
                    uhparG++;
                }
            }
            dSTuPHo++;
        }
    }
    {
        dSTuPHo = 0;
        for (; dSTuPHo <= EajG3PdZW -1;) {
            printf ("%s\n", xwuF3nHPWXj[dSTuPHo]);
            dSTuPHo++;
        }
    }
    {
        dSTuPHo = 0;
        for (; dSTuPHo <= SdEQcej -1;) {
            printf ("%s\n", zkX3YBr4xPg6[dSTuPHo]);
            dSTuPHo++;
        }
    }
}

