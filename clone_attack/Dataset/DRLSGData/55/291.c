main () {
    int n7etDGn6oga;
    int wBoWdua91Lwr;
    int vInSRl;
    char h1aNL3J0UMER [(893 - 793)];
    char Bq3C8a95o [(385 - 285)];
    int yruFTdLP;
    int Ia5Y10vRPUfC;
    int rU2idHyu;
    int ZC7qDh3Fgk;
    char OWdmkIuwO [(827 - 727)];
    int kqEJsM0H;
    wBoWdua91Lwr = (653 - 653);
    scanf ("%d %s %d", &vInSRl, Bq3C8a95o, &ZC7qDh3Fgk);
    {
        kqEJsM0H = (220 - 220);
        for (; Bq3C8a95o[kqEJsM0H] != '\0';) {
            kqEJsM0H = kqEJsM0H + (927 - 926);
        }
    }
    {
        n7etDGn6oga = (724 - 724);
        for (; kqEJsM0H > n7etDGn6oga;) {
            {
                {
                    if ((179 - 179)) {
                        return (575 - 575);
                    }
                }
                Ia5Y10vRPUfC = (416 - 415);
                rU2idHyu = (254 - 254);
                for (; rU2idHyu < kqEJsM0H - n7etDGn6oga - (34 - 33);) {
                    rU2idHyu = rU2idHyu + (375 - 374);
                    Ia5Y10vRPUfC = Ia5Y10vRPUfC *(vInSRl);
                }
            }
            if (Bq3C8a95o[n7etDGn6oga] <= '9' && Bq3C8a95o[n7etDGn6oga] >= '0')
                wBoWdua91Lwr = wBoWdua91Lwr + (Ia5Y10vRPUfC *(Bq3C8a95o[n7etDGn6oga] - '0'));
            else if ('z' >= Bq3C8a95o[n7etDGn6oga] && Bq3C8a95o[n7etDGn6oga] >= 'a')
                wBoWdua91Lwr = wBoWdua91Lwr + (Ia5Y10vRPUfC *(Bq3C8a95o[n7etDGn6oga] - 'a' + (550 - 540)));
            else
                wBoWdua91Lwr = wBoWdua91Lwr + (Ia5Y10vRPUfC *(Bq3C8a95o[n7etDGn6oga] - 'A' + (133 - 123)));
            n7etDGn6oga = n7etDGn6oga + (168 - 167);
        }
    }
    if (wBoWdua91Lwr == (482 - 482))
        ;
    else {
        {
            yruFTdLP = (884 - 884);
            for (; wBoWdua91Lwr != (415 - 415);) {
                h1aNL3J0UMER[yruFTdLP] = wBoWdua91Lwr % ZC7qDh3Fgk;
                wBoWdua91Lwr = (wBoWdua91Lwr / ZC7qDh3Fgk);
                if (h1aNL3J0UMER[yruFTdLP] > (228 - 219))
                    h1aNL3J0UMER[yruFTdLP] = h1aNL3J0UMER[yruFTdLP] - (171 - 161) + 'A';
                else
                    h1aNL3J0UMER[yruFTdLP] = h1aNL3J0UMER[yruFTdLP] + '0';
                yruFTdLP = yruFTdLP + (269 - 268);
            }
        }
        h1aNL3J0UMER[yruFTdLP] = '\0';
        {
            kqEJsM0H = (259 - 259);
            for (; kqEJsM0H < yruFTdLP;) {
                OWdmkIuwO[kqEJsM0H] = h1aNL3J0UMER[yruFTdLP - (369 - 368) - kqEJsM0H];
                kqEJsM0H = kqEJsM0H + (531 - 530);
            }
        }
        OWdmkIuwO[yruFTdLP] = '\0';
        getchar ();
        getchar ();
        printf ("%s", OWdmkIuwO);
    }
}

