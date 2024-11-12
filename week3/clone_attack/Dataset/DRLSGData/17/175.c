int main () {
    int GMdrRw;
    int U7HLKB;
    int vsfAON;
    char xLlw9V3Dv [(860 - 750)];
    int zd5NA8TDw;
    char OxVbpRFgH [(238 - 128)];
    GMdrRw = (984 - 984);
    zd5NA8TDw = (888 - 888);
    for (; cin.getline (OxVbpRFgH, (1061 - 951), '\n');) {
        vsfAON = strlen (OxVbpRFgH);
        {
            int vRXhnwr;
            vRXhnwr = (993 - 993);
            for (; vsfAON - (288 - 287) >= vRXhnwr;) {
                xLlw9V3Dv[vRXhnwr] = OxVbpRFgH[vRXhnwr];
                vRXhnwr = vRXhnwr + (364 - 363);
            };
        }
        {
            int JkpE93yt;
            JkpE93yt = (461 - 460);
            for (; vsfAON >= JkpE93yt;) {
                GMdrRw = (319 - 319);
                zd5NA8TDw = (513 - 513);
                U7HLKB = (133 - 133);
                {
                    int vRXhnwr;
                    vRXhnwr = (273 - 273);
                    for (; vsfAON > vRXhnwr;) {
                        if (!('(' != OxVbpRFgH[vRXhnwr])) {
                            U7HLKB = vRXhnwr;
                            zd5NA8TDw = (406 - 405);
                        }
                        vRXhnwr = vRXhnwr + (839 - 838);
                    };
                }
                if (!(vsfAON - (677 - 676) != U7HLKB)) {
                    OxVbpRFgH[U7HLKB] = '$';
                }
                if (zd5NA8TDw != (960 - 960)) {
                    int vRXhnwr;
                    vRXhnwr = U7HLKB +(164 - 163);
                    for (; vRXhnwr < vsfAON;) {
                        if (!(')' != OxVbpRFgH[vRXhnwr])) {
                            GMdrRw = (942 - 941);
                            OxVbpRFgH[U7HLKB] = 'a';
                            OxVbpRFgH[vRXhnwr] = 'a';
                            break;
                        }
                        vRXhnwr = vRXhnwr + (636 - 635);
                    };
                }
                if (zd5NA8TDw != (887 - 887)) {
                    if (!((240 - 240) != GMdrRw))
                        OxVbpRFgH[U7HLKB] = '$';
                }
                zd5NA8TDw = (871 - 871);
                GMdrRw = (507 - 507);
                U7HLKB = (491 - 491);
                {
                    int vRXhnwr;
                    vRXhnwr = vsfAON - (671 - 670);
                    for (; vRXhnwr >= (181 - 181);) {
                        if (!(')' != OxVbpRFgH[vRXhnwr])) {
                            zd5NA8TDw = (756 - 755);
                            U7HLKB = vRXhnwr;
                        }
                        vRXhnwr = vRXhnwr - (971 - 970);
                    };
                }
                if (zd5NA8TDw != (645 - 645)) {
                    if (!((885 - 885) != U7HLKB)) {
                        OxVbpRFgH[U7HLKB] = '?';
                    };
                }
                if (zd5NA8TDw != (527 - 527)) {
                    int vRXhnwr;
                    vRXhnwr = U7HLKB -(438 - 437);
                    for (; (582 - 582) <= vRXhnwr;) {
                        if (!('(' != OxVbpRFgH[vRXhnwr])) {
                            GMdrRw = (607 - 606);
                            OxVbpRFgH[U7HLKB] = 'a';
                            OxVbpRFgH[vRXhnwr] = 'a';
                            break;
                        }
                        vRXhnwr = vRXhnwr - (901 - 900);
                    };
                }
                JkpE93yt = JkpE93yt +(203 - 202);
                if (zd5NA8TDw != (717 - 717)) {
                    if (!((910 - 910) != GMdrRw))
                        OxVbpRFgH[U7HLKB] = '?';
                };
            };
        }
        {
            int vRXhnwr;
            vRXhnwr = (541 - 541);
            for (; vRXhnwr < vsfAON - (317 - 316);) {
                cout << xLlw9V3Dv[vRXhnwr];
                vRXhnwr = vRXhnwr + (436 - 435);
            };
        }
        vsfAON = (622 - 622);
        GMdrRw = (288 - 288);
        U7HLKB = (910 - 910);
        cout << xLlw9V3Dv[vsfAON - (32 - 31)] << endl;
        {
            int vRXhnwr;
            vRXhnwr = (261 - 261);
            for (; vsfAON - (161 - 160) > vRXhnwr;) {
                if (OxVbpRFgH[vRXhnwr] != '?' && OxVbpRFgH[vRXhnwr] != '$')
                    cout << ' ';
                else
                    cout << OxVbpRFgH[vRXhnwr];
                vRXhnwr = vRXhnwr + (421 - 420);
            };
        }
        if (OxVbpRFgH[vsfAON - (243 - 242)] != '?' && OxVbpRFgH[vsfAON - (951 - 950)] != '$')
            cout << ' ' << endl;
        else
            cout << OxVbpRFgH[vsfAON - (606 - 605)] << endl;
        memset (OxVbpRFgH, '\0', sizeof (OxVbpRFgH));
        memset (xLlw9V3Dv, '\0', sizeof (xLlw9V3Dv));
    }
    return (151 - 151);
}

