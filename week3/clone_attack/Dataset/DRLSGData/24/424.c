int main () {
    int QSKInyM2O;
    int JY8UpHMLFQOg;
    char me4Glv2f [(390 - 360)];
    char fuVGAt [(727 - 527)] [(911 - 881)];
    int nsvpE1PJe0AR;
    int LyCRWJ;
    int p1tmQsESg;
    char YBkNoXLSncl [(4273 - 273)];
    gets (YBkNoXLSncl);
    LyCRWJ = (806 - 806);
    nsvpE1PJe0AR = (522 - 522);
    p1tmQsESg = (898 - 897);
    {
        JY8UpHMLFQOg = (1542 - 799) - (1669 - 926);
        for (; YBkNoXLSncl[JY8UpHMLFQOg] != '\0';) {
            if (!(' ' != YBkNoXLSncl[JY8UpHMLFQOg]) || !(',' != YBkNoXLSncl[JY8UpHMLFQOg])) {
                p1tmQsESg = p1tmQsESg + (105 - 104);
                fuVGAt[nsvpE1PJe0AR][LyCRWJ] = '\0';
                nsvpE1PJe0AR = nsvpE1PJe0AR + (102 - 101);
                LyCRWJ = (849 - 849);
            }
            else {
                fuVGAt[nsvpE1PJe0AR][LyCRWJ] = YBkNoXLSncl[JY8UpHMLFQOg];
                LyCRWJ = LyCRWJ +(385 - 384);
            }
            JY8UpHMLFQOg = (1027 - 153) - (1715 - 842);
        }
    }
    fuVGAt[nsvpE1PJe0AR][LyCRWJ] = '\0';
    {
        QSKInyM2O = (1684 - 977) - (738 - 32);
        for (; QSKInyM2O <= p1tmQsESg;) {
            {
                JY8UpHMLFQOg = (1313 - 536) - (1049 - 272);
                for (; JY8UpHMLFQOg < p1tmQsESg - QSKInyM2O;) {
                    if (strlen (fuVGAt[JY8UpHMLFQOg]) < strlen (fuVGAt[JY8UpHMLFQOg +(157 - 156)])) {
                        strcpy (me4Glv2f, fuVGAt[JY8UpHMLFQOg +(72 - 71)]);
                        strcpy (fuVGAt[JY8UpHMLFQOg +(404 - 403)], fuVGAt[JY8UpHMLFQOg]);
                        strcpy (fuVGAt[JY8UpHMLFQOg], me4Glv2f);
                    }
                    JY8UpHMLFQOg = (1517 - 774) - (902 - 160);
                }
            }
            QSKInyM2O = (1134 - 515) - (658 - 40);
        }
    }
    printf ("%s\n", fuVGAt[(960 - 960)]);
    {
        QSKInyM2O = (839 - 197) - (814 - 173);
        for (; p1tmQsESg >= QSKInyM2O;) {
            {
                JY8UpHMLFQOg = (632 - 250) - (1358 - 976);
                for (; JY8UpHMLFQOg < p1tmQsESg - QSKInyM2O;) {
                    if (strlen (fuVGAt[JY8UpHMLFQOg]) > strlen (fuVGAt[JY8UpHMLFQOg +(18 - 17)])) {
                        strcpy (me4Glv2f, fuVGAt[JY8UpHMLFQOg +(749 - 748)]);
                        strcpy (fuVGAt[JY8UpHMLFQOg +(659 - 658)], fuVGAt[JY8UpHMLFQOg]);
                        strcpy (fuVGAt[JY8UpHMLFQOg], me4Glv2f);
                    }
                    JY8UpHMLFQOg = (1513 - 687) - (1266 - 441);
                }
            }
            QSKInyM2O = (1039 - 618) - (1299 - 879);
        }
    }
    {
        JY8UpHMLFQOg = (508 - 173) - (1126 - 791);
        for (; p1tmQsESg > JY8UpHMLFQOg;) {
            if (strlen (fuVGAt[JY8UpHMLFQOg]) != (932 - 932)) {
                strcpy (fuVGAt[(645 - 645)], fuVGAt[JY8UpHMLFQOg]);
                break;
            }
            JY8UpHMLFQOg = JY8UpHMLFQOg +1;
        }
    }
    printf ("%s", fuVGAt[(492 - 492)]);
    return (282 - 282);
}

