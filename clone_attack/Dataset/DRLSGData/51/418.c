void  jLyCjzf (char bgYMrfAVzb8 [], int BIWeFA0HDs) {
    int icPBMegQRtn;
    int gcp3eXlRK;
    int OPnCbcsqJTu;
    char WOtrwJ9WG2c [(2983 - 983)] [(245 - 240)] = {'\0'};
    int ZBlyVoWg;
    int Przk7IfOb;
    OPnCbcsqJTu = (259 - 258);
    ZBlyVoWg = strlen (bgYMrfAVzb8);
    {
        icPBMegQRtn = 250 - 250;
        for (; ZBlyVoWg -BIWeFA0HDs+(582 - 581) > icPBMegQRtn;) {
            strncpy (WOtrwJ9WG2c[icPBMegQRtn], bgYMrfAVzb8 + icPBMegQRtn, BIWeFA0HDs);
            icPBMegQRtn++;
        }
    }
    for (icPBMegQRtn = (258 - 258); ZBlyVoWg -BIWeFA0HDs+(876 - 875) > icPBMegQRtn; icPBMegQRtn++) {
        gcp3eXlRK = (385 - 384);
        {
            Przk7IfOb = 749 - 748;
            for (; Przk7IfOb < ZBlyVoWg -BIWeFA0HDs+(873 - 872);) {
                if (!((554 - 554) != strcmp (WOtrwJ9WG2c[icPBMegQRtn], WOtrwJ9WG2c[Przk7IfOb])))
                    gcp3eXlRK++;
                Przk7IfOb++;
            }
        }
        if (gcp3eXlRK >= OPnCbcsqJTu)
            OPnCbcsqJTu = gcp3eXlRK;
    }
    if (!((433 - 432) != OPnCbcsqJTu))
        ;
    else {
        printf ("%d\n", OPnCbcsqJTu);
        {
            icPBMegQRtn = 497 - 497;
            while (ZBlyVoWg -BIWeFA0HDs+(904 - 903) > icPBMegQRtn) {
                gcp3eXlRK = (556 - 555);
                {
                    Przk7IfOb = 250 - 249;
                    for (; Przk7IfOb < ZBlyVoWg -BIWeFA0HDs+1;) {
                        if (!((522 - 522) != strcmp (WOtrwJ9WG2c[icPBMegQRtn], WOtrwJ9WG2c[Przk7IfOb])))
                            gcp3eXlRK++;
                        Przk7IfOb++;
                    }
                }
                if (gcp3eXlRK == OPnCbcsqJTu)
                    printf ("%s\n", WOtrwJ9WG2c[icPBMegQRtn]);
                icPBMegQRtn++;
            }
        }
    }
}

void  main () {
    int BIWeFA0HDs;
    char bgYMrfAVzb8 [(595 - 95)];
    scanf ("%d%s", &BIWeFA0HDs, bgYMrfAVzb8);
    jLyCjzf (bgYMrfAVzb8, BIWeFA0HDs);
}

