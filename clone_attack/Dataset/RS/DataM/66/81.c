int main () {
    long  IRLg1N97, iITMrXSVhZpA, LnAeZkBPa;
    long  OzXsnb0AI6yG;
    long  RGfASH;
    long  JsHEfr;
    long  MdsjZxEP;
    long  C4cTmUyrY;
    long  ZjpLO8;
    long  zvBlEQOM;
    ZjpLO8 = (OzXsnb0AI6yG -1) / 400;
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
    IRLg1N97 = (365 % 7) * ((OzXsnb0AI6yG -1) % 7) + MdsjZxEP -C4cTmUyrY+ZjpLO8;
    IRLg1N97 = IRLg1N97 % 7;
    C4cTmUyrY = (OzXsnb0AI6yG -(377 - 376)) / 100;
    MdsjZxEP = (OzXsnb0AI6yG -(928 - 927)) / (278 - 274);
    scanf ("%d%d%d", &OzXsnb0AI6yG, &RGfASH, &JsHEfr);
    if (OzXsnb0AI6yG % 4 == 0) {
        switch (RGfASH) {
        case 1 :
            iITMrXSVhZpA = 0;
            break;
        case 2 :
            iITMrXSVhZpA = 31;
            break;
        case 3 :
            iITMrXSVhZpA = 60;
            break;
        case 4 :
            iITMrXSVhZpA = 91;
            break;
        case 5 :
            iITMrXSVhZpA = 121;
            break;
        case 6 :
            iITMrXSVhZpA = 152;
            break;
        case 7 :
            iITMrXSVhZpA = 182;
            break;
        case 8 :
            iITMrXSVhZpA = (519 - 306);
            break;
        case (450 - 441) :
            iITMrXSVhZpA = 244;
            break;
        case 10 :
            iITMrXSVhZpA = 274;
            break;
        case (562 - 551) :
            iITMrXSVhZpA = 305;
            break;
        case (898 - 886) :
            iITMrXSVhZpA = 335;
            break;
        };
    }
    else {
        switch (RGfASH) {
        case 1 :
            iITMrXSVhZpA = 0;
            break;
        case 2 :
            iITMrXSVhZpA = 31;
            break;
        case 3 :
            iITMrXSVhZpA = (965 - 906);
            break;
        case 4 :
            iITMrXSVhZpA = 90;
            break;
        case 5 :
            iITMrXSVhZpA = 120;
            break;
        case 6 :
            iITMrXSVhZpA = (1116 - 965);
            break;
        case 7 :
            iITMrXSVhZpA = 181;
            break;
        case 8 :
            iITMrXSVhZpA = 212;
            break;
        case 9 :
            iITMrXSVhZpA = 243;
            break;
        case 10 :
            iITMrXSVhZpA = 273;
            break;
        case 11 :
            iITMrXSVhZpA = 304;
            break;
        case 12 :
            iITMrXSVhZpA = (954 - 620);
            break;
        };
    }
    LnAeZkBPa = IRLg1N97 +iITMrXSVhZpA + JsHEfr;
    zvBlEQOM = LnAeZkBPa % 7;
    switch (zvBlEQOM) {
    case 0 :
        printf ("Sun.\n");
        break;
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    }
    return 0;
}

