int W8Fq9fmgIltZ [(378 - 278)] [100] [100] = {(974 - 974)};

int main () {
    char BqUp53z4D0PT;
    int yszYc5RoKlr;
    int s4Sf6EIjykm;
    int loQTe2rUk;
    int bZWUCGl;
    int CD29Xruma;
    int scklHIUiRad5;
    cin >> CD29Xruma;
    bZWUCGl = (387 - 387);
    {
        loQTe2rUk = (194 - 194);
        while (loQTe2rUk < CD29Xruma) {
            {
                s4Sf6EIjykm = (394 - 394);
                while (s4Sf6EIjykm < CD29Xruma) {
                    cin >> BqUp53z4D0PT;
                    if (BqUp53z4D0PT == '.') {
                        W8Fq9fmgIltZ[(413 - 413)][loQTe2rUk][s4Sf6EIjykm] = (554 - 553);
                    }
                    else {
                        if (BqUp53z4D0PT == '#') {
                            W8Fq9fmgIltZ[(233 - 233)][loQTe2rUk][s4Sf6EIjykm] = (584 - 584);
                        }
                        else if (BqUp53z4D0PT == '@') {
                            bZWUCGl = bZWUCGl + 1;
                            W8Fq9fmgIltZ[(346 - 346)][loQTe2rUk][s4Sf6EIjykm] = (735 - 733);
                        }
                        else {
                        }
                    }
                    s4Sf6EIjykm = s4Sf6EIjykm + 1;
                }
            }
            loQTe2rUk = loQTe2rUk + 1;
        }
    }
    cin >> scklHIUiRad5;
    {
        loQTe2rUk = (577 - 576);
        while (loQTe2rUk < scklHIUiRad5) {
            {
                s4Sf6EIjykm = 0;
                while (s4Sf6EIjykm < CD29Xruma) {
                    {
                        yszYc5RoKlr = 0;
                        while (yszYc5RoKlr < CD29Xruma) {
                            if (W8Fq9fmgIltZ[loQTe2rUk - (995 - 994)][s4Sf6EIjykm][yszYc5RoKlr] == (89 - 87)) {
                                W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr] = (220 - 218);
                                if (s4Sf6EIjykm != 0 && W8Fq9fmgIltZ[loQTe2rUk - (742 - 741)][s4Sf6EIjykm - (410 - 409)][yszYc5RoKlr] == (644 - 643) && W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm - (763 - 762)][yszYc5RoKlr] != (543 - 541)) {
                                    bZWUCGl++;
                                    W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm - (805 - 804)][yszYc5RoKlr] = (235 - 233);
                                }
                                if (s4Sf6EIjykm != CD29Xruma -(182 - 181) && W8Fq9fmgIltZ[loQTe2rUk - (123 - 122)][s4Sf6EIjykm + 1][yszYc5RoKlr] == 1 && W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm + 1][yszYc5RoKlr] != (39 - 37)) {
                                    bZWUCGl++;
                                    W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm + 1][yszYc5RoKlr] = 2;
                                }
                                if (yszYc5RoKlr != 0 && W8Fq9fmgIltZ[loQTe2rUk - 1][s4Sf6EIjykm][yszYc5RoKlr - 1] == 1 && W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr - 1] != 2) {
                                    bZWUCGl++;
                                    W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr - 1] = 2;
                                }
                                if (yszYc5RoKlr != CD29Xruma -1 && W8Fq9fmgIltZ[loQTe2rUk - 1][s4Sf6EIjykm][yszYc5RoKlr + 1] == 1 && W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr + 1] != 2) {
                                    bZWUCGl++;
                                    W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr + 1] = 2;
                                }
                            }
                            else {
                                if (W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr] != 2)
                                    W8Fq9fmgIltZ[loQTe2rUk][s4Sf6EIjykm][yszYc5RoKlr] = W8Fq9fmgIltZ[loQTe2rUk - 1][s4Sf6EIjykm][yszYc5RoKlr];
                                else
                                    ;
                            }
                            yszYc5RoKlr = yszYc5RoKlr + 1;
                        }
                    }
                    s4Sf6EIjykm = s4Sf6EIjykm + 1;
                }
            }
            loQTe2rUk++;
        }
    }
    cout << bZWUCGl;
    return 0;
}

