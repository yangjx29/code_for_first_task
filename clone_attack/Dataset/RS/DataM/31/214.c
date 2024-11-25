struct   student {
    char num [(63 - 43)];
    char uKcUE7exN4 [(326 - 306)];
    char sex [2];
    char RhqIw2G4 [20];
    char BGM2mcriRs [10];
    char nV3aPY5k2Rp [20];
    struct   student *WnOobJH16CE;
}
*a3bTWMS8aRP, *JRMVxhq95In;

void  Ca2OAIGdP7X () {
    int EELXntCsOIhN;
    EELXntCsOIhN = (453 - 453);
    a3bTWMS8aRP = NULL;
    do {
        JRMVxhq95In = (struct   student *) malloc (LEN);
        scanf ("%s", JRMVxhq95In->num);
        if (!('e' != JRMVxhq95In->num[0]))
            break;
        EELXntCsOIhN = EELXntCsOIhN +1;
        scanf ("%s%s%s%s%s", JRMVxhq95In->uKcUE7exN4, JRMVxhq95In->sex, &JRMVxhq95In->RhqIw2G4, &JRMVxhq95In->BGM2mcriRs, JRMVxhq95In->nV3aPY5k2Rp);
        if (EELXntCsOIhN == 1)
            JRMVxhq95In->WnOobJH16CE = NULL;
        else
            JRMVxhq95In->WnOobJH16CE = a3bTWMS8aRP;
        a3bTWMS8aRP = JRMVxhq95In;
    }
    while (1);
    JRMVxhq95In = a3bTWMS8aRP;
}

void  dHem8tz7 () {
    if (a3bTWMS8aRP != NULL) {
        do {
            printf ("%s %s %s %s %s %s\n", JRMVxhq95In->num, JRMVxhq95In->uKcUE7exN4, JRMVxhq95In->sex, JRMVxhq95In->RhqIw2G4, JRMVxhq95In->BGM2mcriRs, JRMVxhq95In->nV3aPY5k2Rp);
            JRMVxhq95In = JRMVxhq95In->WnOobJH16CE;
        }
        while (JRMVxhq95In != NULL);
    };
}

void  main () {
    Ca2OAIGdP7X ();
    dHem8tz7 ();
}

