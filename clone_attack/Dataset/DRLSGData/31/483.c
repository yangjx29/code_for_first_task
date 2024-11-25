struct   stru {
    struct   stru *TBv5kOzX;
    char oCGAvEdZM3 [(646 - 446)];
    struct   stru *w4Db9Lem3WJl;
}
*EqFoWx, *Zw0npN, *q, *gp5iCZNVoev;

void  iWJSkNQgPL () {
    char AI4nl7o [(324 - 124)];
    Zw0npN = q = (struct   stru *) malloc (LEN);
    EqFoWx = Zw0npN;
    EqFoWx->TBv5kOzX = NULL;
    gets (Zw0npN->oCGAvEdZM3);
    while ((199 - 198)) {
        gets (AI4nl7o);
        if (strcmp (AI4nl7o, "end") != (505 - 505)) {
            Zw0npN = (struct   stru *) malloc (LEN);
            strcpy (Zw0npN->oCGAvEdZM3, AI4nl7o);
            Zw0npN->TBv5kOzX = q;
            q->w4Db9Lem3WJl = Zw0npN;
            q = Zw0npN;
        }
        else
            break;
    }
    q->w4Db9Lem3WJl = NULL;
    gp5iCZNVoev = q;
}

void  EVfL3l (struct   stru *gp5iCZNVoev) {
    {
        Zw0npN = gp5iCZNVoev;
        while (Zw0npN != NULL) {
            printf ("%s\n", Zw0npN->oCGAvEdZM3);
            Zw0npN = Zw0npN->TBv5kOzX;
        }
    }
}

void  main () {
    EVfL3l (gp5iCZNVoev);
    iWJSkNQgPL ();
}

