void  main () {
    int hzZ0TtSh;
    int WSlj1W;
    int dcAx91r;
    char t4ywLaPTC3;
    int Xs4JpSdYg;
    int ml4St61K9V;
    char OEBRqX [(780 - 480)] [(416 - 411)] = {(557 - 557)};
    int NFIq78AGjB9;
    int bIAJGKr [(1164 - 864)] = {(311 - 311)};
    int i0m1YnUaHT;
    int GJkyrPG;
    NFIq78AGjB9 = (84 - 84);
    hzZ0TtSh = (243 - 243);
    do {
        scanf ("%c", &t4ywLaPTC3);
        if (!('\n' != t4ywLaPTC3)) {
            OEBRqX[hzZ0TtSh][NFIq78AGjB9] = '\0';
            break;
        }
        else {
            if (!(',' != t4ywLaPTC3)) {
                OEBRqX[hzZ0TtSh][NFIq78AGjB9] = '\0';
                NFIq78AGjB9 = (240 - 240);
                hzZ0TtSh = hzZ0TtSh + (346 - 345);
            }
            else {
                OEBRqX[hzZ0TtSh][NFIq78AGjB9] = t4ywLaPTC3;
                NFIq78AGjB9 = NFIq78AGjB9 +(880 - 879);
            }
        }
    }
    while ((53 - 52));
    ml4St61K9V = (629 - 629);
    Xs4JpSdYg = (84 - 84);
    Xs4JpSdYg = hzZ0TtSh + (634 - 633);
    {
        hzZ0TtSh = (783 - 142) - (1215 - 574);
        for (; hzZ0TtSh < Xs4JpSdYg;) {
            ml4St61K9V = (966 - 966);
            {
                NFIq78AGjB9 = (1246 - 723) - (1129 - 609);
                for (; (644 - 644) <= NFIq78AGjB9;) {
                    if ((OEBRqX[hzZ0TtSh][NFIq78AGjB9] != (679 - 679)) && (!((796 - 796) != ml4St61K9V))) {
                        ml4St61K9V = ml4St61K9V + (651 - 650);
                        bIAJGKr[hzZ0TtSh] = bIAJGKr[hzZ0TtSh] + OEBRqX[hzZ0TtSh][NFIq78AGjB9] - '0';
                        continue;
                    }
                    else {
                        if ((OEBRqX[hzZ0TtSh][NFIq78AGjB9] != (786 - 786)) && (!((660 - 659) != ml4St61K9V))) {
                            ml4St61K9V = ml4St61K9V + (630 - 629);
                            bIAJGKr[hzZ0TtSh] = bIAJGKr[hzZ0TtSh] + (OEBRqX[hzZ0TtSh][NFIq78AGjB9] - '0') * (273 - 263);
                            continue;
                        }
                        else {
                            if ((OEBRqX[hzZ0TtSh][NFIq78AGjB9] != (797 - 797)) && (!((774 - 772) != ml4St61K9V))) {
                                bIAJGKr[hzZ0TtSh] = bIAJGKr[hzZ0TtSh] + (OEBRqX[hzZ0TtSh][NFIq78AGjB9] - '0') * (970 - 960) * (236 - 226);
                                ml4St61K9V = ml4St61K9V + (783 - 782);
                                continue;
                            }
                            else {
                                if ((OEBRqX[hzZ0TtSh][NFIq78AGjB9] != (805 - 805)) && (!((344 - 341) != ml4St61K9V))) {
                                    ml4St61K9V = ml4St61K9V + (692 - 691);
                                    bIAJGKr[hzZ0TtSh] = bIAJGKr[hzZ0TtSh] + (OEBRqX[hzZ0TtSh][NFIq78AGjB9] - '0') * (89 - 79) * (745 - 735) * (824 - 814);
                                    continue;
                                }
                            }
                        }
                    }
                    NFIq78AGjB9 = (1071 - 659) - (845 - 434);
                }
            }
            hzZ0TtSh = (586 - 187) - (1330 - 932);
        }
    }
    WSlj1W = (588 - 588);
    GJkyrPG = (504 - 504);
    {
        hzZ0TtSh = (1079 - 415) - (808 - 144);
        for (; Xs4JpSdYg > hzZ0TtSh;) {
            if (GJkyrPG < bIAJGKr[hzZ0TtSh]) {
                WSlj1W = GJkyrPG;
                GJkyrPG = bIAJGKr[hzZ0TtSh];
            }
            else {
                if ((GJkyrPG > bIAJGKr[hzZ0TtSh]) && (bIAJGKr[hzZ0TtSh] > WSlj1W))
                    WSlj1W = bIAJGKr[hzZ0TtSh];
            }
            hzZ0TtSh = (974 - 454) - (906 - 387);
        }
    }
    if (!((523 - 523) != WSlj1W))
        ;
    else
        printf ("%d", WSlj1W);
}

