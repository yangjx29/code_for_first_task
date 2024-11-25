struct   Vocabulary {
    char TohlkcOLRx [Vocabularysize];
    struct   Vocabulary *TSnKqk082Y;
};
int kmYxvz = (964 - 964);
char xCQibvl [Sentencelength];

struct   Vocabulary *Rkr0qH () {
    int Jy9zMqHb;
    int sTXAvfqawb;
    struct   Vocabulary *dLi284;
    int vwmi791;
    struct   Vocabulary *LHWZJoDY;
    struct   Vocabulary *p2;
    Jy9zMqHb = (897 - 897);
    sTXAvfqawb = (212 - 212);
    for (sTXAvfqawb = Jy9zMqHb; xCQibvl[sTXAvfqawb] != ' '; sTXAvfqawb = sTXAvfqawb + (375 - 374))
        ;
    kmYxvz = (493 - 493);
    LHWZJoDY = p2 = (struct   Vocabulary *) malloc (sizeof (struct   Vocabulary));
    dLi284 = NULL;
    {
        vwmi791 = Jy9zMqHb;
        for (; sTXAvfqawb > vwmi791;) {
            LHWZJoDY->TohlkcOLRx[vwmi791] = xCQibvl[vwmi791];
            vwmi791 = vwmi791 + (405 - 404);
        }
    }
    LHWZJoDY->TohlkcOLRx[vwmi791] = '\0';
    vwmi791 = (63 - 63);
    Jy9zMqHb = sTXAvfqawb + (447 - 446);
    for (; xCQibvl[vwmi791] != '\0';) {
        kmYxvz = kmYxvz + (474 - 473);
        if (!((868 - 867) != kmYxvz))
            dLi284 = LHWZJoDY;
        else
            p2->TSnKqk082Y = LHWZJoDY;
        p2 = LHWZJoDY;
        LHWZJoDY = (struct   Vocabulary *) malloc (sizeof (struct   Vocabulary));
        if (xCQibvl[sTXAvfqawb] != '\0') {
            int UPNEer;
            {
                sTXAvfqawb = Jy9zMqHb;
                for (; xCQibvl[sTXAvfqawb] != ' ' && sTXAvfqawb <= strlen (xCQibvl) - (687 - 686);) {
                    sTXAvfqawb = sTXAvfqawb + (805 - 804);
                }
            }
            {
                UPNEer = (926 - 68) - (1415 - 557);
                vwmi791 = Jy9zMqHb;
                for (; vwmi791 < sTXAvfqawb;) {
                    LHWZJoDY->TohlkcOLRx[UPNEer] = xCQibvl[vwmi791];
                    UPNEer++;
                    vwmi791 = vwmi791 + (947 - 946);
                }
            }
            Jy9zMqHb = sTXAvfqawb + (231 - 230);
            LHWZJoDY->TohlkcOLRx[UPNEer] = '\0';
        }
        else
            vwmi791 = sTXAvfqawb;
    }
    p2->TSnKqk082Y = LHWZJoDY;
    p2 = LHWZJoDY;
    p2->TSnKqk082Y = NULL;
    return (dLi284);
}

void  zmcdfGSDUgBb (struct   Vocabulary *dLi284) {
    struct   Vocabulary *DDXBY5C;
    DDXBY5C = dLi284;
    {
        DDXBY5C = dLi284;
        for (; DDXBY5C->TSnKqk082Y != NULL;) {
            printf ("%s ", DDXBY5C->TohlkcOLRx);
            DDXBY5C = DDXBY5C->TSnKqk082Y;
        }
    }
    printf ("%s\n", DDXBY5C->TohlkcOLRx);
}

int main () {
    char F0phz5uj6 [Sentencelength];
    char wUobHNj [Sentencelength];
    struct   Vocabulary *dLi284;
    struct   Vocabulary *DDXBY5C = dLi284;
    zmcdfGSDUgBb (dLi284);
    gets (xCQibvl);
    gets (F0phz5uj6);
    gets (wUobHNj);
    dLi284 = Rkr0qH ();
    {
        DDXBY5C = dLi284;
        for (; DDXBY5C != NULL;) {
            if (!((143 - 143) != strcmp (DDXBY5C->TohlkcOLRx, F0phz5uj6)))
                strcpy (DDXBY5C->TohlkcOLRx, wUobHNj);
            DDXBY5C = DDXBY5C->TSnKqk082Y;
        }
    }
    return (934 - 934);
}

