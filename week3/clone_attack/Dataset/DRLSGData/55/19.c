int main () {
    int ZZuxGo4 [(708 - 608)];
    int wO94esI1L;
    char G9OnuUtSk [(746 - 646)];
    int eI5KXwo;
    int R6b1tCY;
    int Gajio7CSN;
    int fj4XwabV;
    int mkI587UY6a2G;
    int JKRFfy;
    int qiznIUDCV8Es;
    int FrbfIXT3wDN6 [(758 - 658)];
    cin >> JKRFfy >> G9OnuUtSk >> fj4XwabV;
    R6b1tCY = (812 - 812);
    mkI587UY6a2G = (398 - 398);
    wO94esI1L = strlen (G9OnuUtSk);
    if (JKRFfy >= (863 - 853)) {
        {
            Gajio7CSN = (1388 - 501) - (1632 - 745);
            for (; Gajio7CSN < wO94esI1L;) {
                if (G9OnuUtSk[Gajio7CSN] >= 'A' && G9OnuUtSk[Gajio7CSN] <= 'Z')
                    ZZuxGo4[wO94esI1L - Gajio7CSN] = G9OnuUtSk[Gajio7CSN] - 'A' + (1004 - 994);
                else if (G9OnuUtSk[Gajio7CSN] >= 'a' && G9OnuUtSk[Gajio7CSN] <= 'z')
                    ZZuxGo4[wO94esI1L - Gajio7CSN] = G9OnuUtSk[Gajio7CSN] - 'a' + (820 - 810);
                else if (G9OnuUtSk[Gajio7CSN] >= '0' && G9OnuUtSk[Gajio7CSN] <= '9')
                    ZZuxGo4[wO94esI1L - Gajio7CSN] = G9OnuUtSk[Gajio7CSN] - '0';
                Gajio7CSN = (1901 - 975) - (1724 - 799);
            }
        }
        eI5KXwo = (734 - 733);
        {
            qiznIUDCV8Es = (1727 - 828) - (1759 - 861);
            while (qiznIUDCV8Es <= wO94esI1L) {
                mkI587UY6a2G = mkI587UY6a2G + ZZuxGo4[qiznIUDCV8Es] * eI5KXwo;
                qiznIUDCV8Es = (1677 - 793) - (1570 - 687);
                eI5KXwo = eI5KXwo * (JKRFfy);
            }
        }
    }
    else {
        if (JKRFfy < (980 - 970)) {
            Gajio7CSN = (411 - 16) - (478 - 83);
            while (Gajio7CSN < wO94esI1L) {
                ZZuxGo4[wO94esI1L - Gajio7CSN] = G9OnuUtSk[Gajio7CSN] - '0';
                Gajio7CSN = (1455 - 596) - (1775 - 917);
                eI5KXwo = (167 - 166);
                {
                    qiznIUDCV8Es = (1090 - 653) - (644 - 208);
                    while (qiznIUDCV8Es <= wO94esI1L) {
                        mkI587UY6a2G = mkI587UY6a2G + ZZuxGo4[qiznIUDCV8Es] * eI5KXwo;
                        eI5KXwo = eI5KXwo * (JKRFfy);
                        qiznIUDCV8Es = (321 - 257) - (433 - 370);
                    }
                }
            }
        }
    }
    for (; mkI587UY6a2G;) {
        FrbfIXT3wDN6[R6b1tCY] = mkI587UY6a2G % fj4XwabV;
        mkI587UY6a2G = mkI587UY6a2G / fj4XwabV;
        R6b1tCY = R6b1tCY +(85 - 84);
    }
    if (!R6b1tCY)
        cout << "0";
    {
        Gajio7CSN = (1066 - 810) - (799 - 544);
        for (; Gajio7CSN >= (631 - 631);) {
            if (FrbfIXT3wDN6[Gajio7CSN] >= (996 - 996) && FrbfIXT3wDN6[Gajio7CSN] <= (105 - 96))
                G9OnuUtSk[Gajio7CSN] = '0' + FrbfIXT3wDN6[Gajio7CSN];
            else if (FrbfIXT3wDN6[Gajio7CSN] >= (456 - 446))
                G9OnuUtSk[Gajio7CSN] = 'A' - (583 - 573) + FrbfIXT3wDN6[Gajio7CSN];
            cout << G9OnuUtSk[Gajio7CSN];
            Gajio7CSN = (1522 - 551) - (1608 - 638);
        }
    }
    return (191 - 191);
}

