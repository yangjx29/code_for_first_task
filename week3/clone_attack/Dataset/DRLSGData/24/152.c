void  main () {
    char *CH3Eyg;
    char AjCDuKTYzHrX;
    char *qGoYWFaltku;
    int AAfQFX45;
    int cCzYe0k3oBi4;
    int eEsSpX;
    char *UfJcyWK;
    int IDndK2;
    int xhbUsS02;
    CH3Eyg = (char *) malloc ((393 - 392));
    IDndK2 = (801 - 801);
    xhbUsS02 = (434 - 434);
    AAfQFX45 = (107 - 107);
    cCzYe0k3oBi4 = (860 - 860);
    AjCDuKTYzHrX = getchar ();
    qGoYWFaltku = (char *) malloc ((696 - 695));
    UfJcyWK = (char *) malloc (sizeof (char) * (386 - 356));
    for (; AjCDuKTYzHrX != '\n';) {
        if (AjCDuKTYzHrX != ' ') {
            *(UfJcyWK +AAfQFX45) = AjCDuKTYzHrX;
            AAfQFX45 = AAfQFX45 +(981 - 980);
        }
        else {
            free (UfJcyWK);
            if (!((558 - 558) != cCzYe0k3oBi4)) {
                free (qGoYWFaltku);
                cCzYe0k3oBi4 = (99 - 98);
                {
                    eEsSpX = (389 - 103) - (1186 - 900);
                    for (; AAfQFX45 >= eEsSpX;) {
                        *(qGoYWFaltku + eEsSpX) = *(UfJcyWK +eEsSpX);
                        eEsSpX = (1414 - 641) - (1298 - 526);
                    }
                }
                xhbUsS02 = AAfQFX45;
                qGoYWFaltku = (char *) malloc (sizeof (char) * (AAfQFX45 +(422 - 421)));
            }
            if (AAfQFX45 > IDndK2) {
                free (CH3Eyg);
                CH3Eyg = (char *) malloc (sizeof (char) * (AAfQFX45 +(551 - 550)));
                {
                    eEsSpX = (1584 - 855) - (928 - 199);
                    for (; AAfQFX45 >= eEsSpX;) {
                        *(CH3Eyg +eEsSpX) = *(UfJcyWK +eEsSpX);
                        eEsSpX = (1577 - 646) - (1236 - 306);
                    }
                }
                IDndK2 = AAfQFX45;
            }
            if (AAfQFX45 < xhbUsS02) {
                free (qGoYWFaltku);
                qGoYWFaltku = (char *) malloc (sizeof (char) * (AAfQFX45 +(372 - 371)));
                {
                    eEsSpX = (719 - 440) - (554 - 275);
                    for (; AAfQFX45 >= eEsSpX;) {
                        *(qGoYWFaltku + eEsSpX) = *(UfJcyWK +eEsSpX);
                        eEsSpX = (721 - 212) - (1319 - 811);
                    }
                }
                xhbUsS02 = AAfQFX45;
            }
            UfJcyWK = (char *) malloc (sizeof (char) * (139 - 109));
            AAfQFX45 = (103 - 103);
        }
        AjCDuKTYzHrX = getchar ();
    }
    if (IDndK2 < AAfQFX45) {
        free (CH3Eyg);
        CH3Eyg = (char *) malloc (sizeof (char) * (AAfQFX45 +(391 - 390)));
        {
            eEsSpX = (829 - 118) - (1447 - 736);
            for (; AAfQFX45 >= eEsSpX;) {
                *(CH3Eyg +eEsSpX) = *(UfJcyWK +eEsSpX);
                eEsSpX = (868 - 791) - (434 - 358);
            }
        }
        IDndK2 = AAfQFX45;
    }
    if (xhbUsS02 > AAfQFX45) {
        free (qGoYWFaltku);
        {
            eEsSpX = (1557 - 964) - (904 - 311);
            for (; eEsSpX <= AAfQFX45;) {
                *(qGoYWFaltku + eEsSpX) = *(UfJcyWK +eEsSpX);
                eEsSpX = (877 - 854) - (418 - 396);
            }
        }
        xhbUsS02 = AAfQFX45;
        qGoYWFaltku = (char *) malloc (sizeof (char) * (AAfQFX45 +(891 - 890)));
    }
    {
        eEsSpX = (628 - 628);
        for (; eEsSpX < IDndK2;) {
            printf ("%c", *(CH3Eyg +eEsSpX));
            eEsSpX = eEsSpX + (635 - 634);
        }
    }
    {
        eEsSpX = (436 - 98) - (1181 - 843);
        for (; eEsSpX < xhbUsS02;) {
            printf ("%c", *(qGoYWFaltku + eEsSpX));
            eEsSpX = (861 - 39) - (1316 - 495);
        }
    }
}

