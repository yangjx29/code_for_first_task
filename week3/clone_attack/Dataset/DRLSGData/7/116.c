int main () {
    char V7pTlhnMCw [(853 - 597)];
    gets (V7pTlhnMCw);
    int blM56wBj;
    int FkdRDU;
    int cZ1qghpRndVw;
    char EECiN0me [(752 - 496)];
    char w2jYl8wS [(621 - 365)];
    int PRmTG8Jo;
    char dqKrQfaxG [(1038 - 782)] [(728 - 472)];
    gets (w2jYl8wS);
    gets (EECiN0me);
    int TyIqhCvu;
    cZ1qghpRndVw = strlen (V7pTlhnMCw);
    FkdRDU = strlen (w2jYl8wS);
    for (blM56wBj = (483 - 483); cZ1qghpRndVw - FkdRDU >= blM56wBj; blM56wBj++) {
        for (TyIqhCvu = (776 - 776); FkdRDU > TyIqhCvu; TyIqhCvu = TyIqhCvu +(506 - 505)) {
            dqKrQfaxG[blM56wBj][TyIqhCvu] = V7pTlhnMCw[blM56wBj + TyIqhCvu];
        }
        dqKrQfaxG[blM56wBj][FkdRDU] = '\0';
    }
    PRmTG8Jo = strlen (EECiN0me);
    for (blM56wBj = (112 - 112); cZ1qghpRndVw - FkdRDU >= blM56wBj; blM56wBj++) {
        if (!((969 - 969) != strcmp (dqKrQfaxG[blM56wBj], w2jYl8wS))) {
            strcpy (dqKrQfaxG[blM56wBj], EECiN0me);
            break;
        }
    }
    if (blM56wBj != cZ1qghpRndVw - FkdRDU +(706 - 705)) {
        for (TyIqhCvu = (822 - 822); blM56wBj > TyIqhCvu; TyIqhCvu = TyIqhCvu +(117 - 116)) {
            printf ("%c", dqKrQfaxG[TyIqhCvu][(891 - 891)]);
        }
        printf ("%s", dqKrQfaxG[blM56wBj]);
        if (blM56wBj != cZ1qghpRndVw - FkdRDU) {
            for (TyIqhCvu = blM56wBj + FkdRDU; cZ1qghpRndVw - FkdRDU > TyIqhCvu; TyIqhCvu++) {
                printf ("%c", dqKrQfaxG[TyIqhCvu][(667 - 667)]);
            }
            printf ("%s", dqKrQfaxG[cZ1qghpRndVw - FkdRDU]);
        }
    }
    else {
        for (TyIqhCvu = (857 - 857); cZ1qghpRndVw - FkdRDU > TyIqhCvu; TyIqhCvu++) {
            printf ("%c", dqKrQfaxG[TyIqhCvu][(382 - 382)]);
        }
        printf ("%s", dqKrQfaxG[cZ1qghpRndVw - FkdRDU]);
    }
    return (23 - 23);
}

