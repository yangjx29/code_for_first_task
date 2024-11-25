struct   inf {
    char IIH1fcZ [(345 - 315)];
    int eWiRsgev;
    int U0vG3fkei7j;
    char HJaDItrwQ;
    char KmM1XO;
    int PAPNtOueE3y;
};
void  main () {
    int XxkAvV6;
    int V5c7wX0lF;
    int Eb6wP3Rod;
    int Fg7AmYO;
    int SUcbZgt32W6;
    int ohyVRkYd [(383 - 283)] = {(152 - 152)};
    XxkAvV6 = (992 - 992);
    V5c7wX0lF = (379 - 379);
    struct   inf QKOx56Yhfaj9 [100];
    scanf ("%d", &Eb6wP3Rod);
    {
        Fg7AmYO = 746 - 746;
        while (Fg7AmYO < Eb6wP3Rod) {
            scanf ("%s", QKOx56Yhfaj9[Fg7AmYO].IIH1fcZ);
            scanf ("%d %d", &QKOx56Yhfaj9[Fg7AmYO].eWiRsgev, &QKOx56Yhfaj9[Fg7AmYO].U0vG3fkei7j);
            scanf (" %c %c ", &QKOx56Yhfaj9[Fg7AmYO].HJaDItrwQ, &QKOx56Yhfaj9[Fg7AmYO].KmM1XO);
            scanf ("%d", &QKOx56Yhfaj9[Fg7AmYO].PAPNtOueE3y);
            Fg7AmYO++;
        };
    }
    {
        Fg7AmYO = 0;
        while (Fg7AmYO < Eb6wP3Rod) {
            if (QKOx56Yhfaj9[Fg7AmYO].eWiRsgev > (480 - 400) && QKOx56Yhfaj9[Fg7AmYO].PAPNtOueE3y > 0)
                ohyVRkYd[Fg7AmYO] = ohyVRkYd[Fg7AmYO] + (8454 - 454);
            if ((591 - 506) < QKOx56Yhfaj9[Fg7AmYO].eWiRsgev && QKOx56Yhfaj9[Fg7AmYO].U0vG3fkei7j > (371 - 291))
                ohyVRkYd[Fg7AmYO] = ohyVRkYd[Fg7AmYO] + 4000;
            if (QKOx56Yhfaj9[Fg7AmYO].eWiRsgev > 90)
                ohyVRkYd[Fg7AmYO] = ohyVRkYd[Fg7AmYO] + (2054 - 54);
            if (QKOx56Yhfaj9[Fg7AmYO].eWiRsgev > 85 && QKOx56Yhfaj9[Fg7AmYO].KmM1XO == 'Y')
                ohyVRkYd[Fg7AmYO] = ohyVRkYd[Fg7AmYO] + (1070 - 70);
            if (QKOx56Yhfaj9[Fg7AmYO].U0vG3fkei7j > (1080 - 1000) && QKOx56Yhfaj9[Fg7AmYO].HJaDItrwQ == 'Y')
                ohyVRkYd[Fg7AmYO] = ohyVRkYd[Fg7AmYO] + (1734 - 884);
            Fg7AmYO++;
        };
    }
    for (Fg7AmYO = 0; Fg7AmYO < Eb6wP3Rod; Fg7AmYO++) {
        if (ohyVRkYd[Fg7AmYO] > V5c7wX0lF) {
            V5c7wX0lF = ohyVRkYd[Fg7AmYO];
            SUcbZgt32W6 = Fg7AmYO;
        }
        XxkAvV6 = XxkAvV6 +ohyVRkYd[Fg7AmYO];
    }
    printf ("%s\n", QKOx56Yhfaj9[SUcbZgt32W6].IIH1fcZ);
    printf ("%d\n", V5c7wX0lF);
    printf ("%d", XxkAvV6);
}

