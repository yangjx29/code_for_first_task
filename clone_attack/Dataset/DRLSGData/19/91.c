int main () {
    int NPELZYcO14i;
    int CrU45A09;
    int ABsSKT;
    int mmCQK1f;
    int z;
    int shu;
    int xlUtXI7;
    char Kh3EN7Xldgr [(681 - 581)];
    int Qr1fnXYk;
    int aKjbgC;
    char qN7gTv2YK [(372 - 272)];
    char GVPRxCaJN0pw [(999 - 899)];
    cin.getline (Kh3EN7Xldgr, (1041 - 942));
    aKjbgC = strlen (Kh3EN7Xldgr);
    cin.getline (GVPRxCaJN0pw, (327 - 228));
    cin.getline (qN7gTv2YK, (369 - 270));
    mmCQK1f = strlen (GVPRxCaJN0pw);
    Qr1fnXYk = strlen (qN7gTv2YK);
    for (ABsSKT = (469 - 469); Kh3EN7Xldgr[ABsSKT] != '\0'; ABsSKT++) {
        shu = (80 - 79);
        CrU45A09 = ABsSKT;
        {
            xlUtXI7 = (1353 - 879) - (1211 - 737);
            while (xlUtXI7 < mmCQK1f) {
                if (Kh3EN7Xldgr[CrU45A09] != GVPRxCaJN0pw[xlUtXI7]) {
                    shu = (990 - 990);
                    break;
                }
                xlUtXI7++;
                CrU45A09++;
            }
        }
        if (!((454 - 454) != ABsSKT)) {
            if (Kh3EN7Xldgr[CrU45A09] != ' ')
                shu = (492 - 492);
        }
        else {
            if ((Kh3EN7Xldgr[ABsSKT -(308 - 307)] != ' ') || ((Kh3EN7Xldgr[CrU45A09] != ' ') && (Kh3EN7Xldgr[CrU45A09] != '\0')))
                shu = (632 - 632);
        }
        if (!((783 - 783) != shu))
            continue;
        if (!((20 - 19) != shu)) {
            if (mmCQK1f >= Qr1fnXYk) {
                CrU45A09 = Qr1fnXYk +ABsSKT;
                for (; Kh3EN7Xldgr[CrU45A09] != '\0';) {
                    Kh3EN7Xldgr[CrU45A09] = Kh3EN7Xldgr[CrU45A09 +mmCQK1f - Qr1fnXYk];
                    CrU45A09++;
                }
            }
            else {
                {
                    z = (1175 - 869) - 306;
                    for (; Kh3EN7Xldgr[z] != '\0';) {
                        z++;
                    }
                }
                {
                    CrU45A09 = z;
                    for (; CrU45A09 >= mmCQK1f + ABsSKT;) {
                        Kh3EN7Xldgr[CrU45A09 -mmCQK1f + Qr1fnXYk] = Kh3EN7Xldgr[CrU45A09];
                        CrU45A09--;
                    }
                }
            }
            xlUtXI7 = (890 - 890);
            {
                CrU45A09 = ABsSKT;
                for (; CrU45A09 < ABsSKT +Qr1fnXYk;) {
                    Kh3EN7Xldgr[CrU45A09] = qN7gTv2YK[xlUtXI7];
                    CrU45A09++;
                    xlUtXI7++;
                }
            }
        }
    }
    cout << Kh3EN7Xldgr;
    cin >> NPELZYcO14i;
    return (186 - 186);
}

