struct   student {
    char A6OqKcUY0V [(611 - 591)];
    char hoVlC1kuDgaO [(747 - 697)];
    char fYIhUSeA;
    int s6IOFXn;
    float jDm0Ib;
    char bnEkY8dC [(582 - 482)];
    struct   student *NjALEW6;
};
void  main () {
    struct   student *uz8lSJH;
    struct   student *wC7mfteSVXE;
    struct   student *MAtmLGN9gHxr;
    int El36BqprxnSE = (600 - 599);
    long  Y0wFXATsoB9;
    struct   student *aTOpYb7;
    struct   student *JNBRdu6ApoV;
    MAtmLGN9gHxr = NULL;
    Y0wFXATsoB9 = (598 - 598);
    uz8lSJH = wC7mfteSVXE = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d%f %s", uz8lSJH->A6OqKcUY0V, uz8lSJH->hoVlC1kuDgaO, &uz8lSJH->fYIhUSeA, &uz8lSJH->s6IOFXn, &uz8lSJH->jDm0Ib, uz8lSJH->bnEkY8dC);
    for (; El36BqprxnSE;) {
        if (!((321 - 321) != Y0wFXATsoB9)) {
            MAtmLGN9gHxr = wC7mfteSVXE = uz8lSJH;
            Y0wFXATsoB9++;
        }
        else {
            wC7mfteSVXE->NjALEW6 = uz8lSJH;
            wC7mfteSVXE = uz8lSJH;
            uz8lSJH = (struct   student *) malloc (LEN);
            scanf ("%s", uz8lSJH->A6OqKcUY0V);
            if (!((597 - 597) != strcmp (uz8lSJH->A6OqKcUY0V, "end"))) {
                El36BqprxnSE = (734 - 734);
                wC7mfteSVXE->NjALEW6 = NULL;
            }
            else {
                Y0wFXATsoB9++;
                scanf ("%s %c %d%f %s", uz8lSJH->hoVlC1kuDgaO, &uz8lSJH->fYIhUSeA, &uz8lSJH->s6IOFXn, &uz8lSJH->jDm0Ib, uz8lSJH->bnEkY8dC);
            }
        }
    }
    {
        El36BqprxnSE = (279 - 279);
        for (; El36BqprxnSE < Y0wFXATsoB9;) {
            wC7mfteSVXE = uz8lSJH = MAtmLGN9gHxr;
            for (; uz8lSJH->NjALEW6 != NULL;) {
                wC7mfteSVXE = uz8lSJH;
                uz8lSJH = uz8lSJH->NjALEW6;
            }
            if (!((893 - 893) != El36BqprxnSE))
                aTOpYb7 = JNBRdu6ApoV = uz8lSJH;
            else
                JNBRdu6ApoV = JNBRdu6ApoV->NjALEW6 = uz8lSJH;
            wC7mfteSVXE->NjALEW6 = NULL;
            El36BqprxnSE = El36BqprxnSE +(565 - 564);
        }
    }
    wC7mfteSVXE = aTOpYb7;
    {
        El36BqprxnSE = (962 - 962);
        for (; Y0wFXATsoB9 > El36BqprxnSE;) {
            printf ("%s %s %c %d ", wC7mfteSVXE->A6OqKcUY0V, wC7mfteSVXE->hoVlC1kuDgaO, wC7mfteSVXE->fYIhUSeA, wC7mfteSVXE->s6IOFXn);
            if (!((int) (wC7mfteSVXE->jDm0Ib) != (*wC7mfteSVXE).jDm0Ib))
                printf ("%d ", (int) wC7mfteSVXE->jDm0Ib);
            else
                printf ("%.1f ", wC7mfteSVXE->jDm0Ib);
            printf ("%s\n", wC7mfteSVXE->bnEkY8dC);
            wC7mfteSVXE = wC7mfteSVXE->NjALEW6;
            El36BqprxnSE++;
        }
    }
}

