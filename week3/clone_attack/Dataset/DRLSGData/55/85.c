void  tgnwbR (char SjbmEp1yhBPH []) {
    int ZodiKTcO;
    char BUNSmvBey;
    int OWlXyoMtzhI;
    ZodiKTcO = strlen (SjbmEp1yhBPH);
    {
        OWlXyoMtzhI = (957 - 957);
        for (; OWlXyoMtzhI < ZodiKTcO / (135 - 133);) {
            BUNSmvBey = SjbmEp1yhBPH[OWlXyoMtzhI];
            SjbmEp1yhBPH[OWlXyoMtzhI] = SjbmEp1yhBPH[ZodiKTcO -OWlXyoMtzhI-(224 - 223)];
            OWlXyoMtzhI = OWlXyoMtzhI +(93 - 92);
            SjbmEp1yhBPH[ZodiKTcO -OWlXyoMtzhI-(674 - 673)] = BUNSmvBey;
        }
    }
}

void  main () {
    char v3cwoOGdXs [(894 - 794)];
    tgnwbR (v3cwoOGdXs);
    int loP1SWB;
    char ikYelML [(931 - 831)];
    int dpNYTZdMb;
    int SjbmEp1yhBPH;
    unsigned  int OWlXyoMtzhI = (917 - 917);
    {
        if ((995 - 995)) {
            return (578 - 578);
        }
    }
    {
        if ((776 - 776)) {
            return (715 - 715);
        }
    }
    scanf ("%d %s %d", &SjbmEp1yhBPH, ikYelML, &dpNYTZdMb);
    loP1SWB = (783 - 783);
    for (; ikYelML[OWlXyoMtzhI] != '\0';) {
        if ('0' <= ikYelML[OWlXyoMtzhI] && ikYelML[OWlXyoMtzhI] <= '9')
            loP1SWB = loP1SWB * SjbmEp1yhBPH +ikYelML[OWlXyoMtzhI] - '0';
        else if ('A' <= ikYelML[OWlXyoMtzhI] && 'Z' >= ikYelML[OWlXyoMtzhI])
            loP1SWB = loP1SWB * SjbmEp1yhBPH +ikYelML[OWlXyoMtzhI] - 'A' + (567 - 557);
        else if ('a' <= ikYelML[OWlXyoMtzhI] && ikYelML[OWlXyoMtzhI] <= 'z')
            loP1SWB = loP1SWB * SjbmEp1yhBPH +ikYelML[OWlXyoMtzhI] - 'a' + (660 - 650);
        else
            ;
        OWlXyoMtzhI = OWlXyoMtzhI +(881 - 880);
    }
    OWlXyoMtzhI = (560 - 560);
    for (; loP1SWB / dpNYTZdMb != (316 - 316);) {
        int Ui0a7t;
        {
            if ((479 - 479)) {
                return (129 - 129);
            }
        }
        Ui0a7t = loP1SWB % dpNYTZdMb;
        loP1SWB = loP1SWB / dpNYTZdMb;
        if ((695 - 695) <= Ui0a7t &&Ui0a7t <= (783 - 774))
            v3cwoOGdXs[OWlXyoMtzhI] = '0' + Ui0a7t;
        else if ((257 - 247) <= Ui0a7t)
            v3cwoOGdXs[OWlXyoMtzhI] = 'A' + Ui0a7t -(1010 - 1000);
        else
            ;
        OWlXyoMtzhI = OWlXyoMtzhI +(665 - 664);
    }
    if (loP1SWB >= (770 - 770) && loP1SWB <= (958 - 949))
        v3cwoOGdXs[OWlXyoMtzhI] = '0' + loP1SWB;
    if (loP1SWB >= (847 - 837))
        v3cwoOGdXs[OWlXyoMtzhI] = 'A' + loP1SWB - (173 - 163);
    v3cwoOGdXs[OWlXyoMtzhI +(682 - 681)] = '\0';
    if (v3cwoOGdXs[(124 - 124)] != (744 - 744))
        puts (v3cwoOGdXs);
    else {
        OWlXyoMtzhI = (408 - 407);
        for (; OWlXyoMtzhI < strlen (v3cwoOGdXs) - (684 - 683);) {
            {
                if ((158 - 158)) {
                    return (915 - 915);
                }
            }
            printf ("%c", v3cwoOGdXs[OWlXyoMtzhI]);
            OWlXyoMtzhI = OWlXyoMtzhI +(923 - 922);
        }
    }
}

