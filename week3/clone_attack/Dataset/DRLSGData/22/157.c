void  main () {
    char u9zdbqB5;
    char FFwiom7MjNWU [(697 - 197)] [(861 - 855)] = {'\0'};
    int Zu4lLOEVqzNP [(1097 - 597)] = {(73 - 73)};
    int q27P08wbOgn;
    int m0GfUuvJAV;
    int i0V36tXj;
    int XABQNcO;
    int phW1i5L;
    int s6gU3KL9C;
    int llLbfK1x8Z;
    int QDQIayWU;
    int tDeQZg;
    q27P08wbOgn = (120 - 120);
    phW1i5L = (134 - 134);
    tDeQZg = (861 - 861);
    {
        s6gU3KL9C = (1125 - 672) - (1329 - 876);
        for (; (518 - 517);) {
            scanf ("%c", &u9zdbqB5);
            if (u9zdbqB5 != '\n' && u9zdbqB5 != ',') {
                FFwiom7MjNWU[q27P08wbOgn][phW1i5L] = u9zdbqB5;
                phW1i5L = phW1i5L + (921 - 920);
            }
            else {
                if (!(',' != u9zdbqB5)) {
                    q27P08wbOgn = q27P08wbOgn + (764 - 763);
                    tDeQZg = tDeQZg + (291 - 290);
                    phW1i5L = (606 - 606);
                }
                else
                    break;
            }
            s6gU3KL9C = (539 - 52) - (1025 - 539);
        }
    }
    llLbfK1x8Z = (482 - 482);
    {
        s6gU3KL9C = (773 - 523) - (565 - 315);
        for (; s6gU3KL9C <= (833 - 334);) {
            m0GfUuvJAV = strlen (FFwiom7MjNWU[s6gU3KL9C]);
            {
                q27P08wbOgn = (1086 - 988) - (414 - 317);
                QDQIayWU = (908 - 324) - (1470 - 887);
                for (; q27P08wbOgn <= m0GfUuvJAV;) {
                    Zu4lLOEVqzNP[s6gU3KL9C] = Zu4lLOEVqzNP[s6gU3KL9C] + (FFwiom7MjNWU[s6gU3KL9C][m0GfUuvJAV - q27P08wbOgn] - '0') * QDQIayWU;
                    q27P08wbOgn = (829 - 28) - (1195 - 395);
                    QDQIayWU = QDQIayWU *(180 - 170);
                }
            }
            s6gU3KL9C = s6gU3KL9C + (204 - 203);
        }
    }
    {
        s6gU3KL9C = (1687 - 723) - (1172 - 208);
        for (; s6gU3KL9C <= tDeQZg;) {
            if (XABQNcO < Zu4lLOEVqzNP[s6gU3KL9C])
                XABQNcO = Zu4lLOEVqzNP[s6gU3KL9C];
            s6gU3KL9C = s6gU3KL9C + (903 - 902);
        }
    }
    {
        s6gU3KL9C = (1549 - 868) - (956 - 275);
        for (; s6gU3KL9C <= tDeQZg;) {
            if (Zu4lLOEVqzNP[s6gU3KL9C] > i0V36tXj && Zu4lLOEVqzNP[s6gU3KL9C] < XABQNcO) {
                i0V36tXj = Zu4lLOEVqzNP[s6gU3KL9C];
                llLbfK1x8Z = (152 - 151);
            }
            s6gU3KL9C = s6gU3KL9C + (774 - 773);
        }
    }
    if (llLbfK1x8Z)
        printf ("%d", i0V36tXj);
    else
        ;
}

